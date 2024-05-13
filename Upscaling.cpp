#include <iostream>

 
using namespace std;
 
void GenerateCheckerBoard(int n)
{
	for(int i=0;i<2*n;++i)		
	{
		for (int j = 0; j < 2 * n; j++)
		{
		int x = i/2+j/2;
			if(x&1)
        	    cout<<(".");
        	else
        	    cout<<("#");
	}
	cout<<endl;
	}
	
}
// Thanks to flamestorm https://codeforces.com/profile/flamestorm
 
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	GenerateCheckerBoard(n);
 
	}
	return 0; 
	
}
