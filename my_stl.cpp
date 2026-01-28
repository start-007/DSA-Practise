#include<iostream>
#include<algorithm>
#include <typeinfo>

using namespace std;


void find_function(){
    int arr[]={2,3,4,1,4,5,6};

    int key=5;
    int n=sizeof(arr)/sizeof(int);

    int* it=find(arr,arr+n,key);

    cout<<typeid(it).name()<<" "<<it-arr<<'\n';
}

int main(){
    
}