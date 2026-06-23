// Problem: LeetCode #1 - Two Sum
// Approach: Brute Force (Nested Loops)
// Performance: Beats ~24% of C++ submissions
// Time Complexity: O(N^2)

#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int target;
    void twoSum(int t){
        this->target = t;
        int num[5]={2,1,6,8,7};
        for(int i=0 ; i<5 ;i++){
            for(int j=0; j<5 ; j++){
                if(num[i]+num[j]==target){
                    cout<<"[ "<<i<<", "<<j<<" ]"<<endl;
                }
            }
        }
    }
};
int main(){
    Solution s;
    s.twoSum(8);
}