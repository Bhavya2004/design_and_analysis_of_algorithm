#include <stdio.h>

void main(){
	int n,result;
	printf("Enter your number:");
	scanf("%d",&result);
	print(n,result);
}
print(n,result){
	if(n<=result)
    {
         printf(" %d ",n);
         print(n+1,result);
    }
}
