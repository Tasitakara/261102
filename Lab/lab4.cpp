#include <iostream>
#include <string>
using namespace std;

void printString2(string s1, string s2, int N){

   int count = 0;

   while(count < N){

         if(count%2 == 0){

               cout << s1;

         }else{

               cout << s2;

         }

         count++;

   }

}