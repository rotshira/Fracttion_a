#pragma once
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iostream>

using namespace std;
namespace ariel
{
    
    class Fraction
    {
    private:
        int numerator;
        int denominator;
    
    public:
        Fraction(int numerator_, int denominator_);
        //float to fraction
        Fraction(float N); 
        Fraction();

        //set
        // void setNumerator(int numnumerator_);
        // void setDenom(int denominator_);
        
        //get
        Fraction get_numnumerator() ;
        Fraction  get_denominator() ;

        //reduce the fraction
        void reduce();

        // implement the function (  (1)fraction to fraction  (2) float to fraction )    )
        
        //add
        Fraction operator+(Fraction num);
        friend Fraction operator+(float other, Fraction f);

        //subtract
        Fraction operator-(Fraction num);
        friend Fraction operator-(float other, Fraction f);

        //mult
        Fraction operator*(Fraction num);
        friend Fraction operator*(float other, Fraction f);

        //divide
        Fraction operator/(Fraction num);
        friend Fraction operator/(float other, Fraction f);

        //equality
        bool operator==(Fraction num);
        friend bool operator==(float other, Fraction f);

        //  > 
        bool operator>(Fraction num);
        friend bool operator>(float other, Fraction f);

        //  <
        bool operator<(Fraction num);
        friend bool operator<(float other, Fraction f);

        //  >=
        bool operator>=(Fraction num);
        friend bool operator>=(float other, Fraction f);

        // <=
        bool operator<=(Fraction num);
        friend bool operator<=(float other, Fraction f);

       // prefix
        Fraction operator++();
        Fraction operator--();

        // postfix
        Fraction operator++(int);
        Fraction operator--(int);

        // <<
        friend std::ostream& operator<<(std::ostream& os, const Fraction& fr);
        
        // >>
        friend std::istream& operator>>(std::istream& is, const Fraction& fr);

    };
}















        



