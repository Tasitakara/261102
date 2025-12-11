#include<iostream>
using namespace std;
int main(){
    int N;
    int even=0;
    int odd=0;
    while(N!=0){
        cout << "Enter an integer: ";
        cin >> N;
        if(N==0){
            break;
        }
        else{
            if (N%2==0){
                even ++;
            }
            if(N%2!=0){
                odd ++;
            }
        }
    }
    cout << "#Even numbers = "<< even << endl;
    cout << "#Odd numbers = "<< odd << endl;
    return 0;
}