#include<iostream>
using namespace std;
 
class Solution{
	public:
		int maxsubarray(int arr[],int n){
		int maxsum=arr[0];
		int max_till_now= arr[0]<0?0:arr[0];
		
		for(int i=0;i<n;i++){
			maxsum= max(maxsum,max_till_now+arr[i]);
			max_till_now += arr[i];
			if(max_till_now<0) max_till_now=0;
		}return maxsum;
		}
};

int main(){
	int n;
	cin>>n;
	int arr[n]={0};
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	Solution ob;
	cout<<ob.maxsubarray(arr,n);
	
}
