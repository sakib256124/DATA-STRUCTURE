#include<stdio.h>

int main(){
    int arr1[3][3] = {{2,3,4},{5,6,1},{9,0,5}};
    int arr2[3][4] = {{1,2,3,4},{8,7,9,3},{-2,-3,7,1}};
    int result[3][4];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            int sum = 0;
            for(int k = 0;k<3;k++){
                sum += arr1[i][k]*arr2[k][j];
            }
            result[i][j] = sum;
        }
    }
    for(int i = 0;i<3;i++){
        for (int j = 0; j < 4; j++)
        {
            printf("%d  ",result[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}