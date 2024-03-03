#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

//#include"InvalidDataException.h"
#include "Permit.h"
#include "TouristVehicle.h"
#include <vector>
#include<memory>

using TouristVehicleContainer = std::vector<std::shared_ptr<TouristVehicle>>;
using PermitContainer = std::vector<Permit>;

void CreateContainers(TouristVehicleContainer &TouristVehicles, PermitContainer &Permits);

void DeleteContainers(TouristVehicleContainer &TouristVehicles, PermitContainer &Permits);

float Avg(TouristVehicleContainer &TouristVehicles);

std::shared_ptr<TouristVehicle> FindMax(TouristVehicleContainer &TouristVehicles);

TouristVehicleContainer FirstN(TouristVehicleContainer &TouristVehicles, unsigned int N);
TouristVehicleContainer FindSeat4andLease(TouristVehicleContainer &TouristVehicles, unsigned int N);

#endif // FUNCTIONALITIES_H
