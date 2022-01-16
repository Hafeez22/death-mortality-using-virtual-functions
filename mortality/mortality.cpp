// mortality.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
class Virus
{
public:
    double nocase, death;
   Virus(double a, double b) {
        death = a;
        nocase = b;
        
    }
    virtual int GetMortalityRate() {
        std::cout << "Base Class \n";
        return 0;
    }
};
class covid : public Virus
{
public:
    covid(double a, double b) : Virus(a, b) {}
    int GetMortalityRate()
    {
        std::cout << "\n Covid Mortality \n";
        
        return (death / nocase) * 100;
    }
};
class hiv : public Virus
{
public:
    hiv(double a, double b) : Virus(a, b) {}
    int GetMortalityRate()
    {
        std::cout << "\n HIV Mortality \n";
        
        return (death / nocase) * 100;
    }
};
class birdflu : public Virus
{
public:
    birdflu(int a, int b) : Virus(a, b) {}
    int GetMortalityRate()
    {
        std::cout << "\n Birdflu Mortality \n";
        return (death / nocase) * 100;
    }
};
class dengu : public Virus
{
public:
    dengu(int a, int b) : Virus(a, b) {}
    int GetMortalityRate()
    {
        std::cout << "\n Dengu Virus Mortality \n";
        return (death / nocase) * 100;
    }

};
int main()
{
    int input;
    
    std::cout << "\n Enter 1 for covid Mortality \n";
    std::cout << "\n Enter 2 for HIV Mortality \n";
    std::cout << "\n Enter 3 for BirdFlu Virus Mortality \n";
    std::cout << "\n Enter 4 for Dengu Virus Mortality \n";
    std::cin >> input;
    Virus *v;
    
    if (input == 1) {
        int ded, cases;
        std::cout << "Enter covid deaths";
        std::cin >> ded;
        std::cout << "Enter covid cases";
        std::cin >> cases;
        covid c(ded, cases);
        v = &c;
        std::cout << v->GetMortalityRate();
    }
    else if (input == 2) {
        int ded, cases;
        std::cout << "Enter HIV deaths";
        std::cin >> ded;
        std::cout << "Enter HIV cases";
        std::cin >> cases;
        hiv h(ded, cases);
        v = &h;
        std::cout << v->GetMortalityRate();
    }
    else if (input == 3) {
        int ded, cases;
        std::cout << "Enter BirdFlu virus deaths";
        std::cin >> ded;
        std::cout << "Enter BirdFlu virus cases";
        std::cin >> cases;
        birdflu f(ded, cases);
        v = &f;
        std::cout << v->GetMortalityRate();
    }
    else if (input == 4) {
        int ded, cases;
        std::cout << "Enter Dengu deaths";
        std::cin >> ded;
        std::cout << "Enter Dengu cases";
        std::cin >> cases;
        dengu d(ded, cases);
        v = &d;
        std::cout << v->GetMortalityRate();
    }
    else {
        std::cout << "Invalid Value";
    }  
}