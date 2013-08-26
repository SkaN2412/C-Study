/* 
 * File:   URow.cpp
 * Author: andrey
 * 
 * Created on 20 Август 2013 г., 20:32
 */

#include "../headers/URow.h"

URow::URow() : Row() {};
URow::URow(int n) : Row( n ) {}
URow::URow(const URow& obj) : Row( obj ) {}

double URow::sum()
{
    double sum = 0;
    
    for ( int i = 0; i < _n; i++ )
    {
        sum += arr[i];
    }
    
    return sum;
}