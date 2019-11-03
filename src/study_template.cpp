//============================================================================
// Name        : study_template.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "TemplateImpl.h"
#include "TemplateImpl2.h"
using namespace std;

int main() {
    {
        TemplateImpl tmp_impl;
        tmp_impl.init();

        SettingA setting_a;
        setting_a.a = 10;
        Setting setting(setting_a);
        tmp_impl.setConfig(setting);

        tmp_impl.fin();
    }
    {
        TemplateImpl2 tmp_impl;
        tmp_impl.init();

        SettingB setting_b;
        setting_b.b = 20;
        Setting setting(setting_b);
        tmp_impl.setConfig(setting);

        tmp_impl.fin();
    }
    return 0;
}

