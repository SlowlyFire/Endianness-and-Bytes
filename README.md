# Endianness-and-Bytes  
**in this project we run a code that checks if your computer runs by using little endian architecture or by using
big endian architecture.**    
In computing, endianness is the order or sequence of bytes of a word of digital data in computer memory. Endianness is primarily expressed as big-endian (BE) or little-endian (LE). A big-endian system stores the most significant byte of a word at the smallest memory address and the least significant byte at the largest. A little-endian system, in contrast, stores the least-significant byte at the smallest address.  

for more information about endianness, click the following link:  
https://en.wikipedia.org/wiki/Endianness  

**the program prints Little Endian or Big Endian to the screen (stdout) by the architecture your machine works with.**    

Then we have 2 more functions: merge_bytes and put_byte.  

## merge_bytes:  
the function gets 2 unsigned long numbers: x and y. then creats an unsigned long argument
which will be combined from half bytes of x (the MSB bytes) and half bytes of y (the LSB bytes).    
![image](https://user-images.githubusercontent.com/83518959/192070388-d9179e48-a770-449b-9c4a-16651361694e.png)  

## put_byte:  
the function gets 1 unsigned long (x) and an unsigned char (b), and also an index (i).
then returns a new unsigned long argument that is combined from the old x and the byte b in index i, instead of the old byte of x.  
![image](https://user-images.githubusercontent.com/83518959/192070504-c27f5c12-eb41-4273-afea-42e87fd97232.png)   
