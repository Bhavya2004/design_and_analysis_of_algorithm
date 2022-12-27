#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main(){
	FILE *fp;
	int i;
//Best case	
//	fp=fopen("demo.txt","w");
//	
//	for(i=1;i<=100000;i++){
//		fprintf(fp,"%d\n",i);
//	}
//	fclose(fp);
//	return 0;

//Worst case
//fp=fopen("demo_worsecase.txt","w");
//
//for(i=100000;i>0;i--){
//	fprintf(fp,"%d\n",i);
//	}
//fclose(fp);
//return 0;

//Average case
fp=fopen("demo_averagecase.txt","w");
for(i=1;i<=100000;i++){
		fprintf(fp,"%d\n",rand());
	}
fclose(fp);
return 0;
}
