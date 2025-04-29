//taliyam123@gmail.com

#ifndef ROWS_HPP
#define ROWS_HPP
#include <iostream>
#include <cmath>
namespace matrix{
    class Rows{
        private: 
            double* arr;
            int size;
        public:

            Rows(int n, double* arr);
            double& operator[](int index);//this is a reference because we want that every change we will make will change the origion matrix

    };
}
#endif