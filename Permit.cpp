#include "Permit.h"

Permit::Permit(std::string serial_number, PType permit_type, unsigned int permit_duration_left):_serial_number(serial_number),_permit_type(permit_type),_permit_duration_left(permit_duration_left){

}

std::ostream &operator<<(std::ostream &os, const Permit &rhs) {
    std::string type="";
    switch(rhs._permit_type){
        case PType::LEASE : type="LEASE"; break;
        case PType::OWNED : type="OWNED"; break;
    }
    os << "_serial_number: " << rhs._serial_number
       << " _permit_type: " <<type
       << " _permit_duration_left: " << rhs._permit_duration_left;
    return os;
}
