#pragma once
// Standard library headers
#include <string>
#include <vector>
namespace patientAdministration{
	class patient{
		// 03-10-2021 09.56
	public:
		// Constructors
		// Default constructor
		patient();
		// Standard constructor
		patient(std::vector<std::string> newPatientInformation);
		// Other data member functions
		int updatePatient(std::vector<std::string> newPatientInformation);
		std::string returnPatientId();
		std::string returnPatientName();
		int updateDateDischarge(std::string newDischargeDate);
		std::string returnDateDischarge();
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