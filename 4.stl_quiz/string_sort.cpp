#include<iostream>
#include<algorithm>
#include "../utils/redirect.h"
using namespace std;

bool isPrefixHelper(const string &a,const string &b,int n){
    for(int i=0;i<n;++i){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

bool isPrefix(const string &a,const string &b){
    int a_len=a.length(),b_len=b.length();
    if(a_len<b_len){
        return isPrefixHelper(a,b,a_len);
    }
    return isPrefixHelper(a,b,b_len);

}

bool compare(const string &a, const string &b) {
    if(isPrefix(a,b)) {
        return a.length() > b.length(); // longer first
    }
    return b>a; // lexicographical order
}

int main(){
    redirectIO();
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;++i){
        cin>>s[i];
    }

    sort(s,s+n,compare);
    for(auto str:s){
        cout<<str<<'\n';
    }

}



// Problem Name: String Sort
// Problem Difficulty: 2
// Problem Constraints: N<=1000
// Problem Description:
// Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the strings   ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.

// Input Format: N(integer) followed by N strings.
// Sample Input: 3
// bat
// apple
// batman
// Output Format: N lines each containing one string.
// Sample Output: apple
// batman
// bat
