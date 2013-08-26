/* 
 * File:   main.cpp
 * Author: andrey
 *
 * Created on 28 Июнь 2013 г., 20:46
 */

#include <iostream>
#include "headers/UMatrix.h"

using namespace std;

int main(int argc, char** argv)
{
    int n, m;
    double start, end;
    
    cout << "Width: ";
    cin >> n;
    cout << "Height: ";
    cin >> m;
    
    cout << "Type start point of the range: ";
    cin >> start;
    cout << "Type end point: ";
    cin >> end;
    
    UMatrix matrix ( n, m, start, end );
    
    for ( int i = 0; i < m; i++ )
    {
        for ( int j = 0; j < n; j++ )
        {
            cout << "Type element [" << i << ", " << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    if ( matrix.allInRange() )
    {
        cout << "All rows sums are in range\n";
        cout << "Row with greatest sum is " << matrix.maxSumNumber();
    } else {
        cout << "Not in range are rows ";
        vector<int> notRanged = matrix.notInRange();
        
        for ( int i = 0; i < notRanged.size(); i++ )
        {
            cout << notRanged[i] << ", ";
        }
    }
    
    return 0;
}