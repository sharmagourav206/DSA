#include <bits/stdc++.h>
using namespace std;
bool subArraySum(int arr[],int n, int sum){
	int s = 0,curr = 0;
	for(int e = 0;e<n;e++){
		curr = curr+arr[0];
		while(sum>curr){
			sum+=arr[s];
			s++;
		}
		if(curr==sum){
			return true;
		}
		return false;
	}
}
int main() 
{ 
	int arr[] = {15, 2, 4, 8, 9, 5, 10, 23}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	int sum = 23; 
	cout<<subArraySum(arr, n, sum); 
	return 0; 
} 
