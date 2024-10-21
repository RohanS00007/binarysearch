#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& nums, int threshold, int divi){
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=ceil((double)(nums[i]/(double)divi));
        }
        if(sum<=threshold){
            return true;
        }
        return false;
}
int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans;
        while(low<=high){
            long long mid=(low+high)/2;
            bool result=check(nums,threshold,mid);
            if(result==true){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return ans;
        
        
}

int main(){

}