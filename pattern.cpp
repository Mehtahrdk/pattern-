#include <iostream>
using namespace std;

int main(){

    int n;
     cin>>n;
     int k=2*n-1;
     int ch;
    
    

    for (int i=1;i<=k;i++){ 
        
    
    
     for(int j=1;j<=k;j++){

        ch=n+1-min( min(i,j),min(k+1-i,k+1-j) );

        cout<<ch<<" ";

            
            
    }
    cout<<endl;

        }
        

        
     }
 
    
