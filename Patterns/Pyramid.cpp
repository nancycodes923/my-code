#include<iostream>
using namespace std;
int  main(){
    int n;
    cin>>n;  // Add input for n
    for(int i=0;i<n;i++){
        //spaces:n-i-1
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //nums1:i+1
        for(int j=0;j<=i+1;j++){
            cout<<j;
        }
        //nums2
        for(int j=i;j>=0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}