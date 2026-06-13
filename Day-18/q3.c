#include <stdio.h>
int main(){
    int n,i,key;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d", &key);
    int low = 0;
    int high = n - 1;
    int mid;
    int found = 0;
    while(low<=high){
        mid = (low + high) / 2;
        if(arr[mid] == key){
            printf("Element found at index %d", mid);
            found = 1;
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found == 0){
        printf("Element not found");
    }
    return 0;
}
