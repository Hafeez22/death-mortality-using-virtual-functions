// mortality.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
class Mortality
{
public:
    double nocase, death;
   Mortality(double a, double b) {
        death = a;
        nocase = b;
        
    }
    virtual int GetMortalityRate() {
        std::cout << "Base Class \n";
        return 0;
    }
};
class covid : public Mortality
{
public:
    covid(double a, double b) : Mortality(a, b) {}
    int GetMortalityRate()
    {
        std::cout << "\n Covid Mortality \n";
        
        return (death / nocase) * 100;
    }
};
class hiv : public Mortality
{
public:
    hiv(double a, double b) : Mortality(a, b) {}
    int GetMortalityRate()
    {
        std::cout << "\n HIV Mortality \n";
        
        return (death / nocase) * 100;
    }
};
class birdflu : public Mortality
{
public:
    birdflu(int a, int b) : Mortality(a, b) {}
    int GetMortalityRate()
    {
        std::cout << "\n Birdflu Mortality \n";
        return (death / nocase) * 100;
    }
};
class dengu : public Mortality
{
public:
    dengu(int a, int b) : Mortality(a, b) {}
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
    Mortality *s;
    
    if (input == 1) {
        int ded, cases;
        std::cout << "Enter covid deaths";
        std::cin >> ded;
        std::cout << "Enter covid cases";
        std::cin >> cases;
        covid c(ded, cases);
        s = &c;
        std::cout << s->GetMortalityRate();
    }
    else if (input == 2) {
        int ded, cases;
        std::cout << "Enter HIV deaths";
        std::cin >> ded;
        std::cout << "Enter HIV cases";
        std::cin >> cases;
        hiv h(ded, cases);
        s = &h;
        std::cout << s->GetMortalityRate();
    }
    else if (input == 3) {
        int ded, cases;
        std::cout << "Enter BirdFlu virus deaths";
        std::cin >> ded;
        std::cout << "Enter BirdFlu virus cases";
        std::cin >> cases;
        birdflu f(ded, cases);
        s = &f;
        std::cout << s->GetMortalityRate();
    }
    else if (input == 4) {
        int ded, cases;
        std::cout << "Enter Dengu deaths";
        std::cin >> ded;
        std::cout << "Enter Dengu cases";
        std::cin >> cases;
        dengu d(ded, cases);
        s = &d;
        std::cout << s->GetMortalityRate();
    }
    else {
        std::cout << "Invalid Value";
    }  
}