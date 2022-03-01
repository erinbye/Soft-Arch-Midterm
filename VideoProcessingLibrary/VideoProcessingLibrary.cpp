// VideoProcessingLibrary.cpp : Defines the exported functions for the DLL.
//

#include <boost/locale.hpp>

#include <filesystem>

using namespace std;
using namespace boost::locale;

#include <iostream>

#include "framework.h"
#include "VideoProcessingLibrary.h"

#include <string>
string cur_path = "C:\\Users\\erinb\\source\\repos\\VideoPlayer\\VideoProcessingLibrary";


// This is an example of an exported variable
VIDEOPROCESSINGLIBRARY_API int nVideoProcessingLibrary=0;

// This is an example of an exported function.
VIDEOPROCESSINGLIBRARY_API int fnVideoProcessingLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CVideoProcessingLibrary::CVideoProcessingLibrary()
{
    return;
}

VIDEOPROCESSINGLIBRARY_API int videoProcessingFunctionPrint(void)
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(cur_path);
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());


    cout << translate("msg", "Message from Vido Processing library");
    return 0;
}
