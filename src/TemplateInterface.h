/*
 * TemplateInterface.h
 *
 *  Created on: 2019/11/03
 *      Author: isofl
 */

#ifndef TEMPLATEINTERFACE_H_
#define TEMPLATEINTERFACE_H_

struct SettingA {
    int a;
};

struct SettingB {
    int b;
};

// これどうにかしたい
struct Setting {
    Setting(const SettingA &setting_a) :
            is_setting_a_valid_(true), is_setting_b_valid_(false) {
        u.setting_a_ = setting_a;
    }
    Setting(const SettingB &setting_b) :
            is_setting_a_valid_(false), is_setting_b_valid_(true) {
        u.setting_b_ = setting_b;
    }
    ~Setting() {
    }
    ;

    union {
        SettingA setting_a_;
        SettingB setting_b_;
    } u;
    bool is_setting_a_valid_;
    bool is_setting_b_valid_;
};

class TemplateInterface {
public:
    enum ErrorType {
        OK, NG
    };

public:
    virtual ~TemplateInterface() {
    }
    ;
    virtual ErrorType init() = 0;
    virtual ErrorType fin() = 0;
    virtual ErrorType setConfig(const Setting &setting) = 0;
};

#endif /* TEMPLATEINTERFACE_H_ */
