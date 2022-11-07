#include "fighteraircraft.h"
#include <iostream>
#include <string>

Fighter_Aircraft::Fighter_Aircraft(std::string name, int number_of_passengers, int number_of_turbines, int size_in_meters, float autonomy_in_kilometers, float top_speed, int number_of_missiles) {
	this->number_of_passengers = number_of_passengers;
	this->top_speed = top_speed;
	this->number_of_turbines = number_of_turbines;
	this->autonomy_in_kilometers = autonomy_in_kilometers;
	this->size_in_meters = size_in_meters;
	this->name = name;
	this->current_speed = 0;
	
	this->number_of_missiles = number_of_missiles;
}


void Fighter_Aircraft::shoot() {
	if(number_of_missiles >= 1){
		number_of_missiles = number_of_missiles-1;
	}
}

void Fighter_Aircraft::shoot(int number_of_missiles_to_fire) {
	if(number_of_missiles >= number_of_missiles){
		number_of_missiles = number_of_missiles-number_of_missiles_to_fire;
	}
}

int Fighter_Aircraft::get_number_of_missiles() {
	return number_of_missiles;
}

void Fighter_Aircraft::fly_at_max_speed() {
	current_speed = top_speed;
}

//consertar:
int Fighter_Aircraft::fly() {
	current_speed = number_of_turbines*700;
	//current_speed = number_of_turbines*(700 + size_in_meters);

	if (current_speed > top_speed) {
		current_speed = top_speed;
	}

	return current_speed;
}
