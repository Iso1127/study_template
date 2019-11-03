/*
 * TemplateImpl2.cpp
 *
 *  Created on: 2019/11/03
 *      Author: isofl
 */

#include "TemplateImpl2.h"
#include <iostream>

TemplateImpl2::TemplateImpl2() :
        setting_() {

}

TemplateImpl2::~TemplateImpl2() {
}

TemplateInterface::ErrorType TemplateImpl2::init() {
    return OK;
}

TemplateInterface::ErrorType TemplateImpl2::fin() {
    return OK;
}

TemplateInterface::ErrorType TemplateImpl2::setConfig(const Setting &setting) {
    if (!setting.is_setting_b_valid_) {
        return NG;
    }
    setting_ = setting.u.setting_b_;
    std::cout << __PRETTY_FUNCTION__ << ":" << setting_.b << std::endl;
    return OK;
}
