//taliyam123@gmail.com

#ifndef SQUAREMAT_HPP
#define SQUAREMAT_HPP
#include <iostream>
#include <cmath>
#include "rows.hpp"
namespace matrix{
    class SquareMat{
        double** mat;
        int n;
        public:
            int getN();
            SquareMat(int n,double initVal=0);//d
            ~SquareMat();//d
            SquareMat& operator=(const SquareMat& other);//d
            SquareMat(const SquareMat& other);//d
            SquareMat operator+(const SquareMat& other);//d
            SquareMat operator-(const SquareMat& other);//d
            SquareMat operator*(const SquareMat& other);//d
            // minus unari
            SquareMat operator-();//d
            //mat * scalar
            SquareMat operator*(double scalar);//d
            //scalar * mat
            SquareMat operator%(const SquareMat& other);//d
            SquareMat operator%(int scalar);//d
            SquareMat operator/(double scalar);//d
            SquareMat operator^(int scalar);//d
            //n++
            SquareMat operator++(int dummy_flag_for_postfix_increment);//d
            //++n
            SquareMat& operator++();
            //n--
            SquareMat operator--(int dummy_flag_for_postfix_decrease);//d
            //--n
            SquareMat& operator--();
            SquareMat operator~();
            Rows operator[](int index);
            //in this task matrix is equal if the sum of the values in each matrix is equall
            bool operator==(const SquareMat& other);
            bool operator!=(const SquareMat& other);
            // משווה בין שתי מטריצות. מטריצה א' גדולה ממטריצה ב' אם סכום האיברים של מטריצה א' גדול מסכום האיברים של מטריצה ב'.
            bool operator<=(const SquareMat& other);
            bool operator<(const SquareMat& other);
            bool operator>=(const SquareMat& other);
            bool operator>(const SquareMat& other);
            double operator!();
            SquareMat operator%=(const SquareMat& other);
            SquareMat operator%=(int scalar);
            SquareMat operator*=(const SquareMat& other);
            SquareMat operator*=(double scalar);
            SquareMat operator-=(const SquareMat& other);
            SquareMat operator/=(const double scalar);
            SquareMat operator+=(const SquareMat& other);

            friend std::ostream& operator<< (std::ostream& output, const SquareMat& mat);
    };
    SquareMat operator*(double scalar,SquareMat& mat);//d

}
#endif