#include <iostream>
#include "resist.h"
using namespace std;

int main()
{
    int numberOfResistors;
    cout << "Enter number of resistors: ";
    cin >> numberOfResistors;

    Resistor* resistors = new Resistor[numberOfResistors];

    initResistors(resistors, numberOfResistors);

    showResistors(resistors, numberOfResistors);

    double voltage;
    cout << "\nEnter voltage (V) to check resistors: ";
    cin >> voltage;

    checkResistors(resistors, numberOfResistors, voltage);

    delete[] resistors;

    return 0;
}
