#include<iostream>
using namespace std;
int main(){

    int t;
    cin >> t;

    while(t > 0){

        int x,y;
        cin >> x >> y;

        float largest, smallest;

        if(x >= y){
            largest = x;
            smallest = y;
        }else{
            largest = y;
            smallest = x;
        }

        if(smallest < (largest / 2)){
            cout << "NO" << endl;
        }else{

            if((x + y) % 3 == 0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }

        }

        t--;
    }
    return 0;
}