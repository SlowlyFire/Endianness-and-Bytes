#include <stdio.h>
#include "ex1.h"

int main() {

	printf("%s\n", is_big_endian());

	printf("merge bytes of 0x12893456 and xABCDEF19\n");
	printf("merge bytes: 0x%lx\n", merge_bytes(0x12893456, 0xABCDEF19));

	printf("the original string is: 0x1234CDEF and the byte is 0xAB\n");
	printf("put byte at i=0: 0x%lx\n", put_byte(0x1234CDEF, 0xAB, 0));
	printf("put byte at i=1: 0x%lx\n", put_byte(0x1234CDEF, 0xAB, 1));
	printf("put byte at i=2: 0x%lx\n", put_byte(0x1234CDEF, 0xAB, 2));
	printf("put byte at i=3: 0x%lx\n", put_byte(0x1234CDEF, 0xAB, 3));

	return 0;
}
