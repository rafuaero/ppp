#include <iostream>
using namespace std;
#include "PPPheaders.h"

int main(){
    int pennies = {0};
    int nickels = {0};
    int dimes = {0};
    int quarters = {0};
    int half = {0};
    int dollar = {0};

    cout << "digite quantas moedas você tem: \n";
    cout << "quantos pennies vc tem? \n";
    cin >> pennies;
    cout << "quantos nickels vc tem? \n";
    cin >> nickels;
    cout << "quantos dimes vc tem? \n";
    cin >> dimes;
    cout << "quantos quarters vc tem? \n";
    cin >> quarters;
    cout << "quantos halfs vc tem? \n";
    cin >> half;
    cout << "quantos dollares vc tem? \n";
    cin >> dollar;

    if (pennies <= 1){
        cout << "vc tem " << pennies << " pennie\n";
    } else {
        cout << "vc tem " << pennies << " pennies\n";
    } if (nickels <= 1){
        cout << "vc tem " << nickels << " nickel\n";
    } else {
        cout << "vc tem " << nickels << " nickels\n";
    } if (dimes <= 1){
        cout << "vc tem " << dimes << " dime\n";
    } else {
        cout << "vc tem " << dimes << " dimes\n";
    } if (quarters <= 1){
        cout << "vc tem " << quarters << " quarter\n";
    } else {
        cout << "vc tem " << quarters << " quarters\n";
    } if (half <= 1){
        cout << "vc tem " << half << " half\n";
    } else {
        cout << "vc tem " << half << " halfs\n";
    } if (dollar <= 1){
        cout << "vc tem " << dollar << " half\n";
    } else {
        cout << "vc tem " << dollar << " dollars\n";
    }
    cout << "no total voce tem: \n";
    
    int total_dollar {0};
    total_dollar = (pennies + nickels*5 +  dimes*10 + quarters*25 + half*50 + dollar*100)/100;

    int total_pennies {0}; 
    total_pennies = (pennies + nickels*5 +  dimes*10 + quarters*25 + half*50 + dollar*100)%100;
    
    cout << total_dollar << " dolares e " << total_pennies << " pennies\n";     
    return 0;
}
