#ifndef WKEXE_APP_H
#define WKEXE_APP_H

#include "wke.h"

typedef struct
{
    wkeWebView window;
    WCHAR url[MAX_PATH+1];
	bool transparent;
} Application;


void RunApplication(Application* app);

#endif//#ifndef WKEXE_APP_H