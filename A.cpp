#include<iostream>
using namespace std;
int main(){
    int arr[ ] = { -12, 4,43,4,-234};
int n= sizeof(arr)/sizeof(arr[0]);
cout<<n<<endl;
int i;
int maxSum = INT8_MIN;
for(i= 0;i<n;i++){
    int curSum = 0;
 for(int j= i;j<n;j++){
    curSum+=arr[j] ;
    maxSum = max(maxSum,curSum);
 }
  
}
cout<<"Max sum of subarray"<< maxSum;
return 0;
}

