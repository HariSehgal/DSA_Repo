#include<iostream>
using namespace std;
int main(){

    long long n;
    cin >> n;
    int odd = 1;
    int even = 2;
    
    if(n == 1){
        
        cout << 1;
        
    }else if(n == 4){

        cout << 2 << " " << 4 << " " << 1 << " " << 3;

    }else if(n >= 2 && n <= 3){

        cout << "NO SOLUTION";
    
    }else{

        while(odd <= n){
            
            cout << odd << " ";
            odd = odd + 2;

        }

        while (even  <= n){

            cout << even << " ";
            even = even + 2;

        }
        
    }
    
    return 0;
}