
#include "../utils/redirect.h"
#include<vector>

using namespace std;

int find1stSetBit(int n){
    int pos=0;
    
    while((n&1)!=1){
        n=n>>1;
        pos=pos+1;
    }
    return pos;
}
pair<int,int> singleNum(vector<int>& arr) {
    // Code here.
    int xorOfNums=0;
    for(int val:arr){
        xorOfNums^=val;
    }
    
    int firstSetPos=find1stSetBit(xorOfNums);
    
    
    int uniqueNum1=0;
    for(auto val:arr){
        if((val>>firstSetPos)&1){
            uniqueNum1^=val;
        }
    }
    
    int uniqueNum2=xorOfNums^uniqueNum1;
    return {min(uniqueNum1,uniqueNum2),max(uniqueNum1,uniqueNum2)};
}
    


int main(){
    redirectIO();
    

}