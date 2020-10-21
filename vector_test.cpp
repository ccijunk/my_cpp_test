#include<iostream>
#include<vector>
#include<stack>
int main(){
    using namespace std;
    vector<int> tokens = {1,2,3,4};
    stack<int> new_tokens;
    for(auto token:tokens) new_tokens.push(token);
    new_tokens.top()=100;
    cout<<new_tokens.top()<<endl;
    cout<<13/5<<endl;

}
