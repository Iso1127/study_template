/*
 * TemplateImpl2.h
 *
 *  Created on: 2019/11/03
 *      Author: isofl
 */

#ifndef TEMPLATEIMPL2_H_
#define TEMPLATEIMPL2_H_

#include "TemplateInterface.h"

class TemplateImpl2: public TemplateInterface {
public:
    TemplateImpl2();
    virtual ~TemplateImpl2();

    ErrorType init();
    ErrorType fin();
    ErrorType setConfig(const Setting &setting);

private:
    SettingB setting_;

};

#endif /* TEMPLATEIMPL2_H_ */
