#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

// Word: aabb
// --------
// a a b b
// a a bb
// aa b b
// aa bb

bool isPalindrome(string s, int start, int end){
    while(start <= end){
        if(s[start++] != s[end--])
            return false;
    }    
    return true;
}

void partition_Palindrome(string s, int index, vector<string> &ans, vector<vector<string>> &result){
    if(index == s.size()){
        result.push_back(ans);
        return;
    }
    for(int i = index; i < s.size(); i++){
        if(isPalindrome(s, index, i)){
            ans.push_back(s.substr(index, i-index + 1));
            partition_Palindrome(s, i+1, ans, result);
            ans.pop_back();
        }
    }
}

int main()
{
    vector<string> ans;
    vector<vector<string>> result;
    string s;
    int index =0;
    cout<<"Word: ";
    cin>>s;

    partition_Palindrome(s, index, ans,  result);
    cout<<"--------"<<endl;
    for (auto &iter : result) {
        for (string str : iter) {
            cout << str << " ";
        }
        cout << endl;
    }
}