#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& bloomDay, int m, int k,int day){
        int cnt=0;
        int ans=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                cnt+=1;
            }
            else{
                ans+=cnt/k;
                cnt=0;
            }
        }
        ans+=cnt/k;
        if(ans>=m) return true;
        return false;
}
    
int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long x=(m*1LL)*(k*1LL);
        if(x>n) return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans;
        while(low<=high){
            long long mid=(low+high)/2;
            bool result=check(bloomDay,m,k,mid);
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