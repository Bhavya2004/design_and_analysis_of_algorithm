#include <stdio.h>
#include<math.h>

void main(){
	long int i;
	FILE *fp1,*fp2,*fp3;
	
	fp1=fopen("best.txt","w");
	fp2=fopen("average.txt","w");
	fp3=fopen("worst.txt","w");
	
	for(i=1;i<=10000;i++){
		fprintf(fp1,"%d\n",i);
		fprintf(fp3,"%d\n",10000-i+1);
		fprintf(fp2,"%d\n",rand());
	}
}
