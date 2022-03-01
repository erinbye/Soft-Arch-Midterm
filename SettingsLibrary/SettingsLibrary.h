// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the SETTINGSLIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// SETTINGSLIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef SETTINGSLIBRARY_EXPORTS
#define SETTINGSLIBRARY_API __declspec(dllexport)
#else
#define SETTINGSLIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the dll
class SETTINGSLIBRARY_API CSettingsLibrary {
public:
	CSettingsLibrary(void);
	// TODO: add your methods here.
};

extern SETTINGSLIBRARY_API int nSettingsLibrary;

SETTINGSLIBRARY_API int fnSettingsLibrary(void);

SETTINGSLIBRARY_API int settingsFunctionPrint(void);
