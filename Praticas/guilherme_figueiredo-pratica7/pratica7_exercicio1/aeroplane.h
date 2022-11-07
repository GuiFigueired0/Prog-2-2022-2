#ifndef AEROPLANE_H_
#define AEROPLANE_H_
#include <string>

class Aeroplane {
	protected:
		int number_of_passengers;
		float top_speed;
		int number_of_turbines;
		float autonomy_in_kilometers;
		int size_in_meters;
		std::string name;
		float current_speed;

	public:
		virtual ~Aeroplane();
		virtual int fly() = 0;
		int get_number_of_passengers();
		float get_top_speed();
		int get_number_of_turbines();
		float get_autonomy();
		int get_size();
		std::string get_name();

};

#endif /* AEROPLANE_H_ */
