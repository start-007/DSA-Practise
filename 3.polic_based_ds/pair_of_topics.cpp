#include<iostream>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;


void scan_vector_input(vector<int> &V,const int &n){
    for(int i=0;i<n;++i){
        int tempval;
        cin>>tempval;
        V[i]=tempval;
    }

}

int main(){


    #ifndef ONLINE_JUDGE
        if (!freopen("C:/Users/ASUS/Downloads/cp-course/practise/input.txt", "r", stdin)) {
            cerr << "input.txt open failed\n";
        }
        if (!freopen("C:/Users/ASUS/Downloads/cp-course/practise/output.txt", "w", stdout)) {
            cerr << "output.txt open failed\n";
        }
   
    #endif

    int n;
    cin>>n;
    vector<int> a(n),b(n);
    scan_vector_input(a,n);
    scan_vector_input(b,n);
    
    tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update> st;
    vector<int> c(n);
    for(int i=0;i<n;++i){
        c[i]=a[i]-b[i];
    

    }
    long long int inversion_count=0;

    for(int i=0;i<n;++i){

        inversion_count+=(st.size()-st.order_of_key({-c[i],1000000}));
        st.insert({c[i],i});
    }
    cout<<inversion_count;


    
}