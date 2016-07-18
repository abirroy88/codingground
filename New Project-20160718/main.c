#include <stdio.h>
#include <stdlib.h>

void display(int number){
    printf("\nAnswer: %d\n", number);
}

int f(int a[],int len){
    int X=0,Y=0;
    int i,f=0;
    for(i=0;i<len;i++){
        if(a[i]%2 == 0)
            Y+=a[i];
        else
            X+=a[i];
    }
    f=X-Y;
    return (f);
}

int main(){
    int i,size=0,ans=0;
    int *array;
    printf("Hi there! Please enter the size of the array that you want to input: ");
    scanf("%d", &size);
    
    //allocating space dynamically
    array = malloc(size*sizeof(int));
    printf("\nPlease enter the positive values for the array:- \n");
    for(i=0;i<size;i++){
        printf("Value for cell number %d: ", i+1);
        scanf("%d",&array[i]);
        if(array[i]<0){
            printf("Only positive values allowed! The program will now terminate.\n");
            exit(1);
        }
    }
    ans = f(array,size);
    display(ans);
}