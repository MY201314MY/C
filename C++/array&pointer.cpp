#include <iostream>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void exec(char (*p)[24]){
	puts(p[0]);
	puts(p[1]);
} 

int main(int argc, char** argv) {
	char buffer[2][24] = {"Hello,world.", "mongoose"};
	
	puts(buffer[0]);
	puts(buffer[1]);

	char (*p)[24];
	p = buffer;
	exec(buffer);
	
	char *q[2];
	q[0] = buffer[0];
	q[1] = buffer[1];
	
	printf("buffer[0]:%s	buffer[1]:%s\r\n", q[0], q[1]); 
	
	return 0;
}



