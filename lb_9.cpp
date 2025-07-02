#include<iostream>
using namespace std;
int main(){

    int t;
    cin >> t;

    while(t > 0){

        long long x, y;
        cin >> y >> x;

        long long l;

        if(y >= x){
            l = y;
        }else{
            l = x;
        }

        long long s = (l-1)*(l-1) + 1;
        long long e = l * l;

        if(y >= x){

            if(y % 2 == 0){
                cout << e - x + 1 <<endl;
            }else{
                cout << s + x - 1 <<endl;
            }

        }else{

            if(x % 2 == 0){
                cout << s + y - 1 <<endl;
            }else{
                cout << e - y + 1 <<endl;
            }
        }

        t--;

    }
    return 0;
}