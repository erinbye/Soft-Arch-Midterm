// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the REMOTELIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// REMOTELIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef REMOTELIBRARY_EXPORTS
#define REMOTELIBRARY_API __declspec(dllexport)
#else
#define REMOTELIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the dll
class REMOTELIBRARY_API CRemoteLibrary {
public:
	CRemoteLibrary(void);
	// TODO: add your methods here.
};

extern REMOTELIBRARY_API int nRemoteLibrary;

REMOTELIBRARY_API int fnRemoteLibrary(void);

REMOTELIBRARY_API int remoteFunctionPrint(void);
