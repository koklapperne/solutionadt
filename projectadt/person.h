#pragma once
// Standard library headers
#include <string>
#include <vector>
namespace personAdministration {
	class person {
		// 03-10-2021 09.56
	public:
		// Constructors
		// Default constructor
		person();
		// Standard constructor
		person(std::vector<std::string> newPatientInformation);
		// Other data member functions
		int updatePerson(std::vector<std::string> newPatientInformation);
		std::string returnPersonName();
	private:
		// Private data members
		//
		std::string m_personId;
		std::string m_personAge;
		//
		std::string m_personName;
		std::string m_personAddress;

	};
}