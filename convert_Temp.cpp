#include<iostream>
using namespace std;
float getFarhenite(float temp);
float getKelvin(float temp);

int main()
{
    float temp;
    cout << "Enter the temperature" << endl;
    cin >> temp;
    float Farhenite = getFarhenite(temp);
    float Kelvin = getKelvin(temp);

    cout << "Temperature in Farhenite is " << Farhenite << endl;
    cout << "Temperature in Kelvin is " << Kelvin << endl;
    return 0;

}

float getFarhenite(float temp)
{
    return temp*1.8+32;
}
float getKelvin(float temp)
{
    return temp+273.15;
}