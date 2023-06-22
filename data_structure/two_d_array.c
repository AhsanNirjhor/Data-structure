#include<stdio.h>

int main(){
    int a[3][3]; // decleration of two d array

    // initialization
    // a[3][3] = {1,2,3,4,5,6,7,8,9} this can be initialized in run time.
    int i, j;
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    // traverse a 2d array
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // to find the memory lcation of a[i][j] in row major a[m][n] array
    // a[i][j] = base + (n(i-1)+(j-1))* sizenof the data type | here i,j starts from 1
    // in column major order:
    // a[i][j]= base + (m(j-1)+(i-1))* size of the datatype.


    // using pointer in 2 d array
    int *p;
    p= &a[0][0] ;// p=a[0] initializing pointer
    // important p =a is not allowed
    printf("%p\n",p); // will print the first element address
    // p/ a/&a[0][0]/ &a/ *a/ a[0] will print the same .
    printf("%p\n",(a+1)); // will print the address of the 2nd row 1st element
    // a[1]/* (a+1)/a[1]/&a[1][0] will print the same 
    printf("%p\n",*(a+1)+2);// will print the address of the 2nd rpw 3rd element address
    printf("%p\n",a[1]+ 1);// will print the second row second element address
    printf("%p\n",&a[i]+1);// will print the third row first element address

    // finding the position 
    //a[i][j] = *(a[i]+j)

    return 0;
}