
#include "../utils/redirect.h"

using namespace std;

int setNWithM(int n,int m,int i,int j){
    
    int mask1=~0 << (j+1);
    int mask2= (1<<i)-1;

    return (n & (mask2 | mask1)) |  m<<i;
}

int main(){
    redirectIO();
    int n=15;
    int m=2;
    int i=1,j=3;
    cout<<setNWithM(n,m,i,j);

}