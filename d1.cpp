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

	int maxi, k, l;
	for(int i = 0; i < n; i++){
	for(int j = 0; j < m; j++){
		maxi = a[i][j];
	}
	}
	k = 0;
	l = 0;
	int max2;
	for(int i=0; i<n; i++){
		max2 = 0;
		for(int j=0; j<m; j++){
			max2 = a[i][j];
		}
		if(max2 > maxi) {
			maxi = max2;
			k = i;
			l = j;
		}
	}

	cout<<maxi<<endl<<k;
	



return 0;
}