//we will be moving on to DMA function of realloc
/*it requires several conditon of already allocating memory using malloc calloc */

//syntx : (datatype*)realloc(ptr,size);
//lets use it 
#define MALLOC(p,n,type)\
   p = (type*)malloc(n*sizeof(type));\
    if(p == NULL)\
    {\
        printf("Insufficient memory ");\
        exit(0);\
    }
#include<stdio.h>
#include<stdlib.h>
void main(){
    int *p1,*p2,sum;
    MALLOC(p1,1,int);
    

    p1=(int*)realloc(p1,5);
    if(p1==NULL){
        printf("insufficent memory");
    }
    else{
        printf("go ahead sufficent memory");
    }

//reallocation has the ability to change the prrexisisting allocated memory 
}