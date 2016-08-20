#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n=3; // length of string
	for(int i=0; i<1<<n; i++){
	    for(int j=0; j<n; j++){
	        if(i&1<<j)
	        cout<<"0";
	        else cout<<"1";
	    }
	    cout<<endl;
	}
	return 0;
}
