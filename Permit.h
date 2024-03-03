#ifndef PERMIT_H
#define PERMIT_H

#include<iostream>
#include<string>
#include"PType.h"

class Permit
{
private:
    /* data */
    std::string _serial_number;
    PType _permit_type;
    unsigned int _permit_duration_left;

public:

    //constructors
    Permit(/* args */)=default;
    Permit(const Permit &)=delete;
    Permit & operator=(const Permit &)=delete;
    Permit (Permit &&)=default;
    Permit & operator =(Permit &&)=delete;
    
    //destructors
    ~Permit()=default;

    Permit(std::string serial_number, PType permit_type, unsigned int permit_duration_left);

    //Getters and Setters where and when required
    void setSerialNumber(const std::string &serial_number) { _serial_number = serial_number; }

    PType permitType() const { return _permit_type; }
    void setPermitType(const PType &permitType) { _permit_type = permitType; }

    unsigned int permitDurationLeft() const { return _permit_duration_left; }
    void setPermitDurationLeft(unsigned int permitDurationLeft) { _permit_duration_left = permitDurationLeft; }

    friend std::ostream &operator<<(std::ostream &os, const Permit &rhs);
};

#endif // PERMIT_H
