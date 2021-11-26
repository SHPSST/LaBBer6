#include<iostream>
using namespace std;

int main(){
    int x;
    int even=0,odd=0;
    while(x != 0){
        cout << "Enter an integer: ";
        cin >> x;
        if(x !=0){
            if((x%2) == 0){
                even++;
            }
            else{
                odd++;
            }
        }
    }
    cout << "Even numbers = " << even;
    cout << "\n";
    cout << "Odd numbers = " << odd;
    return 0;
}