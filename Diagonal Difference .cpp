#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
 #define ll long long 
 int main()
 {
	int x,right=0,left=0;
	cin>>x;
	int k=x-1;
	int arr[100][100];
	for(int i=0;i<x;++i)
		for(int j=0;j<x;++j)
		cin>>arr[i][j];
		
		
		
		
	for(int i=0;i<x;++i)	
		
		{
		right+=arr[i][i];
		left+=arr[i][k];
		k--;
	}
	cout<<abs(right-left); 
}
	
 
