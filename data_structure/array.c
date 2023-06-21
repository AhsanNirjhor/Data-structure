#include<stdio.h>

int main(){
    int n;
    printf("Enter size of the array\n");
    scanf("%d",&n);

    //declaretion of array
    int a[20];// a[10]
    int i;

    //taking input of a array
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    //traversing an array
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    //insertion of a array
    int pos, element; //pos is the position you want to insert a number , element you want to insert
    scanf("%d %d",&pos,&element);
    if(pos<=0 || pos>=n+1){
        printf("Invalid insertion");
    }
    else {
        
        for(i= n-1;i>=pos-1;i--){
            a[i+i] = a[i];
        }
        a[pos -1] = element;
        n++;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    

}