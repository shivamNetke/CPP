#include<iostream>
using namespace std;

class Animal  // base class
{
public:
    virtual void speak()
    {
        cout<<"animal speaks."<<endl;
    }
};

class Dog : public Animal // derived class
{
public:
    void speak() override
    {
        cout<<"dog barks."<<endl;
    }
};

class Cat : public Animal // derived class
{
public:
    void speak() override 
    {
        cout<<"cat meows."<<endl;
    }
};

int main(void)
{
    Animal* animalPtr = new Dog(); // base class pointer to derived class object
    Dog* dogPtr = dynamic_cast<Dog*>(animalPtr); // downcasting

    // checking if the typecasting is successfull
    if(dogPtr)
    {
        dogPtr->speak();
    }
    else
    {
        cout<<"failed to cast to dog"<<endl;
    }

    // typecasing to other derived class
    Cat* catPtr = dynamic_cast<Cat*>(animalPtr);
    if(catPtr)
    {
        catPtr->speak();
    }
    else
    {
        cout<<"failed to cast to cat"<<endl;
    }

    delete animalPtr;
    return 0;
}