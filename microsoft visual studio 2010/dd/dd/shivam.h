#include <iostream>
#pragma once

class shivam {
private:
    int no1;
    int no2;

public:
    shivam() {
        std::cout << "Base class Default constructor" << std::endl;
    }
    
    ~shivam() {
        std::cout << "Base class Destructor" << std::endl;
    }
};

class Derived : public shivam {
private:
    int no3;
    int no4;

public:
    Derived() {
        std::cout << "Derived class Default constructor" << std::endl;
    }
    
    ~Derived() {
        std::cout << "Derived class Destructor" << std::endl;
    }
};
