#include<iostream>
using namespace std;
int main(){
    
    for(int i = 1 ; i <=4 ; i++){
        int j = 1;
        for( j; i+j <=4 ; j++){
            cout << " ";
        }
        for(j ; j<=4 ; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}'