#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){
   uint16_t val = 0x400;
   unint8_t* ptr = (uint8_t*)&val;

   if (ptr[0] == 0x40){ 
    printf("big endian\n");
   }

   else if (ptr[1] == 0x40) {
    printf("little endian\n");
   }

   else{
    printf("unknown endianness");
   }
}


