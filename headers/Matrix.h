/* 
 * File:   Matrix.h
 * Author: andrey
 *
 * Created on 12 Август 2013 г., 12:51
 */

#ifndef MATRIX_H
#define	MATRIX_H

#include <vector>
#include "Row.h"

using namespace std;

class Matrix {
    
public:
    Matrix();
    Matrix( int n, int m );
    Matrix( const Matrix& obj );
    
    Row operator []( int pointer ) const;
    Row& operator []( int pointer );
    
//    bool allInRange();
//    
//    int maxSumNumber();
//    
//    vector<int> notInRange();
    
    void out();
    
    ~Matrix();
    
protected:
    Row* matrix;
    int _m;
    
//    bool inRange( double sum );
    
};

#endif	/* MATRIX_H */
