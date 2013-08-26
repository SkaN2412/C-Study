/* 
 * File:   UMatrix.h
 * Author: andrey
 *
 * Created on 20 Август 2013 г., 20:35
 */

#ifndef UMATRIX_H
#define	UMATRIX_H

#include <vector>
#include "Matrix.h"
#include "URow.h"

using namespace std;

class UMatrix : public Matrix {
public:
    UMatrix( int n, int m, double start, double end );
    UMatrix( const UMatrix& obj );
    
    bool allInRange();
    
    int maxSumNumber();
    
    vector<int> notInRange();
    
private:
    int _startRange, _endRange;
    
    bool inRange( double sum );
};

#endif	/* UMATRIX_H */

