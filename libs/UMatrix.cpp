/* 
 * File:   UMatrix.cpp
 * Author: andrey
 * 
 * Created on 20 Август 2013 г., 20:35
 */

#include "../headers/UMatrix.h"

UMatrix::UMatrix( int n, int m, double start, double end )
: _m(m)
, _startRange( start )
, _endRange( end )
{
    matrix = new URow[_m];
    for ( int i = 0; i < _m; i++ )
    {
        matrix[i] = *(new URow(n));
    }
}
UMatrix::UMatrix(const UMatrix& obj) : Matrix( obj )
{
    _startRange = obj._startRange;
    _endRange = obj._endRange;
    
    matrix = new Row[_m];
    for ( int i = 0; i < _m; i++ )
    {
        matrix[i] = obj.matrix[i];
    }
}

bool UMatrix::inRange( double sum )
{
    if ( _startRange < sum && sum < _endRange )
    {
        return true;
    } else {
        return false;
    }
}

bool UMatrix::allInRange()
{
    for ( int i = 0; i < _m; i++ )
    {
        if ( ! inRange( matrix[i].sum() ) )
        {
            return false;
        }
    }
    
    return true;
}

int UMatrix::maxSumNumber()
{
    int i = 0, max = 0, pretender = 0;
    
    for ( ; i < _m; i++ )
    {
        if ( matrix[i].sum() > max )
        {
            max = matrix[i].sum();
            pretender = i;
        }
    }
    
    return pretender;
}

vector<int> UMatrix::notInRange()
{
    vector<int> result;
    
    for ( int i = 0; i < _m; i++ )
    {
        if ( ! inRange( matrix[i].sum() ) )
        {
            result.push_back( i );
        }
    }
    
    return result;
}