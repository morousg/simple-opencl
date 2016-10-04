#include "../simple-opencl/simpleCL.h"

#define DEVICE 0

int main(){

        float* vector;
        float value;
        int i,found;
        /* SimpleOpenCL types declaration */
        sclHard* hardware;
        sclSoft software;

        /* NDRange 2D size initialization*/
        size_t global_size[2];
        size_t local_size[2];
        size_t dataLength=134217728;
        size_t dataSize=sizeof(float)*dataLength;
    
        global_size[0]=dataLength; global_size[1]=1;
        local_size[0]=1; local_size[1]=1;
        /*local_size[0]=1 might be necessary for CPU devices on apple machines*/


        /* Data generation */
        vector = (float*)malloc(dataSize);
        value = 3;
        for (i=0; i<(int)dataLength; i++){
                vector[i] = (float)i;
        }   

        /* Hardware and Software initialization ##### HERE STARTS THE SimpleOpenCL CODE ####*/
        found=0;
        hardware = sclGetAllHardware(&found);
        software = sclGetCLSoftware("example2.cl","example2",hardware[DEVICE]);

        /* Kernel execution */
        sclManageArgsLaunchKernel( hardware[DEVICE], software,
                                   global_size, local_size,
                                   "%R %a %N",
                                   dataSize, (void*)vector, sizeof(float), (void*)&value, sizeof(float));

        /* Data is read back from the device automatically  ##### HERE ENDS THE SimpleOpenCL CODE ####*/
        /* We print some values to check the results */

        printf("\nExecution successful\n");
        printf("vector[0]=%f vector[10]=%f vector[200]=%f\n",vector[0],vector[10],vector[200]);

        return 0;
    
}
