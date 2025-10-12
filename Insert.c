#include<stdio.h>
int main(){
    int arr[20] = {12,34,45,56,78,89,90,87};
    int size = 8;
    int pos, data;
    printf("Enter the position number : ");
    scanf("%d",&pos);
    printf("Enter the value : ");
    scanf("%d",&data);
    for(int i = size;i>= pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = data;
    size++;
    for(int i = 0;i<size;i++){
        printf("arr[%d] = %d \n",i,arr[i]);
    }
    return 0;
}