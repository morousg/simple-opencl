/* Kernel and kernel parameters declaration*/
__kernel void example2( __global float *vector,
                        float value,
                        __local float *valueLocal){
        /* Reading the WorkItem index*/
        int local_x = get_local_id(0);
        int global_x = get_global_id(0);
            
        /* Copying the read only value to local memory for faster broadcast reads */
        if (local_x == 0) {
                *valueLocal=value;
        }
        /* Barrier for avoiding valueLocal to be used by any thread before it is fully written. 
        Thanks Bryan Little*/ 
        barrier(CLK_LOCAL_MEM_FENCE); 
        /* Final multiplication, stored on the same vector */
        vector[global_x] = vector[global_x] * *valueLocal;
        /* Barrier to avoid that some OpenCL implementation optimizations 
            make the system to start reading results from the Device to the Host
            before they are completely stored in global memory. */ 
        barrier(CLK_GLOBAL_MEM_FENCE);
}
