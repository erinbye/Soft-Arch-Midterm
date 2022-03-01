// SettingsLibrary.cpp : Defines the exported functions for the DLL.
//

#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;
#include <iostream>

#include "framework.h"
#include "SettingsLibrary.h"
#include <string>
string cur_path = "C:\\Users\\erinb\\source\\repos\\VideoPlayer\\SettingsLibrary";

// This is an example of an exported variable
SETTINGSLIBRARY_API int nSettingsLibrary=0;

// This is an example of an exported function.
SETTINGSLIBRARY_API int fnSettingsLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CSettingsLibrary::CSettingsLibrary()
{
    return;
}

SETTINGSLIBRARY_API int settingsFunctionPrint(void)
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(cur_path);
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    cout << translate("msg", "Message from Settings library");
    return 0;
}
