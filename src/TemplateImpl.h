/*
 * TemplateImpl.h
 *
 *  Created on: 2019/11/03
 *      Author: isofl
 */

#ifndef TEMPLATEIMPL_H_
#define TEMPLATEIMPL_H_

#include "TemplateInterface.h"

class TemplateImpl: public TemplateInterface {

public:
    TemplateImpl();
    virtual ~TemplateImpl();
    ErrorType init();
    ErrorType fin();
    ErrorType setConfig(const Setting &setting);

private:
    SettingA setting_;

};

#endif /* TEMPLATEIMPL_H_ */
