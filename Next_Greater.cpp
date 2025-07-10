#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int> g = {6,8,0,1,3};
    vector<int>ans(g.size() ,0);
    stack<int>s;
    for(int i = g.size()-1; i>=0; i--){
        while(!s.empty() && g[i]>=g[s.top()]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
            }
        else{
            ans[i] = g[s.top()];
        }
         s.push(i);   
        }
        for( int a : ans){
            cout<< a <<" ";
        }
        return 0;
}

