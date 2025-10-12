#include<stdio.h>

int binarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }else if (arr[mid]<key)
        {
            start = mid + 1;
        }else{
            end = mid -1;
        }
        
        
    }
    return -1;
}
int main(){
    int arr[ ] ={2,3,4,5,6,7,8,9,12,13,14,15,16,17};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 12;
    int x = binarySearch(arr,size,key);
    printf("%d",x);
    return 0;
}