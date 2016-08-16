#include <bits/stdc++.h>
using namespace std;
int length;

void permute(char *str, int currentFocus){
    
    if(currentFocus+1==length){
        cout<<str<<endl;
        return;
    }
    else{
   
   
        char temp;
        for(int i=currentFocus; i<length; i++){
            temp=str[i];
            str[i] = str[currentFocus];
            str[currentFocus]=temp;
        
            permute(str, currentFocus+1);
            
            temp=str[i];
            str[i] = str[currentFocus];
            str[currentFocus]=temp;
            
        }
    }
    
}
int main() {
    /*test input 
        123
    */
    char str[1024];
    scanf("%s", str);
    length=strlen(str);
    permute(str, 0);
	
	return 0;
}
