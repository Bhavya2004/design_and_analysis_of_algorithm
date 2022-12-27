//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233...
#include <stdio.h>

void main(){
	int m,x;
	printf("Enter your number:");
	scanf("%d",&m);
	
	for(x=0;x<m;x++){
		printf("%d, ",fibonacci(x));
	}
}
 fibonacci(int x) { 
  if (x==0) {
    return 0;
  }
  else if(x==1){
  	return 1;
  }
  else{
  return fibonacci(x - 1) + fibonacci(x - 2);	
  }
  
}
