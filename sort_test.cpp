#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    /* code */
    vector<string> v = {"a","1","1","1","abc3","ab2","ab2"，"ab2"，"ab2"};


    sort(v.begin(),v.end(),[](string &str1,string &str2){return str1>str2;});
    for_each(v.begin(),v.end(),[](string str){cout<<str<<endl;});
    return 0;
}