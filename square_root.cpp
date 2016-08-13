#include <bits/stdc++.h>
using namespace std;

double square_root(double number){
    
    double start=0;
    double end=number;
    if(number<0) return -1;
    if(number <1) end=1;
    double precision=0.0001;
    double mid;
    while(end - start >precision){
        mid=(start+end)/2;
        double ans= mid*mid;
        if(number==ans) return mid;
        else if(ans<number) start=mid;
        else end=mid;
        
        
    }
    return (start+end)/2;
    
    
}

int main() {
    
    double num;
    cin>>num;
    double sq_rt = square_root(num);
    cout<<sq_rt;
    
	return 0;
}
