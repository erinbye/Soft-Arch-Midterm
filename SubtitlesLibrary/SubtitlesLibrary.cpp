// SubtitlesLibrary.cpp : Defines the exported functions for the DLL.
//

#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;
#include <iostream>

#include "framework.h"
#include "SubtitlesLibrary.h"
#include <string>
string cur_path = "C:\\Users\\erinb\\source\\repos\\VideoPlayer\\SubtitlesLibrary";


// This is an example of an exported variable
SUBTITLESLIBRARY_API int nSubtitlesLibrary=0;

// This is an example of an exported function.
SUBTITLESLIBRARY_API int fnSubtitlesLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CSubtitlesLibrary::CSubtitlesLibrary()
{
    return;
}

SUBTITLESLIBRARY_API int subtitlesFunctionPrint(void)
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(cur_path);
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    cout << translate("msg", "Message from Subtitles library");
    return 0;
}
