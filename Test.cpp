#include <iostream>
#include "doctest.h"
#include "sources/Fraction.hpp"
using namespace ariel;
using namespace std;

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "sources/Fraction.hpp"
using namespace ariel;
#include "doctest.h"
using namespace doctest;

//add
TEST_CASE("+ (add) test")
{
    Fraction a(1,4), b(1,4) ,c(1,2);
    CHECK(a+b == c);
}

// TEST_CASE("+ (add) test")
// {
//     Fraction a(1,0), b(1,2) ;
//      throw std::invalid_argument("Division by zero");
// }
//////////////////////////////////////////
TEST_CASE("+ (add) test")
{
    Fraction b(1,4),c(1,2);
    float a = 0.25;
    CHECK(a+b == c);
    CHECK(b+a == c);
}
///////////////////////////////////////

//subtract
TEST_CASE("- (subtract) test")
{
    Fraction a(1,4), b(1,2) ,c(-1,4);
    CHECK(a-b == c);
}

TEST_CASE("- (subtract) test")
{
    Fraction a(4,5), b(1,5) ,c(3,5);
    CHECK(a-b == c);
}

//////////////////////////////////////////
TEST_CASE("-  test")
{
    Fraction b(1,4),c(1,4), d(-1,4);
    float a = 0.50;
    CHECK(a-b == c);
    CHECK(b-a == d);
}
///////////////////////////////////////

// multiply
TEST_CASE("* (multiply) test")
{
    Fraction a(2,3), b(1,2) ,c(1,3);
    CHECK(a*b == c);
}

TEST_CASE("* (multiply) test")
{
    Fraction a(1,7), b(1,7) ,c(1,49);
    CHECK(a*b == c);
}

//////////////////////////////////////////
TEST_CASE("* test")
{
    Fraction b(1,2),c(1,4);
    float a = 0.50;
    CHECK(a*b == c);
    CHECK(b*a == c);
}
///////////////////////////////////////

//divide
TEST_CASE("/ (divide) test")
{
    Fraction a(1,5), b(1,2) ,c(2,5);
    CHECK(a/b == c);
}

TEST_CASE("/ (divide) test")
{
    Fraction a(1,2), b(1,2) ,c(1,1);
    CHECK(a/b == c);
}

//////////////////////////////////////////
TEST_CASE("/ test")
{
    Fraction b(1,2),c(1,1);
    float a = 0.50;
    CHECK(a/b == c);
    CHECK(b/a == c);
}
///////////////////////////////////////

//equality
TEST_CASE("== (equality) test")
{
    Fraction a(1,4), b(1,4);
    CHECK(a == b);
}

TEST_CASE("== (equality) test")
{
    Fraction a(1,2), b(1,4) ;
    CHECK_FALSE(a == b);
}

//////////////////////////////////////////
TEST_CASE("== test")
{
    Fraction b(1,2);
    float a = 0.50;
    CHECK(a == b);
    CHECK(b == a);
}
///////////////////////////////////////

// <
TEST_CASE("< test")
{
    Fraction a(-1,2), b(1,2);
    CHECK(a<b);
}

TEST_CASE("< test")
{
    Fraction a(1,2), b(-1,2);
    CHECK_FALSE(a<b);
}

//////////////////////////////////////////
TEST_CASE("< test")
{
    Fraction b(2,2);
    float a = 0.50;
    CHECK(a < b);
    CHECK_FALSE(b < a);
}
///////////////////////////////////////

// >
TEST_CASE("> test")
{
    Fraction a(1,2), b(1,3);
    CHECK(a>b);
}

TEST_CASE("> test")
{
    Fraction a(1,2), b(1,2);
    CHECK_FALSE(a>b);
}

//////////////////////////////////////////
TEST_CASE("> test")
{
    Fraction b(1,2);
    float a = 1.0;
    CHECK(a > b);
    CHECK_FALSE(b > a);
}
//////////////////////////////////////////

// >=
TEST_CASE(">= test")
{
    Fraction a(2,5), b(2,5);
    CHECK(a>=b);
}

