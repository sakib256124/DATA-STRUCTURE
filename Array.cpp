#include<iostream>
using namespace std;
int main(){
    int marks[] = {23,53,53,26,75,88,3,49};
       int size = 8;
       for(int i = 0;i<size -1;i++){
        for(int j = 0;j<size -1-i;j++){
            if(marks[j]>marks[j+1]){
                int temp = marks[j];
                marks[j] = marks[j+1];
                marks[j+1] = temp;
                
            }
        }
       }

       for (int i = 0; i < size; i++)
       {
        cout<<marks[i]<<" ";
       }
       

    return 0;
}