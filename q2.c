#include <stdio.h>

int foo(int v1, int v2, int v3)
{
	int a = 0;
	a = v1+v2;

	return a+v3;
}
int main(){
	int a1 = 0;
	int a2[256] = {0} ;
	foo(0x1,0x2,0xa);
	printf("%d",foo(0x5,0x1,0x2));
	return 0;
}
