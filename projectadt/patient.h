#pragma once
// Standard library headers
#include <string>
#include <vector>
namespace patientAdministration{
	class patient{
		// 01-10-2021 08.35
	public:
		// Constructors
		// Default constructor
		patient();
		patient(std::vector<std::string> newPatientInformation);
		// Other data member functions
		std::string returnPatientId();
	private:
	// Private data members
	//
	std::string m_patientId;
	std::string m_patientName;
	std::string m_patientAddress;
	//
	std::string m_dateAdmission;
	std::string m_dateDischarge;
	std::string m_department;
	}; 
}