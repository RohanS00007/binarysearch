#include<bits/stdc++.h>
using namespace std;
long long check(vector<int>& piles,int k){
        long long totalh=0;
        for(int i=0;i<piles.size();i++){
            totalh+=ceil((double)(piles[i]/(double)k));
        }
        return totalh;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans;
        while(low<=high){
            long long mid=(low+high)/2;
            long long totalh=check(piles,mid);
            if(totalh<=h){
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
