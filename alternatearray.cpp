
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i = 0, j = n-1;
    	vector<long long> v;
    	while(i <= j){
    	    v.push_back(arr[j]);
    	    v.push_back(arr[i]);
    	    i++,j--;
    	}
    	for(int i = 0; i < v.size(); i++){
    	    arr[i] = v[i];
    	}
     
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
}