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
    return 0;
}
