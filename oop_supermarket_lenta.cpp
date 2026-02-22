#include <iostream>
#include <string>
using namespace std;

class Products {
protected:
    bool edible;
public:
    Products() {
        cout << "Products created" << endl;
        this->edible = true;
    }
    virtual ~Products() {
        cout << "Products destroyed" << endl;
    }

    // Virtual method for shelf life
    virtual string getShelfLife() {
        return "shelf life not specified";
    }
};

class Nature : public Products {
public:
    Nature() {
        cout << "Nature created" << endl;
    }
};

class Meat : public Nature {
public:
    Meat() {
        cout << "Meat created" << endl;
    }

    string getShelfLife() override {
        return "3-5 days in refrigerator";
    }
};

class Fish : public Meat {
public:
    Fish() {
        cout << "Fish created" << endl;
    }

    string getShelfLife() override {
        return "1-2 days in refrigerator";
    }
};

class Bird : public Meat {
public:
    Bird() {
        cout << "Bird created" << endl;
    }

    string getShelfLife() override {
        return "2-3 days in refrigerator";
    }
};

class Livestock : public Meat {
public:
    Livestock() {
        cout << "Livestock created" << endl;
    }

    string getShelfLife() override {
        return "3-5 days in refrigerator, up to a year in freezer";
    }
};

class Vegetable : public Nature {
public:
    Vegetable() {
        cout << "Vegetable created" << endl;
    }

    string getShelfLife() override {
        return "5-7 days in refrigerator";
    }
};

class DairyProducts : public Vegetable {
public:
    DairyProducts() {
        cout << "DairyProducts created" << endl;
    }

    string getShelfLife() override {
        return "7-10 days in refrigerator";
    }
};

class Cereals : public Vegetable {
public:
    Cereals() {
        cout << "Cereals created" << endl;
    }

    string getShelfLife() override {
        return "6-12 months in dry place";
    }
};

class FruitVegetables : public Vegetable {
public:
    FruitVegetables() {
        cout << "FruitVegetables created" << endl;
    }

    string getShelfLife() override {
        return "3-7 days at room temperature";
    }
};
