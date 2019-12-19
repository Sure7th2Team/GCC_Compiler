#include<stdio.h>

int a;

int A()
{
	C();
	E();
	F();
	G();
}
int B(){D();}
int C(){
	H();
	return a+1;
}
int D(){return a;}
int E(){return a+2;}
int F(){return a+4;}
int G(){return a+5;}
int H(){
	I();
	J();
}
int I(){
	printf("I\n");
}
int J(){
	printf("J\n");
}

int main()
{
	printf("Hello World!\n");
	A();
	B();
	
	return 0;
}