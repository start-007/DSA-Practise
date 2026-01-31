
#include "../utils/redirect.h"

using namespace std;

// failed...
int subarray_len_sum(int arr[],const int &n){
    int subarr_len=0;
    for(int i=0;i<n;++i){
        for(int j=i;j<n;++j){
            subarr_len+=(j-i+1);
        }
    }
    return subarr_len;
}

int main(){
    redirectIO();
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }

    cout<<subarray_len_sum(arr,n);
    

}