#include "rows.hpp"
using namespace matrix;

Rows::Rows(int n, double* arr){
    this->size=n;
    this->arr=arr;

}
double& Rows::operator[](int index){
    if(index<0||index>=size){
        throw std::invalid_argument("The index must be bewteen 0 to cols -1");
    }
    return this->arr[index];
}