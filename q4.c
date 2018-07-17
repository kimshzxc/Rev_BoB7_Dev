#include <stdio.h>
#include <stdlib.h>

int main(){
        printf("%d\n",foo(0xa));
	return 0;
}

int foo(int a1){
        if(a1<0){
		exit(0);
	}
	else{
		if((a1 == 0x1) || (a1 == 0x2)) 
			return 1;

		else
			return foo(a1-0x1)+foo(a1-0x2);
	}
}

