#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>vec={'a','b','c','d','e'};
    cout<<"size ="<<vec.size()<<endl;//size of vector
    for(char val: vec){//for each loop 
        cout<<val<<endl;
    }
    return 0;
}// for int we can also use each loop but we have to use int instead of char in declaration of val and vector.


//push_back() is used to add element at the end of vector
//vec.push_back(10);example of push_back() function

//pop_back() is used to remove last element of vector
// vec.pop_back(); always last index removed 
//so no need to tell which index to remove


// cout<<vec.front()<<endl; // it will print first element.
// cout<<vec.back()<<endl; // it will print last element.


//cout<<vec.at(2)<<endl;
// it will print element at index 2. 
//if we try to access index which is out of bound then it will give error but if we try to access index which is out of bound using [] operator then it will not give error but it will give garbage value. 
//so it is better to use at() function instead of [] operator.
