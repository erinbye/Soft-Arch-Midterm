// EditLibrary.cpp : Defines the exported functions for the DLL.
//

#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;
#include <iostream>

#include "framework.h"
#include "EditLibrary.h"
#include <string>
string cur_path = "C:\\Users\\erinb\\source\\repos\\VideoPlayer\\EditLibrary";

// This is an example of an exported variable
EDITLIBRARY_API int nEditLibrary=0;

// This is an example of an exported function.
EDITLIBRARY_API int fnEditLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CEditLibrary::CEditLibrary()
{
    return;
}

EDITLIBRARY_API int editFunctionPrint(void)
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(cur_path);
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    cout << translate("msg", "Message from Edit library");
    return 0;
}
