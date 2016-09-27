#include "../simple-opencl/simpleCL.h"

#define DEVICE 0

int main() {
   char buf[]="Hello, World!";
   size_t global_size[2], local_size[2];
   int found, worksize;
   sclHard* hardware;
   sclSoft software;

   // Target buffer just so we show we got the data from OpenCL
   worksize = strlen(buf);
   char buf2[worksize];
   buf2[0]='?';
   buf2[worksize]=0;
    
   // Get the hardware
   hardware = sclGetAllHardware(&found);
   // Get the software
   software = sclGetCLSoftware( "example.cl", "example", hardware[DEVICE] );
   // Set NDRange dimensions
   global_size[0] = strlen(buf); global_size[1] = 1;
   local_size[0] = global_size[0]; local_size[1] = 1;
    
   sclManageArgsLaunchKernel(hardware[DEVICE], software, global_size, local_size,
                               " %r %w ",
                              worksize, buf, worksize, buf2 );
    
   // Finally, output out happy message.
   printf("\n");
   puts(buf2);

   sclReleaseAllHardware(hardware, found);
   return 0;
}
