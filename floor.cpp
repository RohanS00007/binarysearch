#include<bits/stdc++.h>
using namespace std;
int floor(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=target){
            ans=arr[mid];
            low=mid+1;
            
        }
        
        
        else{
            high=mid-1;
        }
    }
    return ans;
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int x=25;
    cout<<floor(arr,size,x);

}