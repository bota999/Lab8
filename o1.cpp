#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int A[n][n];
	int s=0;
	for(int i = 0; i < n; i++){
	        
		
				for(int j=0; j < n; j++){
				A[0][j]=1;
				
				A[n-1][j]=1;

				
						if(i>1){
				 A[i][0]=1;		
									
			} else A[i][j]=0;
			  A[i][n-1]=1;
                }
            }

            for(int i=2; i<n-2; i++){
            for(int j=1; j<n-2; j++){
     
            	A[i][n-2]=1;
                A[n-2][j+1]=1;
             if(j>=1) A[2][j]=1;
             else A[i][j]=0;
	       }
	       }

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout.width(3);
			cout << A[i][j]<< " ";
		}
		cout << endl;
	}


return 0;
}       