TEST_CASE(">= test")
{
    Fraction a(3,7), b(2,7);
    CHECK(a>=b);
}

//////////////////////////////////////////
TEST_CASE(">= test")
{
    Fraction b(1,2);
    float a = 1.50;
    CHECK(a >= b);
    CHECK(b >= a);
}
//////////////////////////////////////////


// <=
TEST_CASE("<= test")
{
    Fraction a(-4,7), b(-4,7);
    CHECK(a<=b);
}

TEST_CASE("<= test")
{
    Fraction a(-3,7), b(5,7);
    CHECK(a<=b);
}
//////////////////////////////////////////
TEST_CASE("<= test")
{
    Fraction b(2,2);
    float a = 1.0;
    CHECK(a <= b);
    CHECK(b <= a);
}
///////////////////////////////////////

 //  prefix
TEST_CASE("++ test")
{
    Fraction a(1,2), b(3,2);
    CHECK(++a == b);
}

TEST_CASE("-- test")
{
    Fraction a(1,2), b(-1,2);
    CHECK(--a == b);
}

 // postfix
TEST_CASE("++ test")
{
    Fraction a(1,2), b(1,2);
    CHECK(a++ == b);
}

TEST_CASE("-- test")
{
    Fraction a(1,2), b(1,2);
    CHECK(a-- == b);
}

//   <<
TEST_CASE("<< test")
{
    Fraction a(3,4);
    CHECK(a.get_numnumerator() == 3);
    CHECK(a.get_denominator() == 4);

}

//   >>
//   <<
// TEST_CASE("<< test")
// {
//     Fraction a(3,4);
//     CHECK(a.get_numnumerator() == 3);
//     CHECK(a.get_denominator() == 4);
// }









// TEST_CASE("-- test")
// {
//     Fraction a(1,3), b(2,-3);
//     CHECK(a-- == b);
// }
// TEST_CASE("> test")
// {
//     Fraction a(1,3), b(1,2);
//     CHECK_FALSE(a>b);
// }
// TEST_CASE("< test")
// {
//     Fraction a(1,3), b(1,2);
//     CHECK(a<b);
// }
// TEST_CASE("== test false")
// {
//     Fraction a(1,3), b(1,2);
//     CHECK(a!=b);
// }
// TEST_CASE("== test true")
// {
//     Fraction a(1,3), b(1,3);
//     CHECK(a==b);
// }
// TEST_CASE("reduced fraction + check")
// {
//     Fraction a(5,3), b(14,21) ,c(7,3);
//     CHECK(a+b==c);
// }
// TEST_CASE("reduced fraction - check")
// {
//     Fraction a(5,3), b(14,21) ,c(1,1);
//     CHECK(a-b==c);
// }
// TEST_CASE("reduced fraction * check")
// {
//     Fraction a(5,3), b(14,21) ,c(10,9);
//     CHECK(a*b==c);
// }
// TEST_CASE("reduced fraction / check")
// {
//     Fraction a(5,3), b(14,21) ,c(5,2);
//     CHECK(a/b==c);
// }
// TEST_CASE("multipule operators 1")
// {
//     Fraction a(5,3), b(14,21) ,c(5,2) ,d(25,4);
//     CHECK(a/b*c==d);
// }
// TEST_CASE("multipule operators 2")
// {
//     Fraction a(5,3), b(14,21) ,c(5,2) ,d(1,-6);
//     CHECK(a+b-c==d);
// }
// TEST_CASE("multipule operators 3")
// {
//     Fraction a(5,3), b(14,21) ,c(5,2) ,d(10,3);
//     CHECK(a+b*c==d);
// }
// TEST_CASE("multipule operators 4")
// {
//     Fraction a(5,3), b(14,21) ,c(5,2) ,d(29,15);
//     CHECK(a+b/c==d);
// }
// TEST_CASE("multipule operators 5")
// {
//     Fraction a(5,3), b(14,21) ,c(5,2) ,d(7,5);
//     CHECK(a-b/c==d);
// }