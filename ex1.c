//Gal Giladi

#include <stdio.h>
#include "ex1.h"

/*
 * function name: is_big_endian
 * input: -
 * output: int
 * fucntion operation: checking if the machine is working with big endian
 * or little endian
 */
char* is_big_endian()
{
    //i is 8 bytes and the LSB is 00000001
    unsigned long i=1;
    //char* is 8 bytes size, same as unsigned long
    char* c=(char*)&i;
    //checking if the byte that is taken is 00000000 (MSB) or 00000001 (LSB)
    //if 00000001 little endian
    if(*c!=0)
        return "Little Endian";
    //else 00000000 big endian
    else
        return "Big Endian";
}

/*
 * function name: merge_bytes
 * input: unsigned long x, unsigned long int y
 * output: unsigned long
 * fucntion operation: creating an unsigned long argument which will be combined
 * from half bytes of x and half bytes of y, from MSB to LSB.
 */
unsigned long merge_bytes(unsigned long x, unsigned long int y)
{
    //using a mask to nullify the second half of the bits of x
    //and to nullify the first half of the bits of y
    x=x&0xFFFF0000;
    y=y&0x0000FFFF;
    //then we sum and return the result
    unsigned long result=x + y;
    return result;  
}

/*
 * function name: put_byte
 * input: unsigned long x, unsigned char b, int i
 * output: unsigned long
 * fucntion operation: returns an unsigned long argument that is combined from
 * x and a byte in place i that is switched with byte b
 */
unsigned long put_byte(unsigned long x, unsigned char b, int i)
{
    //displaying examples all over the function for better understanding
    //if i=0: mask=0x11000000
    //if i=1: mask=0x00110000 
    unsigned long mask=0xFF000000>>(i*8);
    
    //if i=0: notMask=0x00111111
    //if i=1: notMask=0x11001111
    unsigned long notMask=~mask;

    //if i=0: newMask=0x0034CDEF
    //if i=1: newMask=0x1200CDEF
    unsigned long newMask=notMask&x;

    //now b=0x000000AB
    unsigned long newB=b;
    
    //if i=0: shift=0xAB000000
    //if i=1: shift=0x00AB0000
    unsigned long shift=newB<<(24-i*8);

    // insert the byte we with to put
    return(newMask | shift);
}