#include<string.h>
#include<stdio.h>
#define N 80
int fun(char *s)
{
  unsigned char i =0, number=0;

  while(s[i]!='\0'){
	 if(s[i]==' '){
		number++;
	 }
	 i++;
 }
 return ++number;
}
void main()
{ 
  FILE *wf;
  char line[N]; 
  int num=0;
  printf("Enter a string:\n "); 
  gets(line);
  num=fun(line);
  printf("The number of word is:%d\n\n ",num);
/******************************/
  wf=fopen("out.dat","w");
  fprintf(wf,"%d",fun("a big car"));
  fclose(wf);
/*****************************/
}
