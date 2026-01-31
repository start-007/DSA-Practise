
#include "../utils/redirect.h"
#include<vector>

using namespace std;
// fails for negative numbers
int power(int n,int a){
    int ans=1;
    while(a){
        if(a&1){
            ans*=n;
        }
        a=a>>1;
        n*=n;
    }
    return ans;
}

int main(){
    redirectIO();
    
    
    cout<<power(3,5);
    

}