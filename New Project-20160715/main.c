#include <stdio.h>
#include <stdlib.h>
int calculate(int arr[], int len){
    int i, largest=0, secondLargest=0;
    for(i=0;i<len;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    for(i=0;i<len;i++){
        if(arr[i]!=largest){
            if(arr[i]>secondLargest){
                secondLargest=arr[i];
            }
        }
    }
    if(secondLargest==0)
        return -1;
    else
        return secondLargest;
}

void main()
{
    int i,*userArray,size=0, secondLargest=0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    userArray  = malloc(size * sizeof(int));
    for(i=0;i<size;i++){
        printf("\nEnter array-value for cell number %d: ",i+1);
        scanf("%d", &userArray[i]);
    }
    secondLargest=calculate(userArray,size);
    printf("\nSecond largest number in the array is %d\n",secondLargest);
}

