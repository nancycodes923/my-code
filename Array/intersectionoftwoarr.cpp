#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"enter size of first array: ";
    cin>>n;
    cout<<"enter size of second array: ";
    cin>>m;
    int arr1[n], arr2[m];
    cout<<"enter elements of first array: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"enter elements of second array: ";
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    bool found = false;
    cout<<"intersection of two arrays is: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                found = true;
                cout<<arr1[i]<<" ";
                break;
            }
        }
            }
              if(found == false){
                    cout<<"no common element found"<<endl;    
        }     
    return 0;
}
