/* 
 * File:   Matrix.cpp
 * Author: andrey
 * 
 * Created on 12 Август 2013 г., 12:51
 */

#include "../headers/Matrix.h"

Matrix::Matrix() : _m(0) {}
Matrix::Matrix(int n, int m)
: _m( m )
{
    matrix = new Row[m];
    for ( int i = 0; i < m; i++ )
    {
        matrix[i] = *(new Row(n));
    }
}
Matrix::Matrix( const Matrix& obj )
{
    _m = obj._m;
    
    matrix = new Row[_m];
    for ( int i = 0; i < _m; i++ )
    {
        matrix[i] = obj.matrix[i];
    }
}

Row Matrix::operator [](int pointer) const
{
    return matrix[pointer];
}
Row& Matrix::operator [](int pointer)
{
    return matrix[pointer];
}

//bool Matrix::inRange( double sum )
//{
//    if ( _startRange <= sum && sum <= _endRange )
//    {
//        return true;
//    } else {
//        return false;
//    }
//}

//bool Matrix::allInRange()
//{
//    for ( int i = 0; i < _m; i++ )
//    {
//        if ( ! inRange( matrix[i].sum() ) )
//        {
//            return false;
//        }
//    }
//    
//    return true;
//}
//
//int Matrix::maxSumNumber()
//{
//    int i = 0, max = 0, pretender = 0;
//    
//    for ( ; i < _m; i++ )
//    {
//        if ( matrix[i].sum() > max )
//        {
//            max = matrix[i].sum();
//            pretender = i;
//        }
//    }
//    
//    return pretender;
//}
//
//vector<int> Matrix::notInRange()
//{
//    vector<int> result;
//    
//    for ( int i = 0; i < _m; i++ )
//    {
//        if ( ! inRange( matrix[i].sum() ) )
//        {
//            result.push_back( i );
//        }
//    }
//    
//    return result;
//}

void Matrix::out()
{
    for ( int i = 0; i < _m; i++ )
    {
        matrix[i].out();
    }
}

Matrix::~Matrix()
{
    delete []matrix;
}