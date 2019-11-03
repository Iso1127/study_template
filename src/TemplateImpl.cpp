/*
 * TemplateImpl.cpp
 *
 *  Created on: 2019/11/03
 *      Author: isofl
 */

#include "TemplateImpl.h"
#include <iostream>

TemplateImpl::TemplateImpl() :
        setting_() {

}

TemplateImpl::~TemplateImpl() {
}

TemplateInterface::ErrorType TemplateImpl::init() {
    return OK;
}

TemplateInterface::ErrorType TemplateImpl::fin() {
    return OK;
}

TemplateInterface::ErrorType TemplateImpl::setConfig(const Setting &setting) {
    if (!setting.is_setting_a_valid_) {
        return NG;
    }
    setting_ = setting.u.setting_a_;
    std::cout << __PRETTY_FUNCTION__ << ":" << setting_.a << std::endl;
    return OK;
}
