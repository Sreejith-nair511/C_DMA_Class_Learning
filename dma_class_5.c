//finally we move to free()
//syntax is quite short ==free(ptr)
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("enter the number of element");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));//basicsyntax

    //if(ptr==NULL){
        //printf("memory is insufficent");//this is neccesary bcos if its not checked it may cause error
        //exit(0);

    ///}

    //else{
       // printf("memory is successfully allocated ");

    
    free(ptr);
    if(ptr==NULL){
        printf("null initialization");

    }
    else{
        printf("successful relaese");
    }
    }

    