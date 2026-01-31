

#include "../utils/redirect.h"


int main(){
    redirectIO();
    int n;  
    std::cin>>n;
    int unique_num=0;
    for(int i=0;i<n;++i){
        int temp;
        std::cin>>temp;
        unique_num=unique_num^temp;
    }
    std::cout<<unique_num;
}