#include <iostream>
#include "Car.h"
#include "Vehicle.h"
#include "Utils.h"
using namespace std;
namespace sdds {
	Car::Car() : Vehicle(), m_carWash(false) {}

	Car::Car(const char* licensePlate, const char* makeModel) : Vehicle(licensePlate, makeModel), m_carWash(false) {}

	std::istream& Car::read(std::istream& istr) {
		// if car is not in csv mode, print a message "EOLCar information entryEOL"
		// call read(istr) function from the base class (Vehicle)

		// if car in CSV mode
		// extract from istr to m_carWash
		// ignore the rest of the input line:  istr.ignore(100, '\n')
		// otherwise
		// print a message "Carwash while parked? (Y)es/(N)o: "
		// call function yes() from Utils and save the result in m_carWash
		return istr;
	}

	std::ostream& Car::write(std::ostream& ostr) const {
		// print messages according to MS5 documentation
		return ostr;
	}
}