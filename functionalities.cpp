#include "functionalities.h"

void CreateContainers(TouristVehicleContainer &TouristVehicles, PermitContainer& Permits)
{
    Permits.push_back(Permit("RA12945667",PType::LEASE,40));
    TouristVehicles.push_back(std::make_shared<TouristVehicle>("ABC12WXY",TVType::BUS,40,120,std::ref(Permits[0])));
    Permits.push_back(Permit("RB12945667",PType::LEASE,2));
    TouristVehicles.push_back(std::make_shared<TouristVehicle>("BCD34XYZ",TVType::BIKE,2,200,std::ref(Permits[1])));
    Permits.push_back(Permit("RC12945667",PType::LEASE,34));
    TouristVehicles.push_back(std::make_shared<TouristVehicle>("CDE56XYZ",TVType::BUS,36,300,std::ref(Permits[2])));
    Permits.push_back(Permit("123ABCXYZ",PType::OWNED,45));
    TouristVehicles.push_back(std::make_shared<TouristVehicle>("DEF78IO",TVType::CAB, 3,400,std::ref(Permits[3])));
}

TouristVehicleContainer FindSeat4andLease(TouristVehicleContainer &TouristVehicles, unsigned int N){

    TouristVehicleContainer Req;
    for(std::shared_ptr<TouristVehicle> C : TouristVehicles){
        if(C->seatCount()>4 && C->permit().get().permitType()==PType::LEASE)
        Req.push_back(C);
        
        if(Req.size()==N) break ;
    }
    return Req;
}

TouristVehicleContainer FirstN(TouristVehicleContainer &TouristVehicles, unsigned int N){

    TouristVehicleContainer C;
    for(std::shared_ptr<TouristVehicle>V : TouristVehicles){
        C.push_back(V);
    }
}
float Avg(TouristVehicleContainer &TouristVehicles){
    float avg=0;
    for(std::shared_ptr<TouristVehicle>V : TouristVehicles){
        avg+=V->perHourBoookingCharges();
    }
    return avg/TouristVehicles.size();
}

std::shared_ptr<TouristVehicle> FindMax(TouristVehicleContainer &TouristVehicles)
{
    std::shared_ptr<TouristVehicle> V;
    float Maxi=0;
    for(std::shared_ptr<TouristVehicle> C : TouristVehicles){
        if(C->perHourBoookingCharges()>Maxi){
            Maxi=C->perHourBoookingCharges();
            V=C;
        }
    }
    return V;
}

// for dynamic casting when using smart pointers std::dynamic_pointer_cast<>
