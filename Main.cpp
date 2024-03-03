#include"functionalities.h"

int main()
{
    TouristVehicleContainer TouristVehicles;
    PermitContainer Permits;
     CreateContainers(TouristVehicles,  Permits);

    std::cout<<"4 Seats and Lease function\n";
    TouristVehicleContainer tem= FindSeat4andLease(TouristVehicles, 3
    );
    for(std::shared_ptr<TouristVehicle> C : tem)
    std::cout<<"Number : "<<C->number()<<"\n";

    std::cout<<"Next Function\n";
    
    float p=Avg(TouristVehicles);
    std::cout << "\nAverage booking charges: "<<p<<"\n";

    return 0;
}