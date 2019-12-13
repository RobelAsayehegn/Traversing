#include <stdio.h>
#include <stdlib.h>

void Display(int ceillingNumber,int fibonaccibiginning[],int fibonacciArray[]);

int ceillingNumber1;
int fibonacciArray[22];

int main() {
    int i, t1 = 0, t2 = 1, nextTerm;
    
    int fibonaccibiginning[] = {0,1};
    
    printf("Enter the ceilling number: ");
    scanf("%d", &ceillingNumber1);	
	//fibonacciArray[ceillingNumber1];
    printf("Fibonacci Series: ");
    Display(ceillingNumber1,fibonaccibiginning,fibonacciArray);
    int ii;
    printf("\nprinting from array");
    for(ii = 0;ii < ceillingNumber1 ;ii++){
    	if(fibonacciArray[ii]!=NULL){
    		printf("\n%d ,",fibonacciArray[ii]);
		}
    	else if(fibonacciArray[0] == 0){
    		printf("\n%d ,",fibonacciArray[0]);
		};
	}
    return 0;
}

void Display(int ceillingNumber,int fibonaccibiginning[],int fibonacciArray[]){
    int i = 0,sum = 0;
    if (fibonaccibiginning[1] <= ceillingNumber)
    {
        for (i; fibonaccibiginning[0] <= ceillingNumber; ++i){
            printf("%d, ", fibonaccibiginning[0]);
            fibonacciArray[i] = fibonaccibiginning[0];
            sum = fibonaccibiginning[0] + fibonaccibiginning[1];
            fibonaccibiginning[0] = fibonaccibiginning[1];
            fibonaccibiginning[1] = sum;
        }    
    }
    //return
}


struct node *root        = newNode(3); 
     root->left              = newNode(2); 
     root->right             = newNode(1); 
     root->left->left        = newNode(1); 
	 root->left->right       = newNode(1);
     root->left->left->left  = newNode(1);  
  	 root->left->left->right = newNode(0);
  	 root->right->left       = newNode(1);
  	 root->right->right      = newNode(0);
  	 
  	 //    printf("\nprinting from array");
//    for(ii = 0;ii < ceillingNumber1 ;ii++){
//    	if(fibonacciArray[ii]!=NULL){
//    		printf("\n%d ,",fibonacciArray[ii]);
//		}
//    	else{
//    		if(fibonacciArray[0] == 0){
//    			printf("\n%d ,",fibonacciArray[0]);
//		    }
//		}
//	}
