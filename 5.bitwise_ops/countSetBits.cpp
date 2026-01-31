
#include "../utils/redirect.h"

using namespace std;

int countSetBits(int n){ // O(no of set bits)
    int count=0;
    while(n){
        n=n&(n-1); // removes last set bit
        count++;
    }
    return count;
}


int main(){
    redirectIO();
    cout<<countSetBits(5)<<'\n';
    cout<<__builtin_popcount(5);
}