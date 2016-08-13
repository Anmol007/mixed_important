#include <bits/stdc++.h>
using namespace std;

int count(vector <int> v, int start, int end, int k){
    
    if(start>end) return 0;
    
    int mid= (start+end)/2;
    //cout<<mid<<endl;
    if(v.at(mid)==k) return 1+count(v, mid+1, end, k)+ count(v,start, mid-1, k);
    if(v.at(mid)<k) return count(v, mid+1, end, k);
    if( v.at(mid)>k) return count(v, start, mid-1, k);
}

int main() {
	/*test input
      	15
      	2 5 5 5 6 6 4 4 4 9 9 9 9 1 2
      	9
      	*/
    int n;
    cin>>n;
    vector <int> v;
    int x;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    // for(int i=0; i<n; i++){
    //   cout<<v.at(i)<<endl;
    // }
    int k;
    cin>>k;
    
    int occur=count(v, 0, v.size()-1, k);
    
    cout<<occur;
	// your code goes here
	return 0;
}
