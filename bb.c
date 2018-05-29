#define SIZE 10

void bubbleSort(const int *array ,unsigned int size )/*指向常數資料非常數指標*/
	{
		void swap(int *element1Ptr, int *element2Ptr );
		unsigned int pass;
		unsigned int j;
	
	for (pass= 0;pass<SIZE;++pass){
		 for(j=0;j<size-1;++j){
	    	    
				if(array[j]>array[j+1]){
					swap(&array[j],&array[j+1]);		
				}
			}
		}
    }
    

void swap(int *element1Ptr,int *element2Ptr)
{
	int hold=*element1Ptr;
	*element1Ptr=*element2Ptr;
	*element2Ptr= hold;
}
