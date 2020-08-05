#include <iostream>
#include <cstring>
#include "Motorcycle.h"
#include "Utils.h"
using namespace std;
namespace sdds {
	Motorcycle::Motorcycle() : Vehicle(), m_hasSideCar(false) {}
	Motorcycle::Motorcycle(const char* licensePlate, const char* makeModel) : Vehicle(licensePlate, makeModel), m_hasSideCar(false) {}

	std::istream& Motorcycle::read(std::istream& istr) {
		// if car is not in csv mode, print a message "EOLMotorcycle information entryEOL"
		// cal read(istr) function from the base class (Vehicle)

		// if motobike in CSV mode
		// extract from istr to m_hasSideCar
		// ignore the rest of the input line: istr.ignore(100, '\n')
		// otherwise
		// print a message "Does the Motorcycle have a side car? (Y)es/(N)o: "
		// call function yes() from Utils and save the result in m_hasSideCar

		return istr;
	}

	std::ostream& Motorcycle::write(std::ostream& ostr) const {
		// print messagaes according to MS5 documentation
		return ostr;
	}
}