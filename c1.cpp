#include <iostream>
#include <cmath>

using namespace std;
int main() {
        int n,m;
	cin>>n>>m;
	int a[n][m];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}

	int maxi, k;

	for(int j = 0; j < n; j++){
		maxi = a[0][j];
	}
	k = 0;

	int max2;
	for(int i=0; i<n; i++){
		max2 = 0;
		for(int j=0; j<n; j++){
			max2 += a[i][j];
		}
		if(max2 > maxi) {
			maxi = max2;
			k = i;
		}
	}

	cout<<maxi<<endl<<k;
	



return 0;
}