#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;  // Add input for n
    //top half
    for(int i=1;i<=n;i++){
        //Spaces
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=1){
            //Spaces
            for(int j=0;j<2*i-3;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    //Bottom half
    for(int i=n-1;i>=1;i--){
        //Spaces
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=1){
            //Spaces
            for(int j=0;j<2*i-3;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
