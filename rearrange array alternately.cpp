#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	
	int i=0,j=n-1;
	vector<int> vec;
	while(i<=j){
		vec.push_back(arr[j]);
		vec.push_back(arr[i]);
		j--;
		i++;
	}
	
	for(int i=0;i<n;i++){
		arr[i]=vec[i];
	}	
	
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
