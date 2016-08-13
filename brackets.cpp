#include <bits/stdc++.h>
using namespace std;

int  brackets(int left_remaining, int right_remaining, string s){
    if(right_remaining==0){
        for(int i=0; i<s.size(); i++)
        cout<<s.at(i);
        
        cout <<endl;
        return -1;
    }
    if(left_remaining >0){
        
        
        brackets(left_remaining-1, right_remaining, s + "(");
        //if valid print right paranthesis 
        if(left_remaining<right_remaining){
            brackets(left_remaining, right_remaining-1, s+")");
        }
        
    }
    //more right paranthesis left
    else
        brackets(left_remaining, right_remaining-1, s + ")");
}
    


int main() {
    
    int l, r;
    //numer of left and right paranthesis 
    cin>>l>>r;
    if(l!=r){
        if(l>r) l=r;
        else r=l;
    }
    brackets(l, r,"");
    
    
	return 0;
}
