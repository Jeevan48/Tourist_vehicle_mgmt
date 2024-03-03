#ifndef TOURISTVEHICLE_H
#define TOURISTVEHICLE_H

#include <string>
#include <iostream>
#include <functional>
#include <memory>
#include "TVType.h"
#include "Permit.h"
class TouristVehicle
{
private:
    /* data */
    std::string _number;
    TVType _type;
    unsigned int _seat_count;
    std::reference_wrapper<Permit> _permit;
    float _per_hour_boooking_charges;
    

public:
    
    //constructors
    TouristVehicle(/* args */)=default;
    TouristVehicle(const TouristVehicle &)=delete;
    TouristVehicle & operator=(const TouristVehicle &)=default;
    TouristVehicle (TouristVehicle &&)=default;
    TouristVehicle & operator =(TouristVehicle &&)=delete;

    TouristVehicle(std::string number, TVType type, unsigned int seat_count, float per_hour_booking_charges,std::reference_wrapper<Permit>Permit );
    
    ~TouristVehicle()=default;

    std::string number() const { return _number; }

    TVType type() const { return _type; }

    unsigned int seatCount() const { return _seat_count; }

    std::reference_wrapper<Permit> permit() const { return _permit; }
    void setPermit(const std::reference_wrapper<Permit> &permit) { _permit = permit; }

    float perHourBoookingCharges() const { return _per_hour_boooking_charges; }
    void setPerHourBoookingCharges(float per_hour_boooking_charges) { _per_hour_boooking_charges = per_hour_boooking_charges; }

    friend std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs);
};

#endif // TOURISTVEHICLE_H
