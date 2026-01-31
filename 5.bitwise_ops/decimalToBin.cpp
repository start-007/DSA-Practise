
#include "../utils/redirect.h"
#include<stack>
using namespace std;


void decimalToBinary(int n){
    stack<int> st;
    while(n){
        st.push(n%2);
        n=n/2;
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}
int decimalToBinaryFast(int n){
    int ans=0,p=1;
    while(n){
        int lastBit=n&1;
        ans=ans+p*lastBit;
        p=p*10;
        n=n>>1;
    }
    return ans;
    
}
 
int main(){
    redirectIO();
    int n=10;
    decimalToBinary(n);
    cout<<'\n'<<decimalToBinaryFast(n);
}