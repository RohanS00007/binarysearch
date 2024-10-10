#include<bits/stdc++.h>
using namespace std;
int lowerbound(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=target){ //for upperbound condtion is >target
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
    int arr[]={1,2,3,3,7,8,9,9,9,11};
    int size=10;
    int x=12;
    int y=lowerbound(arr,size,x);
    cout<<y;

}