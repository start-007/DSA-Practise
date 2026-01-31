#include "../utils/redirect.h"
#include<unordered_map>

using namespace std;

void unlock(int arr[],int n,int k){
    
    int curr_large=n,swaps=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;++i){
        mp[arr[i]]=i;
    }
    
    
    for(int i=0;i<n;++i){
        if(arr[i]!=curr_large && swaps<k){
            int idx=mp[curr_large],value=arr[i];
            swap(arr[mp[curr_large]],arr[i]);
            
      
            mp[curr_large]=i;
            mp[value]=idx;
          
            swaps++;
        }
        curr_large--;
    }
   
    
}
int main(){
    redirectIO();
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    
    unlock(arr,n,k);
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}