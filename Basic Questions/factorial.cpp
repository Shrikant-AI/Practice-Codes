# include <iostream>
using namespace std;


int factorial(int num){
    int result = 1;
    
    for(int i=1 ; i<=num; i++){
        result = i*result;
        
    }
    return result;
}


int main(){
    int n;
    cout<<"Enter num: ";
    cin>>n;
    
    int fact = factorial(n) ;
    cout<<"factorial is: "<<fact;
}
