
#include "../utils/redirect.h"
#include<vector>
#include<cmath>
using namespace std;
// fails for negative numbers;;;

void sumBits(vector<int> &bitSum,int n){
    int i=0;

    while(n){
        int lastBit=n&1;
        bitSum[i]+=(lastBit);
        i++;
        n=n>>1;
    }
    

    
}
int uniqueNum3(vector<int> &arr){
    
    vector<int> bitSum(64,0);
    int n=arr.size();
    for(auto val:arr){
        sumBits(bitSum,val);
    }
    int unique_num=0;
    
    for(int i=0;i<64;++i){
        if(bitSum[i]%3){
            unique_num|=(1<<i);
        }
    }
    if(bitSum[63]%3){
        unique_num-=(1<<63);
    }
    return unique_num;
}



int main(){
    redirectIO();
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];

    }
    cout<<uniqueNum3(arr);
    

}