/* 
 * File:   Row.h
 * Author: andrey
 *
 * Created on 12 Август 2013 г., 12:11
 */

#ifndef ROW_H
#define	ROW_H

class Row
{
    
public:
    Row();
    Row( int l );
    Row( const Row& obj );
    
    double operator []( int pointer ) const;
    double& operator []( int pointer );
    
//    double sum();
    
    void out();
    
    ~Row();
    
protected:
    double* arr;
    int _n;

};

#endif	/* ROW_H */
