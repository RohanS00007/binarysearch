class Solution {
public:
    int check(vector<int>&nums,int maxhr){
    long long last=0;
    int cnt=1;
    for(int i=0;i<nums.size();i++){
        if(last+nums[i]<=maxhr){
            last+=nums[i];
        }
        else{
            last=nums[i];
            cnt++;
        }
    }
    return cnt;
}

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),  nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while (low <= high) {
            long long mid = (low + high) / 2;
            int ans = check(nums, mid);
            if (ans > k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};

#include<bits/stdc++.h>
using namespace std;
int main(){

}