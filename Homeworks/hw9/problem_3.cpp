#include <cassert>
#include <iostream>
class Fraction
{
private:
    int m_numerator;
    int m_denominator;
public:
    // Default constructor
    Fraction(int numerator=0, int denominator=1) :
        m_numerator(numerator), m_denominator(denominator)
    {
        assert(denominator != 0);
    }
    // Copy constructor
    Fraction(const Fraction &copy) :
        m_numerator(copy.m_numerator), m_denominator(copy.m_denominator)
    {
        // no need to check for a denominator of 0 here since copy must already be a valid Fraction
        std::cout << "Copy constructor called\n"; // just to prove it works
    }
    // Overloaded assignment
    Fraction& operator= (const Fraction &fraction);

    // Overloaded addition operator
    Fraction operator+ (const Fraction &fraction) const;

    // Overloaded subtraction operator
    Fraction operator- (const Fraction &fraction) const;

    friend std::ostream& operator<<(std::ostream& out, const Fraction &f1);
};

std::ostream& operator<<(std::ostream& out, const Fraction &f1)
{
    out << f1.m_numerator << "/" << f1.m_denominator;
    return out;
}

// A simplistic implementation of operator= (see better implementation below)
Fraction& Fraction::operator= (const Fraction &fraction)
{
    // do the copy
    m_numerator = fraction.m_numerator;
    m_denominator = fraction.m_denominator;

    // return the existing object so we can chain this operator
    return *this;
}

// Overloaded addition operator
Fraction Fraction::operator+ (const Fraction &fraction) const
{
    int num = m_numerator * fraction.m_denominator + fraction.m_numerator * m_denominator;
    int den = m_denominator * fraction.m_denominator;
    return Fraction(num, den);
}

// Overloaded subtraction operator
Fraction Fraction::operator- (const Fraction &fraction) const
{
    int num = m_numerator * fraction.m_denominator - fraction.m_numerator * m_denominator;
    int den = m_denominator * fraction.m_denominator;
    return Fraction(num, den);
}

int main()
{
    Fraction fiveThirds(5, 3);
    Fraction twoThirds(2, 3);
    Fraction f = fiveThirds + twoThirds;
    std::cout << f << std::endl;
    f = fiveThirds - twoThirds;
    std::cout << f << std::endl;

    return 0;
}
