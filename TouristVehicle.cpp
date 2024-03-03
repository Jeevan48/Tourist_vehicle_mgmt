#include "TouristVehicle.h"

TouristVehicle::TouristVehicle(std::string number, TVType type, unsigned int seat_count,float per_hour_booking_charges,std::reference_wrapper<Permit> Permit):_number(number),_type(type), _seat_count(seat_count),_per_hour_boooking_charges(per_hour_booking_charges),_permit(Permit)
{
}
std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs) {
    std::string type="";
    switch(rhs._type){
        case TVType::BIKE : type="BIKE";break;
        case TVType::BUS  : type="BIKE"; break;
        case TVType::CAB   : type="CAB"; break;
    }
    os << "_number: " << rhs._number
       << " _type: " << type
       << " _seat_count: " << rhs._seat_count
       << " _permit: " << rhs._permit.get();
    return os;
}
