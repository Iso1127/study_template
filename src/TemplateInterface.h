/*
 * TemplateInterface.h
 *
 *  Created on: 2019/11/03
 *      Author: isofl
 */

#ifndef TEMPLATEINTERFACE_H_
#define TEMPLATEINTERFACE_H_

class TemplateInterface {
public:
    enum ErrorType {
        OK, NG
    };

    class Setting {
    public:
        virtual ~Setting(){};
        virtual void reset() = 0;
        virtual void set(const Setting& setting) = 0;
        virtual bool isValid() = 0;
    };

public:
    virtual ~TemplateInterface() {};
    virtual ErrorType init() = 0;
    virtual ErrorType fin() = 0;
    virtual ErrorType setConfig(const Setting &setting) = 0;
};

#endif /* TEMPLATEINTERFACE_H_ */
