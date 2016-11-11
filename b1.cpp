#include <iostream>
#include <cmath>

using namespace std;
 int main() {
        int n;
	cin>>n;
	int a[n][n];
	bool ok=true;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
		cin>>a[i][j];
	
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++){
			if(a[i][j]!=a[j][i]) ok=false;	
	}
		if(ok==true) cout<< "yes";
		else cout<< "no";
	              
return 0;
}