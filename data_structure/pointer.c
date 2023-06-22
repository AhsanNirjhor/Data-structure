#include<stdio.h>
 
 int main(){
    int a = 5;
    int *p ;// declaretion of pointer
    p = &a;// initializing pointer
    printf("%d\n",a);
    printf("%d\n",*p);// printing value using pointer
    printf("%p\n",p);//printing address of the variable a

    int b[] = {1,2,3,4,5};
    int *q;
    q=b;

    printf("%p\n",a); //address of the firtst element of the array
    printf("%p\n",q);// adress of the first element of the array
    q++;
    printf("%p",q); // address of the second element of the array

    // b[i] = *(q+i) = *(a+i) = *(i+q)=i[q]= i[b] print ith element of a array
    printf("%p\n",a+1);// address of the second element
    printf("%p\n",&a+1);// add another memory byte after the array size
    return 0;
 }
