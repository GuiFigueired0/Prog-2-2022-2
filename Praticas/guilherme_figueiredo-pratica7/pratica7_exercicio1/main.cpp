#include "fleet.h"
#include <string>
#include <vector>

int main(){

    int number_of_planes = 8; // tirei um porque havia um avião que era vazio

	Fleet *fleet = new Fleet();
	std::vector<Aeroplane*> plane_fleet = fleet->instantiate_fleet(number_of_planes);
	fleet->print_fleet_data(plane_fleet);

	for(int i=0; i<plane_fleet.size(); i++){
		delete plane_fleet[i];
	}

	delete fleet;

	return 0;
}