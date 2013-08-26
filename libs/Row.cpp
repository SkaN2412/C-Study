/* 
 * File:   Row.cpp
 * Author: andrey
 * 
 * Created on 12 Август 2013 г., 12:43
 */

#include "../headers/Row.h"
#include <cmath>
#include <iostream>

using namespace std;

Row::Row() : _n( 0 ) {};
Row::Row(int n)
: _n( n )
{
    arr = new double[n];
}
Row::Row(const Row& obj)
{
    _n = obj._n;
    
    arr = new double[_n];
    for ( int i = 0; i < _n; i++ )
    {
        arr[i] = obj.arr[i];
    }
}

double Row::operator [](int pointer) const
{
    return arr[pointer];
}
double& Row::operator [](int pointer)
{
    return arr[pointer];
}

//double Row::sum()
//{
//    double sum = 0;
//    
//    for ( int i = 0; i < _n; i++ )
//    {
//        sum += arr[i];
//    }
//    
//    return sum;
//}

void Row::out()
{
    for ( int i = 0; i < _n; i++ )
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

Row::~Row()
{
    delete []arr;
}