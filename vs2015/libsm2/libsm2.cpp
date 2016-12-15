// libsm2.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "libsm2.h"


// This is an example of an exported variable
LIBSM2_API int nlibsm2=0;

// This is an example of an exported function.
LIBSM2_API int fnlibsm2(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see libsm2.h for the class definition
Clibsm2::Clibsm2()
{
    return;
}
