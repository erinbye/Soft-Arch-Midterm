// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the VIDEOPROCESSINGLIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// VIDEOPROCESSINGLIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef VIDEOPROCESSINGLIBRARY_EXPORTS
#define VIDEOPROCESSINGLIBRARY_API __declspec(dllexport)
#else
#define VIDEOPROCESSINGLIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the dll
class VIDEOPROCESSINGLIBRARY_API CVideoProcessingLibrary {
public:
	CVideoProcessingLibrary(void);
	// TODO: add your methods here.
};

extern VIDEOPROCESSINGLIBRARY_API int nVideoProcessingLibrary;

VIDEOPROCESSINGLIBRARY_API int fnVideoProcessingLibrary(void);

VIDEOPROCESSINGLIBRARY_API int videoProcessingFunctionPrint(void);
