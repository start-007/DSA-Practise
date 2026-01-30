
// Problem Name: String Window
// Problem Difficulty: 3
// Problem Constraints: Length of both the strings can be at max 10^4
// Problem Description:
// Ravi has been given two strings named string1 and string 2. He is supposed to find the minimum length substring of the string1 which contains all the characters of string2. Help him to find the substring

// Input Format: The first line of the input contains string1. String1 can be a string containing spaces also.
// The second line of the input contains string2. String2 can be a string containing spaces also.
// Sample Input: qwerty asdfgh qazxsw
// qas
// Output Format: Output the substring in a single line. If no such substring exist then output "No String" without quotes
// Sample Output: qazxs
#include "../utils/redirect.h"
#include<string>
using namespace std;


// will fail
// pair<int,int> min_sub_with_all_chars(string str1,string str2){
//     int left=0,right=str1.size()-1;
//     int str1_len=str1.size();
//     int min_str_left=left,min_str_right=right;
//     while(left<str1_len){
//         bool notfound=false;
//         for(char ch:str2){
            
//             if(str1.find(ch,left)==string::npos){
//                 notfound=true;
//             }
//         }
//         if(notfound) break;
//         min_str_left=left;
//         left++;
//     }
//     while(right>left){
//         bool notfound=false;
//         for(char ch:str2){
//             if(str1.substr(left,right).find(ch)==string::npos){
//                 cout<<right<<'\n';
//                 notfound=true;
//             }
//         }
//         if(notfound) break;

//         min_str_right=right;
//         right--;
//     }

//     return {min_str_left,min_str_right};
// }

/// fail again
pair<int,int> min_sub_with_all_chars(string str1,string str2){
    int arr1[256]={0};
    int arr2[256]={0};
    int str1_len=str1.length(),str2_len=str2.length();
    for(int i=0;i<str1_len;++i){
        arr1[str1[i]]++;
    }
    for(int i=0;i<str2_len;++i){
        arr2[str2[i]]++;
    }
    int left=0,right=str1_len-1;
    bool is_good=true;
    int good_string_left=-1,good_string_right=-1;
    while(left<str1_len){
        is_good=true;
        for(int i=0;i<str2_len;++i){
            if(arr1[str2[i]]<arr2[str2[i]]){
                is_good=false;
            }
        }
        if(!is_good) break;
        good_string_left=left;
        arr1[str1[left]]--;
        left++;
    }
    arr1[str1[good_string_left]]++;
    while(right>=good_string_left){
        is_good=true;
        for(int i=0;i<str2_len;++i){
            if(arr1[str2[i]]<arr2[str2[i]]){
                is_good=false;
            }
        }
        if(!is_good) break;
        good_string_right=right;
        arr1[str1[right]]--;
        right--;
    }
    
    return {good_string_left,good_string_right};
}

int main(){
    
    redirectIO();
    string str1,str2;
    getline(cin,str1);
    cin>>str2;
    pair<int,int> indices=min_sub_with_all_chars(str1,str2);
    if(indices.first==-1 || indices.second==-1){
        cout<<"No String";
    }
    else
        for(int i=indices.first;i<=indices.second;++i){
            cout<<str1[i];
        }
    
}