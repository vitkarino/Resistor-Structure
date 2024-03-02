#include "resist.h"
#include <iostream>
using namespace std;

void initResistor(Resistor& r) {
    cout << "\nEnter resistance (Ohm): ";
    cin >> r.resistance;
    if (r.resistance < 0) r.resistance = 0;

    cout << "\nEnter max power (Watt): ";
    cin >> r.max_power;
    if (r.max_power < 0) r.max_power = 0;
}

void initResistors(Resistor* r, int size) {
    for (int i = 0; i < size; ++i) {
        initResistor(*(r + i));
    }
}

void showResistor(const Resistor& r) {
    cout << "Resistance = " << r.resistance << " Ohm\n";
    cout << "Max power = " << r.max_power << " Watt\n";
}

void showResistors(const Resistor* r, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "\nDetails of Resistor #" << i + 1 << ":\n";
        showResistor(*(r + i));
    }
}

void checkResistors(const Resistor* r, int size, double voltage) {
    cout << endl;
    for (int i = 0; i < size; ++i) {
        double power = (voltage * voltage) / r[i].resistance;
        if (power > r[i].max_power) {
            cout << "Resistor #" << i + 1 << " has been burned\n";
        } else {
            cout << "Resistor #" << i + 1 << " is good\n";
        }
    }
}