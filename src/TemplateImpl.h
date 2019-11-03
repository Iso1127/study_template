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

    class ImpleSetting: public Setting {
    public:
        ImpleSetting();
        ~ImpleSetting();
        void set(const Setting &setting);
        void reset();
        bool isValid() {
            return is_valid;
        }
        ImpleSetting& get();
    private:
        bool is_valid;
        int t1_;
        int t2_;
    };

public:
    TemplateImpl();
    virtual ~TemplateImpl();
    ErrorType init();
    ErrorType fin();
    ErrorType setConfig(const Setting &setting);

private:
    ImpleSetting setting_;

};

#endif /* TEMPLATEIMPL_H_ */
