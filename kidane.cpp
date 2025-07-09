#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout <<"Enter the number of arrays\n";
	cin >> n;
	vector<int>array(n);
	for(int i=0; i < n; i++){
		cout <<"Enter the members of vector \n";
		cin >>array[i];
		
	}
	
	int sum=0,best=0;
	for(int i=0; i<n; i++){
		sum=max(array[i],sum+array[i]);
		best=max(best,sum);
	}
	cout <<"The maximum sum of subarrays" <<best;
	
}
