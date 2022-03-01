// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the CORELIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// CORELIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef CORELIBRARY_EXPORTS
#define CORELIBRARY_API __declspec(dllexport)
#else
#define CORELIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the dll
class CORELIBRARY_API CCoreLibrary {
public:
	CCoreLibrary(void);
	// TODO: add your methods here.
};

extern CORELIBRARY_API int nCoreLibrary;

CORELIBRARY_API int fnCoreLibrary(void);

CORELIBRARY_API int coreFunctionPrint(void);
