#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,7,8,1,2,0};
    int sz=7;
    int sum=0;
    int product=1;
    for(int i=0;i<sz;i++){
        sum+=arr[i];
        product*=arr[i];
    }
cout<<"sum="<<sum<<endl;
cout<<"product="<<product<<endl;
return 0;
}