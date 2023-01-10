#include <stdio.h>
void main(){
	long int a[10000],i,j,x,choice,n;
	FILE *fp,*fout;
	
	printf("Enter your choice of input: \n1.Best Case \n2.Average Case \n3.Worst Case\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			fp=fopen("best.txt","r");
			break;
		
		case 2:
			fp=fopen("average.txt","r");
			break;
			
		case 3:
			fp=fopen("worst.txt","r");
			break;
			
		default:
			printf("Invalid Choice!");
			break;
	}
	
	printf("Enter number of elements to sort:");
	scanf("%d",&n);
	
	//Read numbers from file..
	for(i=0;i<n;i++){
		fscanf(fp,"%d",&a[i]);
	}
	
	//Counting Sort Logic goes here...
	
	
	//print sorted elements in new file:answer.txt
	fout=fopen("answer.txt","w");
	for(i=0;i<n;i++){
	fprintf(fout,"%d\n",a[i]);	
	}
	
	fclose(fout);
}
