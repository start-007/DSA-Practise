#include<iostream>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;


typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> PBDS;

int main(){


    #ifndef ONLINE_JUDGE
        freopen("C:/Users/ASUS/Downloads/cp-course/practise/input.txt","r",stdin);
        freopen("C:/Users/ASUS/Downloads/cp-course/practise/output.txt","w",stdout);
    #endif
    PBDS st;

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    int inversion_count=0;
    cin>>n;
    for(int i=0;i<n;++i){
        int val;
        cin>>val;
        inversion_count+=(st.size()-st.order_of_key(val));
        st.insert(val);
    }
    cout<<inversion_count;
}