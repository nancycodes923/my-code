#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={4,2,7,8,1,2,6};
    int sz=7;
    int maxIdx=0;
    int minIdx=0;
    for(int i=1;i<sz;i++){
        if(arr[i]>arr[maxIdx]){
            maxIdx=i;
        }
        if(arr[i]<arr[minIdx]){
            minIdx=i;
        }
    }
        swap(arr[maxIdx],arr[minIdx]);
    for(int i=0;i<sz;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}