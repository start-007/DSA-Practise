#include<iostream>
#include<algorithm>
#include <typeinfo>
#include<string>
#include<cstring>
using namespace std;


void find_function(){
    int arr[]={2,3,4,1,4,5,6};

    int key=5;
    int n=sizeof(arr)/sizeof(int);

    int* it=find(arr,arr+n,key);

    cout<<typeid(it).name()<<" "<<it-arr<<'\n';
}

void bin_search(){
    int arr[]={1,2,3,5,5,5,7,8,9,10};

    int key=5;
    int n=sizeof(arr)/sizeof(int);

    bool is_present=binary_search(arr,arr+n,key);

    cout<<is_present<<'\n';
    int* lp=lower_bound(arr,arr+n,key);

    cout<<lp-arr<<'\n';
    int * up= upper_bound(arr,arr+n,key);
    cout<<up-arr<<'\n';

    cout<<"No of "<<key<<"'s "<<up-lp;

}

void string_class(){
    string s0;

    cout<<s0.empty()<<'\n';
    s0.append("I love cpp");
    cout<<s0<<'\n';
    s0+=" and python";
    cout<<s0<<'\n';
    cout<<s0.length()<<'\n';
    s0.clear();
    cout<<s0.length()<<'\n';
    s0="Apple";
    string s1="Mango";

    cout<<s0.compare(s1)<<'\n';
    cout<<(s0>s1)<<'\n';

    string s="I love apple and mango";
    string word="apple";

    int idx=s.find(word);
    cout<<idx<<'\n';

    cout<<s<<'\n';
    s.erase(idx,word.length());
    cout<<s<<'\n';

    for(int i=0;i<word.length();++i){
        cout<<word[i]<<":";
    }
    cout<<'\n';
    for(string::iterator it=s.begin();it!=s.end();++it){
        cout<<*it<<":";
    }
    cout<<'\n';

    for(char ch:s){

        cout<<ch<<":";
    }


}
bool compare(string a,string b){
    return a.length()>b.length();
}
void string1_class(){

    int n;
    cin>>n;
    cin.get();

    string strs[n];
    for(int i=0;i<n;++i){
        getline(cin,strs[i]);
    }
    for(string s:strs){
        cout<<s<<'\n';
    }
    sort(strs,strs+n,compare);
    for(string s:strs){
        cout<<s<<'\n';
    }
}

void string2_class(){
    char ch[]="I love today it is sunny";
    char* ptr=strtok(ch," ");
    cout<<ptr<<'\n';
    ptr=strtok(NULL," ");
    cout<<ptr<<'\n';

}
int main(){
    string2_class();
}