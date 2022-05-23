
#ifndef OOP9_PROPERTY_H
#define OOP9_PROPERTY_H

#include <iostream>

using namespace std;

class Property
{
protected:
    double worth;

public:
    Property(double w=0) {
        worth = w;
    };

    virtual double tax() {};
};

class Apartment : public Property
{
public:
    Apartment(double w=0) {
        worth = w;
    };

    double tax() {
        return worth/1000;
    }
};

class Car : public Property
{
public:
    Car(double w=0) {
        worth = w;
    };

    double tax() {
        return worth/200;
    }
};

class CountryHouse : public Property
{
public:
    CountryHouse(double w=0) {
        worth = w;
    };

    double tax() {
        return worth/500;
    }
};

#endif //OOP9_PROPERTY_H
