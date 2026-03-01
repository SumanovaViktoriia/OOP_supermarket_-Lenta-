#include <iostream>
#include <string>
#include <memory>
#include <vector>

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

    virtual string getShelfLife() {
        return "shelf life not specified";
    }
};

class Nature : public Products {
public:
    Nature() {
        cout << "Nature created" << endl;
    }

    string getShelfLife() override {
        return "nature products: shelf life varies";
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

class Processed : public Products {
public:
    Processed() {
        cout << "Processed created" << endl;
    }

    string getShelfLife() override {
        return "processed products: shelf life varies by type";
    }
};

class Bakery : public Processed {
public:
    Bakery() {
        cout << "Bakery created" << endl;
    }

    string getShelfLife() override {
        return "3-5 days at room temperature";
    }
};

class SweetBakery : public Bakery {
public:
    SweetBakery() {
        cout << "SweetBakery created" << endl;
    }

    string getShelfLife() override {
        return "2-4 days at room temperature";
    }
};

class Bread : public Bakery {
public:
    Bread() {
        cout << "Bread created" << endl;
    }

    string getShelfLife() override {
        return "3-5 days at room temperature";
    }
};

class Dough : public Bakery {
public:
    Dough() {
        cout << "Dough created" << endl;
    }

    string getShelfLife() override {
        return "1-2 days in refrigerator";
    }
};

class Offal : public Processed {
public:
    Offal() {
        cout << "Offal created" << endl;
    }

    string getShelfLife() override {
        return "1-2 days in refrigerator";
    }
};

class Pate : public Offal {
public:
    Pate() {
        cout << "Pate created" << endl;
    }

    string getShelfLife() override {
        return "3-5 days in refrigerator after opening";
    }
};

class Smoked : public Offal {
public:
    Smoked() {
        cout << "Smoked created" << endl;
    }

    string getShelfLife() override {
        return "7-10 days in refrigerator";
    }
};

int main() {
    cout << "CREATING PRODUCTS" << endl;

    vector<unique_ptr<Products>> supermarket;

    supermarket.push_back(make_unique<SweetBakery>());
    cout << endl;

    supermarket.push_back(make_unique<Bread>());
    cout << endl;

    supermarket.push_back(make_unique<DairyProducts>());
    cout << endl;

    supermarket.push_back(make_unique<Cereals>());
    cout << endl;

    cout << "\nSHELF LIFE INFORMATION" << endl;
    for (size_t i = 0; i < supermarket.size(); i++) {
        cout << "Product " << i + 1 << ": " << supermarket[i]->getShelfLife() << endl;
    }
    cout << endl;

    return 0;
}
