// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the LIBSM2_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// LIBSM2_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LIBSM2_EXPORTS
#define LIBSM2_API __declspec(dllexport)
#else
#define LIBSM2_API __declspec(dllimport)
#endif

// This class is exported from the libsm2.dll
class LIBSM2_API Clibsm2 {
public:
	Clibsm2(void);
	// TODO: add your methods here.
};

extern LIBSM2_API int nlibsm2;

LIBSM2_API int fnlibsm2(void);
