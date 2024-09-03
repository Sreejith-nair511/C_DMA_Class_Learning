//dma is used when the storage is unpredictable
//ever changing scenario
/*4 function for that malloc(),calloc(),realloc(),Free()*/

//this is contain malloc 
/*syntax
    p=(*datatype)malloc(size)
    IT GIVES THE ADDRESS OF THE FIRST BYTE THAT IS ALLOCATED 
    */

//usage of malloc
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("enter the number of element");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));//basicsyntax

    if(ptr==NULL){
        printf("memory is insufficent");//this is neccesary bcos if its not checked it may cause error
        exit(0);

    }

    else{
        printf("memory is successfully allocated ");
    }

    
}