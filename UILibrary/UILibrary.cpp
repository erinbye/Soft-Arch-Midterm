// UILibrary.cpp : Defines the exported functions for the DLL.
//

#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;
#include <iostream>

#include "framework.h"
#include "UILibrary.h"

#include "../CoreLibrary/CoreLibrary.h"
#include "../RemoteLibrary/RemoteLibrary.h"
#include "../EditLibrary/EditLibrary.h"
#include "../SettingsLibrary/SettingsLibrary.h"
#include "../SubtitlesLibrary/SubtitlesLibrary.h"
#include "../VideoProcessingLibrary/VideoProcessingLibrary.h"
#include <string>
string cur_path = "C:\\Users\\erinb\\source\\repos\\VideoPlayer\\UILibrary";

// This is an example of an exported variable
UILIBRARY_API int nUILibrary=0;

// This is an example of an exported function.
UILIBRARY_API int fnUILibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CUILibrary::CUILibrary()
{
    return;
}

UILIBRARY_API int UIFunctionPrint(void)
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(cur_path);
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    cout << translate("msg", "Message from UI library");
    return 0;
}


UILIBRARY_API void useApp(void)
{

    coreFunctionPrint();
    cout << endl;
    remoteFunctionPrint();
    cout << endl;
    editFunctionPrint();
    cout << endl;
    settingsFunctionPrint();
    cout << endl;
    subtitlesFunctionPrint();
    cout << endl;
    videoProcessingFunctionPrint();
    cout << endl;
}
