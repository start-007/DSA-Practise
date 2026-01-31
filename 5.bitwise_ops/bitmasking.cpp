
#include "../utils/redirect.h"

bool is_even(int n){
    return !(n&1);
}
int getBit(int n,int k){

    return (n>>k) & 1;
}
int setIthBit(int n,int i){
    return n | (1<<i);
}
int clearIthBit(int n,int i){
    return n & ~(1<<i);
}
int updateIthBit(int n,int i,int v){

    return (n& ~(1<<i)) | v<<i;
}

int main(){
    redirectIO();
    int n=5;
    std::cout<<n<<" is "<<(is_even(n)?"Even":"Odd")<<'\n';
    n=3;
    std::cout<<n<<" is "<<(is_even(n)?"Even":"Odd")<<'\n';
    int k=1;
    std::cout<<n<<"'s "<< k<<" bit is "<<getBit(n,k)<<'\n';
    n=5;
    std::cout<<n<<"'s "<< k<<" bit is "<<getBit(n,k)<<'\n';
    std::cout<<n<<"'s "<< k<<" bitset is "<<setIthBit(n,k)<<'\n';
    std::cout<<n<<"'s "<< k<<" bit clear is "<<clearIthBit(n,k)<<'\n';
    std::cout<<updateIthBit(5,2,0)<<'\n';
    std::cout<<updateIthBit(5,3,1);

    
}