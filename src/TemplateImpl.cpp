/*
 * TemplateImpl.cpp
 *
 *  Created on: 2019/11/03
 *      Author: isofl
 */

#include "TemplateImpl.h"

TemplateImpl::ImpleSetting::ImpleSetting() :
        is_valid(false), t1_(0), t2_(0) {
}

TemplateImpl::ImpleSetting::~ImpleSetting() {
}

void TemplateImpl::ImpleSetting::set(const Setting &setting) {
//    ImpleSetting *p_setting = dynamic_cast<TemplateImpl*>(&setting);
}

void TemplateImpl::ImpleSetting::reset() {
}

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
//    setting_ = setting;
    return OK;
}
