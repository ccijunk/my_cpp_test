#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<queue>
using namespace std;



class Solution {
public:
    static int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> word_set;
        // for_each(wordList.begin(),wordList.end(),[&wordset](&word){wordset.insert(word)})
        for(auto word:wordList) word_set.insert(word);

        queue<pair<string,int>> stack;

        stack.push({beginWord,1});

        while(!stack.empty()){
            if(stack.front().first == endWord ){
                return stack.front().second;
            }
            
            int level = stack.front().second;
            string word = stack.front().first;
            stack.pop();

            for(int i=0 ;i<word.size();i++){

                char letter = word[i];

                for(char c='a';c<='z';c++){
                if(c==letter) continue;

                word[i]=c;
                if (word_set.find(word)!=word_set.end()){
                    stack.push({word,level+1});
                    word_set.erase(word);
                    }
                }

                word[i] =letter;
            }
            
        }
        
    }

};


int main(){


    std::vector<string> v={"hot","dot","dog","lot","log","cog"};
    string beginWord = "hit", endWord = "cog";
    int a = Solution::ladderLength(beginWord,endWord,v);
//    cout<<a<<endl;

    // for_each(s.begin(),s.end(),[](&a){cout<<a<<});
    // for (auto ss:s){
    //     cout<<ss<<endl;
    // }

    // for 


    // cout<<s[:3]+"zzzz"<<endl;
    string b = "1234";
    //cout<<b+'0'<<endl;
   // if(b[0]=='1') cout<<true<<endl;
    //if (b[0]=="1") cout<<true<<endl;
    cout<<atoi(b.substr(3,0).c_str())<<endl;
}
