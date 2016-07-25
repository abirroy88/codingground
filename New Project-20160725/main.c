#include <stdio.h>
#include <stdlib.h>

char f(char arr[],int size){
    int i=0;
    for(i=0;i<size;i++){
        arr[i] = 'x';
    }
    return arr[5];
}


void main()
{
    char array[5] = {'m','a','z','b','a'};
    int i;
    f(array,5);
    for(i=0;i<5;i++){
        printf("%c,",array[i]);
    }
}
