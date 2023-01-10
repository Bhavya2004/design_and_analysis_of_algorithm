#include <stdio.h>
void main(){
	long int a[10000],i,j,Value,currentIndex,choice,n,swap;
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
	
	//Heap Sort Logic goes here...
	void heapify(int a[], int n, int i)  
{  
    int largest = i; // Initialize largest as root  
    int left = 2 * i + 1; // left child  
    int right = 2 * i + 2; // right child  
    // If left child is larger than root  
    if (left < n && a[left] > a[largest])  
        largest = left;  
    // If right child is larger than root  
    if (right < n && a[right] > a[largest])  
        largest = right;  
    // If root is not largest  
    if (largest != i) {  
        // swap a[i] with a[largest]  
        int temp = a[i];  
        a[i] = a[largest];  
        a[largest] = temp;  
          
        heapify(a, n, largest);  
    }  
}  

void heapSort(int a[], int n)  
{  
    for ( i = n / 2 - 1; i >= 0; i--)  
        heapify(a, n, i);  
    // One by one extract an element from heap  
    for ( i = n - 1; i >= 0; i--) {  
        /* Move current root element to end*/  
        // swap a[0] with a[i]  
        int temp = a[0];  
        a[0] = a[i];  
        a[i] = temp;  
          
        heapify(a, i, 0);  
    }  
}  
	
	//print sorted elements in new file:answer.txt
	fout=fopen("answer.txt","w");
	for(i=0;i<n;i++){
	fprintf(fout,"%d\n",a[i]);	
	}
	
	fclose(fout);
}
