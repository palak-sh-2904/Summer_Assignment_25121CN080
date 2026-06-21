#include<stdio.h>
int main(){
    int a[]={1,3,5,7};
    int b[]={2,4,6,8};
    int n1=4;
    int n2=4;
    int c[8];
    int i=0;
    int j=0;
    int k=0;
    while(i<n1&&j<n2){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n2){
        c[k]=b[j];
        j++;
        k++;
    }
    printf("Merged Array: ");
    for (i=0;i<8;i++){
        printf("%d ", c[i]);
    }
    return 0;
}