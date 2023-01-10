#include<stdio.h>

void main(){
    
	int arr[10], num, i, j, temp;    
    printf("Enter the size of array ");
    scanf("%d", &num);    
    printf("Enter array elements: ");
    for(i = 0; i < num; i++){
	scanf("%d", &arr[i]);
	}
    for(i = 0; i < num - 1; i++){       
        for(j = 0; j < num - i - 1; j++){          
            if(arr[j] > arr[j + 1]){               
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Bubble Sort Implemented!!\n");
    for(i = 0; i < num; i++){
        printf("%d  ", arr[i]);
    }
}
