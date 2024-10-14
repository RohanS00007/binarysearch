#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n){
    int low=0;
    int high=n-1;
    int mini=INT_MAX;
    while(low<=high ){
        int mid=(low+high)/2;
        
        if(arr[low]<=arr[mid]){
            mini=min(mini,arr[low]);
            low=mid+1;
        }
        else{
            mini=min(mini,arr[mid]);
            high=mid-1;
        }
    }
    return mini;
    
}
int main(){
    int arr[]={4,5,6,7,0,1,2};
    int size=7;
    cout<<search(arr,size);
    
}