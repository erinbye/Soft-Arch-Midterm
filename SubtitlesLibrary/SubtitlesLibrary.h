// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the SUBTITLESLIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// SUBTITLESLIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef SUBTITLESLIBRARY_EXPORTS
#define SUBTITLESLIBRARY_API __declspec(dllexport)
#else
#define SUBTITLESLIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the dll
class SUBTITLESLIBRARY_API CSubtitlesLibrary {
public:
	CSubtitlesLibrary(void);
	// TODO: add your methods here.
};

extern SUBTITLESLIBRARY_API int nSubtitlesLibrary;

SUBTITLESLIBRARY_API int fnSubtitlesLibrary(void);

SUBTITLESLIBRARY_API int subtitlesFunctionPrint(void);
