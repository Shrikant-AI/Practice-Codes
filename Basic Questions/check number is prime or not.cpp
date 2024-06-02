#include <iostream>
using namespace std;

bool checkPrime(int n){
    
    if( n<=1){
        return false;
    }
    
    for (int i=2; i<n ; i++){
        if( n % i ==0 ){
            return false;
        }
    }
    
    return true;
}

int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    
    if(checkPrime(n)==true){
        cout<<"Number is Prime";
    }
    else{
        cout<<"Number is not prime";
    }
    return 0;
}
