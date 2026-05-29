#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    cout<<vec.size()<<endl;//equal to 3
    cout<<vec.capacity()<<endl;//equal to 4 because when we push back 3rd element then capacity will be doubled from 2 to 4.
return 0;
}