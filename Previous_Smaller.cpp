#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int> g = {2,7,6,1,8,5};
    vector<int>ans(g.size(),0);
    stack<int>s;
    for(int i = 0;i<g.size();i++){
        while(!s.empty() && g[i]<= g[s.top( )]){
            s.pop();
        }

        if(s.empty()){
            ans[i] = 111;
        }
        else{
            ans[i] = g[s.top()];
        }
        s.push(i);
    }
    for(int a : ans){
        cout<<a<<" ";
    }
    return 0;
}