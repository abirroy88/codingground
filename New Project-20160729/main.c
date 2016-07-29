// Taking and returning an int array - static
#include <stdio.h>
#include <stdlib.h>

int f(int arr[],int size){
   int i=0;
   for(i=0;i<size;i++){
       arr[i] += 10;
   }
   return arr[3];
}


void main()
{
   int array[3] = {1,2,3};
   int i;
   f(array,3);
   for(i=0;i<3;i++){
       printf("%d,",array[i]);
   }
   printf("\n");
}
