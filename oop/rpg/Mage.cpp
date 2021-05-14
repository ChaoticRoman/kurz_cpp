#include "Mage.h"

#include <iostream>

using namespace std;

Mage::Mage(): Player("Anonymous wizard") {}
Mage::Mage(string name): Player(name) {}


Mage::~Mage() {
    cout << "My last spell..." << endl;
}


void Mage::castMagic() {
    health_ *= 2;
    cout << "****" << endl;
}


std::string Mage::salutation() const {
    string result = !alive() ? "Dead " : "";
    result += "Grand wizard " + name();
    return result;
}
