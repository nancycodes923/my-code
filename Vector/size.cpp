#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.emplace_back(3);//emplace_back is used to construct the element in place, it is more efficient than push_back.
     vec.pop_back();//removes the last element from the vector
    for( int val : vec) {
        cout<<val<< " "; 
    }
    cout<<endl;

    cout<<"front" << vec.front()<< endl;//give front element
    cout<<"back" << vec.back()<< endl;// give back element

    cout<< "val at idx 2" <<vec[2]<< "or" << vec.at(2) << endl;//both will give the same output but at() will throw an out_of_range exception if the index is out of range, while [] will not throw an exception and may cause undefined behavior.
    cout<<vec.size()<<endl;//equal to 3
    cout<<vec.capacity()<<endl;//equal to 4 because when we push back 3rd element then capacity will be doubled from 2 to 4.
    return 0;
}   