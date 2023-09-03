#include<stdio.h>

int incr(){
	static int a = 1;
	
	a++;
	
	printf("a = %d\n", a);
}

void main(){
	incr();
	incr();
	incr();
}
