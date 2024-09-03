//we now move onwards to calloc which is used to allocate multple block
//here is its macro

#define CALLOC(p,n,type);\
p=(type*)calloc(n,sizeof(type));\
  if(p==NULL){\
    printf("insufficent memory");\
    exit(0);\
  }
//using the macro to add 2 number 
//although calloc as a whole is used for array 
//we observe that calloc takes 2 argument 
#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr1,*ptr2,Sum;
    CALLOC(ptr1,1,int);
    CALLOC(ptr2,1,int);

    *ptr1=10;
    *ptr2=40;
    Sum=*ptr1+*ptr2;
    printf("%d+%d=%d",*ptr1,*ptr2,Sum);

}