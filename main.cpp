#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float rL100[16] = {10,50,75,90,95,100,105,110,125,500,1000,5000,10000,50000,75000,100000};
    float rL1000[16] = {10,50,100,500,900,950,975,1000,1250,1500,1750,5000,10000,50000,75000,100000};
    float rL10000[19] = {10,50,100,500,1000,5000,7000,9000,9500,9750,10000,10250,10500,11000,12000,25000,50000,75000,100000};
    float rL100000[18] = {10,50,100,500,1000,5000,10000,50000,75000,90000,95000,97000,99000,100000,101000,103000,105000,110000};
    cout << "DONT FUCKING ENTER A GODDAMN STRING OR THIS WILL CRASH\n";
    float rS = 0;
    cout << "Enter rS: ";
    cin >> rS;
    float vDC = 10;
    float vL = 0.0;
    float w = 0.0;
    cout << "Set Resistor: " <<  rS << "\n";
    for (size_t i = 0; i < 18; i++) //*determine load voltage
    {
        vL = vDC*(rL100000[i]/(rS+rL100000[i]));
        cout << vL << " Ohms";
        w = (vL*vL)/(rL100000[i]);
        cout << rL100000[i] << ":  Power: " << w << " watts.\n";
    }
    system("pause");
    return 0;
}