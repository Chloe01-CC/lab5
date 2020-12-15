#include<iostream>
using namespace std;

int main(){
    int number;
    int Even=0,Odd=0;
    
    cout << "Enter an integer: ";
    cin >> number;
    while(number !=0){
    if(number%2==0){
        Even++;}else
        {
            Odd++;
        }
         cout << "Enter an integer: ";
    cin >> number;}

    cout << "#Even numbers = "<<Even<<"\n";
    cout << "#Odd numbers = "<<Odd<<"\n";
    return 0;
}
