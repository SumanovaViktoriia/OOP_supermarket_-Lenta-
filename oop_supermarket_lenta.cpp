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

    // Виртуальный метод срока годности
    virtual string getShelfLife() {
        return "срок годности не указан";
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
        return "3-5 дней в холодильнике";
    }
};

class Fish : public Meat {
public:
    Fish() {
        cout << "Fish created" << endl;
    }

    string getShelfLife() override {
        return "1-2 дня в холодильнике";
    }
};

class Bird : public Meat {
public:
    Bird() {
        cout << "Bird created" << endl;
    }

    string getShelfLife() override {
        return "2-3 дня в холодильнике";
    }
};

class Livestock : public Meat {
public:
    Livestock() {
        cout << "Livestock created" << endl;
    }

    string getShelfLife() override {
        return "3-5 дней в холодильнике, до года в морозилке";
    }
};

class Vegetable : public Nature {
public:
    Vegetable() {
        cout << "Vegetable created" << endl;
    }

    string getShelfLife() override {
        return "5-7 дней в холодильнике";
    }
};

class DairyProducts : public Vegetable {
public:
    DairyProducts() {
        cout << "DairyProducts created" << endl;
    }

    string getShelfLife() override {
        return "7-10 дней в холодильнике";
    }
};

class Cereals : public Vegetable {
public:
    Cereals() {
        cout << "Cereals created" << endl;
    }

    string getShelfLife() override {
        return "6-12 месяцев в сухом месте";
    }
};

class FruitVegetables : public Vegetable {
public:
    FruitVegetables() {
        cout << "FruitVegetables created" << endl;
    }

    string getShelfLife() override {
        return "3-7 дней при комнатной температуре";
    }
};
