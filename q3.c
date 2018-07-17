#include <stdio.h>
#include <stdlib.h>
int main(int argc, long argv[]){
	int v3 = 0;
	int v2 = 0;
	if(argc != 2){
		exit(0);
	}
	for(v3=1;v3<10;v3++){
		for(v2=1;v2<10;v2++){
			printf("%d",v3*v2);
		}
	}
	return 0;

}
