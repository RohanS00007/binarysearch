#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> &stalls, int k,int dist){
    int cowcount=1;
    int lastcow=stalls[0];
    for(int i=1;i<stalls.size();i++){
        if(stalls[i]-lastcow>=dist){
            cowcount+=1;
            lastcow=stalls[i];
        }
        if(cowcount>=k) return true;

    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k){
    sort(stalls.begin(),stalls.end());
    int low=1;
    int n=stalls.size();
    int high=stalls[n-1]-stalls[0];
    while(low<=high){
        long long mid=(low+high)/2;
        if(check(stalls,k,mid)==true){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
    
}

int main(){

}