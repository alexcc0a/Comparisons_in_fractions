//
//  main.cpp
//  Comparisons_in_fractions
//
//  Created by Александр Нестеров on 2/9/24.
//

#include <iostream>

class Fraction
{
private:
    int numerator_;
    int denominator_;

public:
    Fraction(int numerator, int denominator)
    {
        numerator_ = numerator;
        denominator_ = denominator;
    }

    bool operator == (Fraction right)
    {
        if (numerator_ == right.numerator_ && denominator_ == right.denominator_)
        {
            return 1;
        }
        return 0;
    }

    bool operator != (Fraction right)
    {
        if (numerator_ != right.numerator_ && denominator_ != right.denominator_)
        {
            return 1;
        }
        return 0;
    }

    bool operator < (Fraction right)
    {
        double ResF1 = static_cast<double>(numerator_) / static_cast<double>(denominator_);
        double ResF2 = static_cast<double>(right.numerator_) / static_cast<double>(right.denominator_);
        if (ResF1 < ResF2)
        {
            return 1;
        }
        return 0;
    }

    bool operator <= (Fraction right)
    {
        double ResF1 = static_cast<double>(numerator_) / static_cast<double>(denominator_);
        double ResF2 = static_cast<double>(right.numerator_) / static_cast<double>(right.denominator_);
        if (ResF1 <= ResF2)
        {
            return 1;
        }
        return 0;
    }

    bool operator > (Fraction right)
    {
        double ResF1 = static_cast<double>(numerator_) / static_cast<double>(denominator_);
        double ResF2 = static_cast<double>(right.numerator_) / static_cast<double>(right.denominator_);
        if (ResF1 > ResF2)
        {
            return 1;
        }
        return 0;
    }

    bool operator >= (Fraction right)
    {
        double ResF1 = static_cast<double>(numerator_) / static_cast<double>(denominator_);
        double ResF2 = static_cast<double>(right.numerator_) / static_cast<double>(right.denominator_);
        if (ResF1 >= ResF2)
        {
            return 1;
        }
        return 0;
    }
};

int main()
{
    Fraction f1(4, 3);
    Fraction f2(6, 11);

    std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
    std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
    std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
    std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
    std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    return 0;
}
