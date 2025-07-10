#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Solution{
    public:
    bool Sln(string b){
        stack<char>s;
        for(int i = 0;i<b.size();i++){
          if(b[i] =='('||b[i] == '{'||b[i] == '['){
            s.push(b[i]);
            }
            else{
            if(s.empty()){
                return false;
            }
            if(s.top() == '(' && b[i] ==')' ||s.top() == '{' && b[i] =='}' ||s.top() == '[' && b[i] ==']' ){
                s.pop();
            } else{// no matches
                return false;
            }
        }
       
        }
         return s.empty();
    }
};
int main(){
    Solution a;
    
    string s;
    cin>>s;
        cout << boolalpha << a.Sln(s);  // Outputs "true" or "false"

}