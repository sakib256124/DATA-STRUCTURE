// #include<iostream>
// #include<stack>
// using namespace std;
// class Solution {
//     public:
//     stack<pair<int,int>> s;
//     void push(int val){
//         if(s.empty()){
//             s.push({val,val});
//         }else{
//             int minVal = min(val,s.top().second);
//             s.push({val,minVal});
//         }
//     } 
//     void pop(){
//         s.pop();

//     }
//     int top(){
//         return s.top().first;

//     }
//     int getMin(){
//         return s.top().second;
//     }

// };
// int main(){
//     int arr[] = {2,4,-2 -1};
//     Solution s;
    
// }
#include<iostream>
#include<stack>
using namespace std;

class Solution {
    public:
    stack<pair<int, int>> s;

    void push(int val){
        if(s.empty()){
            s.push({val, val});
        } else {
            int minVal = min(val, s.top().second);
            s.push({val, minVal});
        }
    }

    void pop(){
        if(!s.empty()) s.pop();
    }

    int top(){
        return s.top().first;
    }

    int getMin(){
        return s.top().second;
    }

    bool isEmpty(){
        return s.empty();
    }
};

int main(){
    int arr[] = {2, 4, -2, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    Solution s;

    cout << "Pushing values and showing top + min:\n";
    for(int i = 0; i < n; i++){
        s.push(arr[i]);
        cout << "Pushed: " << arr[i]
             << " | Top: " << s.top()
             << " | Min so far: " << s.getMin() << endl;
    }

    cout << "\nPopping and showing top + min after each pop:\n";
    while(!s.isEmpty()){
        cout << "Top: " << s.top()
             << " | Min: " << s.getMin() << endl;
        s.pop();
    }

    return 0;
}
