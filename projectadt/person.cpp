// Standard library headers
#include <string>
// Local headers
#include "person.h"
// Public data member functions
personAdministration::person::person() {
	// 01-10-2021 08.39
	m_personId = "*";
	m_personAge = "*";
	m_personName = "*";
	m_personAddress = "*";
}
personAdministration::person::person(std::vector<std::string> newPersonInformation) {
	// 20-10-2021 12.50
	m_personId = newPersonInformation[0];
	m_personAge = newPersonInformation[1];
	m_personName = newPersonInformation[2];
	m_personAddress = newPersonInformation[3];
}
int personAdministration::person::updatePerson(std::vector<std::string> newPersonInformation) {
	// 20-10-2021 12.50
	m_personId = newPersonInformation[0];
	m_personAge = newPersonInformation[1];
	m_personName = newPersonInformation[2];
	m_personAddress = newPersonInformation[3];
	// 
	return 0;
}
std::string personAdministration::person::returnPersonName() {
	// 20-10-2021 12.58
	std::string result = "*";
	result = m_personName;
	//
	return result;
}