#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& weights, int days,int capacity){
        int load=0;
        int cnt=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]<=capacity){
                load+=weights[i];
            }
            else{
                cnt++;
                load=weights[i];
            }
        }
        cnt++;
        if(cnt<=days) return true;
        return false;


}
int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];

        }
        int x=*max_element(weights.begin(),weights.end());
        int low=x;
        int high=sum;
        int ans;
        while(low<=high){
            long long mid=(low+high)/2;
            bool result=check(weights,days,mid);
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