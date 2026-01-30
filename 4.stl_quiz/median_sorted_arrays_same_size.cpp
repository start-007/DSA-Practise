
// Problem Name: Median of Sorted Arrays
// Problem Difficulty: None
// Problem Constraints: N < 1000
// Problem Description:
// We are given two sorted arrays of same size n. Find the median of an array formed after merging these two sorted arrays.

// Input Format: First line contains the input n. Second and Third line contains n space separated integers.
// Sample Input: 5
// 1 3 5 7 9
// 2 4 6 8 10
// Output Format: Print the median in a single line.
// Sample Output: 5

#include "../utils/redirect.h"

using namespace std;
// MY solution 
float find_median(int arr1[],int arr2[],int n){
    int temp[2*n];
    int j=0,i=0,k=0;

    while(i<n && j<n){
        if(arr1[i]<arr2[j]){
            temp[k]=arr1[i];
            k++;
            i++;
        }
        else{
            temp[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        temp[k]=arr1[i];
        k++;
        i++;
    }
    while(j<n){
        temp[k]=arr2[j];
        k++;
        j++;
    }
    return (temp[(2*n-1)/2]+temp[(2*n)/2])/2.0;
}

// optimized 

int main(){

    redirectIO();

    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;++i){
        cin>>arr1[i];
    }
    for(int i=0;i<n;++i){
        cin>>arr2[i];
    }
    cout<<find_median(arr1,arr2,n);
}

