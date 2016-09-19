__kernel void example( __global char* buf, __global char* buf2 ){
       int x = get_global_id(0);

       buf2[x] = buf[x];

}
