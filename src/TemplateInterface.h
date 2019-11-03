/*
 * TemplateInterface.h
 *
 *  Created on: 2019/11/03
 *      Author: isofl
 */

#ifndef TEMPLATEINTERFACE_H_
#define TEMPLATEINTERFACE_H_

class TemplateInterface {
    enum ErrorType {
        OK, NG
    };

    template<typename T>
    class ConfigSetting {
        T setting_;
    };

public:
    virtual ~TemplateInterface() {};
    virtual ErrorType init() = 0;
    virtual ErrorType fin() = 0;
    virtual ErrorType setConfig(const ConfigSetting<int> &setting) = 0;
};

#endif /* TEMPLATEINTERFACE_H_ */
