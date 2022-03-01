// CoreLibrary.cpp : Defines the exported functions for the DLL.
//

#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;
#include <iostream>

#include "framework.h"
#include "CoreLibrary.h"
#include <string>
string cur_path = "C:\\Users\\erinb\\source\\repos\\VideoPlayer\\CoreLibrary";



// This is an example of an exported variable
CORELIBRARY_API int nCoreLibrary=0;

// This is an example of an exported function.
CORELIBRARY_API int fnCoreLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCoreLibrary::CCoreLibrary()
{
    return;
}

CORELIBRARY_API int coreFunctionPrint(void)
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(cur_path);
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    cout << translate("msg", "Message from Core library");
    return 0;
}
