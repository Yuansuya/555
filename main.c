#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void bubbleSort(const int *const array,unsigned int size ); /*指向常數資料的常數指標*/

int main(void) {

	int a[SIZE]={1,3,5,7,9,2,4,6,8,10};
	
	unsigned int i; 
	
	puts(" Data items in original order");
	    
		for(i=0;i<SIZE;++i){
			printf("%4d ",a[i]);
		}
		
		bubbleSort(a, SIZE); 
		
		puts("\n Data items in ascending order");
		
		for(i=0;i<SIZE;++i){
			printf("%4d ",a[i]);
	    }
		
		puts("");
}
