// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the EDITLIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// EDITLIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef EDITLIBRARY_EXPORTS
#define EDITLIBRARY_API __declspec(dllexport)
#else
#define EDITLIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the dll
class EDITLIBRARY_API CEditLibrary {
public:
	CEditLibrary(void);
	// TODO: add your methods here.
};

extern EDITLIBRARY_API int nEditLibrary;

EDITLIBRARY_API int fnEditLibrary(void);

EDITLIBRARY_API int editFunctionPrint(void);
