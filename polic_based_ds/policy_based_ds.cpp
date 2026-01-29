#include<iostream>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;


typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>  PBDS;



int main(){

    #ifndef ONLINE_JUDGE
        
        if (!freopen("C:/Users/ASUS/Downloads/cp-course/practise/input.txt", "r", stdin)) {
            cerr << "input.txt open failed\n";
        }
        if (!freopen("C:/Users/ASUS/Downloads/cp-course/practise/output.txt", "w", stdout)) {
            cerr << "output.txt open failed\n";
        }
   
    #endif
   
    PBDS st;
    st.insert(1);
    st.insert(-1);
    st.insert(1);
    st.insert(4);
    st.insert(3);
    for(int i=0;i<st.size();++i){
        cout<<i<<" -> "<<*st.find_by_order(i)<<'\n';
    }

    cout<<st.order_of_key(2);

}