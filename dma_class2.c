//macro of malloc---> macro is a set of code which the complier runs as a single code 
/*it is incrediblly useful if the code needs to be called multiple times */
//we will be creating amacro for malloc & use it to add 2 number 

//macro for malloc
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
    MALLOC(p2,1,int);
    *p1=10;
    *p2=20;
    sum=*p1+*p2;
    printf("%d +%d=%d",*p1,*p2,sum);
}