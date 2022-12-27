#include <stdio.h>
#include <time.h>

int main(){
	clock_t start,end;
	double cpu_time_used;
	int n,i;
	int result=1;
	printf("Enter your number:");
	scanf("%d",&n);
	start=clock();
	for(i=n;i>1;i--){
		result=result*i;	
	}
	printf("%d",result);
	end=clock();
	cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
	printf("\n time %lf",cpu_time_used);
}
