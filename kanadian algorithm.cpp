#include <iostream>

using namespace std;

 class Solution{
public:
    
 int subarray(int arr[],int n){
        int max_sum=arr[0];
        int max_till_now=arr[0]<0?0:arr[0];
        
        for(int i=1;i<n;i++){
            max_sum= max(max_sum, arr[i]+max_till_now);
            max_till_now +=arr[i];
            if(max_till_now<0) max_till_now=0;
        }
        return max_sum;
    }
    
};   

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution ob;
    
    cout<<ob.subarray(arr,n)<<endl;
    return 0;
}

    
