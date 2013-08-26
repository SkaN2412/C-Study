/* 
 * File:   URow.h
 * Author: andrey
 *
 * Created on 20 Август 2013 г., 20:32
 */

#ifndef UROW_H
#define	UROW_H

#include "Row.h"

class URow : public Row {
public:
    URow();
    URow( int n );
    URow( const URow& obj );
    
    double sum();
};

#endif	/* UROW_H */

