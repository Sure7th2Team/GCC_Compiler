#include <stdio.h>
int i = 0;

void C(){
	i++;
}

void A(){
	C();
}

int B(){
	return i+1;
}



int main(){

	A();
	B();
	//printf("%d", i);

	return 0;
}

