//leetcode problem 136: Single Number
//Bitwise XOR operator: 0  ^ 0 = 0, 1 ^ 0 = 1, 0 ^ 1 = 1 , 1 ^ 1 = 0
#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>&nums){
    int ans=0;

    for(int val:nums){
    ans=ans^val;

    }
    return ans;

}



//& for pass by reference. if we want to reflect a value in the original vector then we have to pass the vector by reference 