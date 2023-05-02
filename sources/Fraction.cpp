#include <stdio.h>
#include "Fraction.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
// using namespace ariel;
using namespace std;
namespace ariel
{

//constructor
Fraction::Fraction(int numerator_, int denominator_)
{
    if (denominator_!= 0) 
    {
    this->numerator = numerator_;
    this->denominator = denominator_;
    this->reduce();
    }
}

Fraction::Fraction(float N)
{

}

Fraction::Fraction()
    {
        this->numerator = 0;
        this->denominator = 1;
    }

//set
// void Fraction::setNumerator(int numerator_)
// {
//     this->numerator = numerator_;
// }

// void Fraction::setDenom(int denominator_)
// {
//     // if(denominator_ == 0)
//     // {
//     //     ;
//     // }
//     this->denominator = denominator_;
// }

// get
Fraction Fraction::get_numnumerator() 
{
return Fraction(1,1) ;
}

Fraction Fraction::get_denominator() 
{
return Fraction(1,1);
}

void Fraction::reduce()
{

}

 //add
 Fraction Fraction::operator+(Fraction num)
        {
       return Fraction(1,1);
        }
        
 Fraction operator+(float other, Fraction f)
        {
           return Fraction(1,1); 
        }

//         //subtract
        Fraction Fraction::operator-(Fraction num)
        {
               return Fraction(1,1);
        }
        
         Fraction operator-(float other, Fraction f)
         {
            return Fraction(1,1);
         }

//         //mult
        Fraction Fraction::operator*(Fraction num)
        {
            return Fraction(1,1);
        }


        Fraction operator*(float other, Fraction f)
         {
            return Fraction(1,1);
         }

//         //divide
        Fraction Fraction::operator/(Fraction num)
        {
            return Fraction(1,1);
        }

        Fraction operator/(float other, Fraction f)
         {
            return Fraction(1,1);
         }



//         //equality
        bool Fraction::operator==(Fraction num)
        {
            return true;
        }
//         

         bool operator==(float other, Fraction f)
         {
                 return true;
         }

//         //  > 
        bool Fraction::operator>(Fraction num)
        {
            return true;
        }

        bool operator>(float other, Fraction f)
         {
                 return true;
         }

//         //  <
         bool Fraction::operator<(Fraction num)
        {
            return true;
        }

        bool operator<(float other, Fraction f)
         {
                 return true;
         }
      
      //  >=
         bool Fraction::operator>=(Fraction num)
        {
            return true;
        }

         bool operator>=(float other, Fraction f)
         {
                 return true;
         }

//         // <=
        bool Fraction::operator<=(Fraction num)
        {
            return true;
        }

         bool operator<=(float other, Fraction f)
         {
                 return true;
         }

        Fraction Fraction::operator++()
        {
            return Fraction(1,1);
        }
        
        Fraction Fraction:: operator--()
        {
            return Fraction(1,1);
        }

        // postfix
        Fraction Fraction:: operator++(int)
        {
            return Fraction(1,1);
        }
        Fraction Fraction:: operator--(int)
        {
            return Fraction(1,1);
        }

        // <<
       std::ostream& operator<<(std::ostream& os, const Fraction& fr)
    {
        // write obj to stream
        return os;
    }

        // >>
        std::ostream& operator>>(std::ostream& os, const Fraction& fr)
    {
        // write obj to stream
        return os;
    }
}




















