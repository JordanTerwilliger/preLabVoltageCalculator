#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float rL[16] = {10,50,75,90,95,100,105,110,125,500,1000,5000,10000,50000,75000,100000};
    cout << "DONT FUCKING ENTER A GODDAMN STRING OR THIS WILL CRASH\n";
    cout << "Enter rS: ";
    float rS = 0;
    cin >> rS;
    float vDC = 10;
    float vL = 0.0;
    float w = 0.0;
    cout << "Set Resistor: " <<  rS << "\n";
    for (size_t i = 0; i < 16; i++) //determine load voltage
    {
        vL = vDC*rS/(rL[i]+rS);
        cout << "Load Resistor: " << rL[i] << "ohms" << "\nLoad Voltage: " << vL << " volts.\n";
        w = pow(vDC,2)/(4*rS);
    }
    cout << "\nPower: " << w << " watts.\n";
    system("pause");
    return 0;
}