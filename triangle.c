#include <stdio.h>


int main(int argc, char const *argv[])
{
	int n;
	printf("enter number : \n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("*");
		for(int j=1;j<i+1;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}