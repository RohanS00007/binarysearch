// #include<bits/stdc++.h>
// using namespace std;
// int check(int arr[],int pages){
//     int last=arr[0];
//     int cnt=1;
//     for(int i=1;i<=5;i++){
//         if(last+arr[i]<=pages){
//             last+=arr[i];
//         }
//         else{
//             cnt++;
//             last=arr[i];
//         }
    
//     }
//     return cnt;
    
    
// }
// int main(){
//     int arr[]={25,46,28,49,24};
//     int sum=0;
//     int student=4;
//     for(int i=0;i<5;i++){
//         sum+=arr[i];

//     }
    
//     for(int i=49;i<=sum;i++){
//         int  ans=check(arr,i);
//         if(ans==student){
//             cout<<i;
//             break;

//         }
//     }
    

// }
#include<bits/stdc++.h>
using namespace std;
int check(vector<int>& arr,int pages){
    int size=arr.size();
    int pagesstudent=arr[0];
    int students=1;
    for(int i=1;i<=size;i++){
        if(pagesstudent+arr[i]<=pages){
            pagesstudent+=arr[i];
        }
        else{
            students++;
            pagesstudent=arr[i];
        }
    }
    return students;

}



int findPages(vector<int>& arr, int n, int m) {
    if(m>n) return -1;
    
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        long long mid=(low+high)/2;
        int ans=check(arr,mid);
        if(ans>m){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;

    
}

