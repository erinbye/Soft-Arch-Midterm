// RemoteLibrary.cpp : Defines the exported functions for the DLL.
//

#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;
#include <iostream>

#include "framework.h"
#include "RemoteLibrary.h"
#include <string>
string cur_path = "C:\\Users\\erinb\\source\\repos\\VideoPlayer\\RemoteLibrary";

// This is an example of an exported variable
REMOTELIBRARY_API int nRemoteLibrary=0;

// This is an example of an exported function.
REMOTELIBRARY_API int fnRemoteLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CRemoteLibrary::CRemoteLibrary()
{
    return;
}

REMOTELIBRARY_API int remoteFunctionPrint(void)
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(cur_path);
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    cout << translate("msg", "Message from Remote library");
    return 0;
}
