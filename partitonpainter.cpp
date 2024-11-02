#include<bits/stdc++.h>
using namespace std;

int check(vector<int>&boards,int maxhr,int k){
    long long last=0;
    int cnt=1;
    for(int i=0;i<boards.size();i++){
        if(last+boards[i]<=maxhr){
            last+=boards[i];
        }
        else{
            last=boards[i];
            cnt++;
        }
    }
    return cnt;
}


int findLargestMinDistance(vector<int> &boards, int k){
    int low=*max_element(boards.begin(),boards.end());
    int high=accumulate(boards.begin(),boards.end(),0);
    while(low<=high){
        long long mid=(low+high)/2;
        int ans=check(boards,mid,k);
        if(ans>k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
    
}



int main(){
    

}