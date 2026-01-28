#include<iostream>
#include<algorithm>
#include <typeinfo>
#include<string>
#include<cstring>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
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

template<typename T>
void print_vec(T vec){
    for(auto i:vec){
        cout<<i<<' ';
    }
    cout<<'\n';

}
void vector_class(){
    vector<int> vec(10,15);
    for(vector<int>::iterator it=vec.begin();it!=vec.end();++it){
        cout<<(*it)<<' ';
    }
    cout<<'\n';

    vec.reserve(100); // make capacity =100
    vector<int> d{1,2,3,4,5,6};
    d.push_back(10);
    print_vec(d);
    d.pop_back();
    print_vec(d);

    d.insert(d.begin()+3,10);
    print_vec(d);
    d.insert(d.begin()+3,4,10);
    print_vec(d);
    d.erase(d.begin()+2);
    print_vec(d);

    d.erase(d.begin()+2,d.begin()+5);
    print_vec(d);
    cout<<d.front()<<'\n';
    cout<<d.back()<<'\n';

    d.clear();
    cout<<d.empty()<<'\n';


}

void list_class(){
    list<int> ls{5,2,4,3,1,6};
    print_vec(ls);
    ls.sort();
    print_vec(ls);
    ls.reverse();
    print_vec(ls);
    ls.push_back(10);
    print_vec(ls);
    cout<<ls.back()<<'\n';
    ls.pop_back();      
    print_vec(ls);
    cout<<ls.front()<<'\n';
    ls.pop_front();
    print_vec(ls);
    ls.push_front(-1);
    print_vec(ls);
    for(list<int>::iterator it=ls.begin();it!=ls.end();++it){
        cout<<*it<<':';
    }
    cout<<'\n';
    ls.remove(4);
    print_vec(ls);

    auto it=ls.begin();
    ++it;
    ++it;
    ls.erase(it);
    print_vec(ls);

    it=ls.begin();
    ++it;
    ls.insert(it,10);
    print_vec(ls);



}
void stack_class(){
    stack<int> st;
    for(int i=0;i<5;++i){
        st.push(i);
    }
    while(!st.empty()){
        cout<<"popping "<<st.top()<<'\n';
        st.pop();
    }
}

void queue_class(){
    queue<int> q;
    for(int i=0;i<10;++i){
        q.push(i);
    }
    
    while(!q.empty()){
        cout<<"removing front: "<<q.front()<<'\n';
        q.pop();
    }
}

void deque_class(){
    deque<int> q;
    q.push_back(1);
    q.push_back(2);
    q.push_back(3);
    q.push_back(4);
    q.push_front(-1);
    q.push_front(-2);
    q.push_front(-3);

    cout<<q.front()<<'\n';
    cout<<q.back()<<'\n';

    q.pop_back();
    print_vec(q);
    while(!q.empty()){
        cout<<"removing front: "<<q.front()<<'\n';
        q.pop_front();
    }

    deque<int> d2 = {10, 20, 30, 40};
    for (int val : d2) {
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    deque_class();
}