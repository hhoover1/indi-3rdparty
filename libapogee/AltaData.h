/*! 
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
*
* Copyright(c) 2009 Apogee Instruments, Inc. 
*
* \class AltaData 
* \brief Alta platform data 
* 
*/ 


#ifndef ALTADATA_INCLUDE_H__ 
#define ALTADATA_INCLUDE_H__ 

#include "PlatformData.h"

class AltaData : public PlatformData
{ 
    public: 
        AltaData(); 
        virtual ~AltaData();

    private:
        //disabling the copy ctor and assignment operator
        //generated by the compiler - don't want them
        //Effective C++ Item 6
        AltaData(const AltaData&);
        AltaData& operator=(AltaData&);
}; 

#endif
