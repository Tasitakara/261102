#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int loop;
    int x = 0;
    cout<<"Who is the one you love?: ";
    cin>>name;
    cout<<"How many rounds do you want to repeat?: ";
    cin>>loop;
    cout<<"<3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3\n";
    while(x<loop){
        cout<<"I love "<<name<<".\n";
        x=x+1;
    }
    cout<<"<3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3";
    
}