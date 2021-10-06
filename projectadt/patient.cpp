// Standard library headers
#include <string>
// Local headers
#include "patient.h"
// Public data member functions
// Constructors
patientAdministration::patient::patient() {
	// 01-10-2021 08.39
	m_patientId = "*";
	m_patientName = "*";
	m_patientAddress = "*";
	//
	m_dateAdmission = "*";
	m_dateDischarge = "*";
	m_department = "*";
}
patientAdministration::patient::patient(std::vector<std::string> newPatientInformation) {
	// 01-10-2021 09.00
	m_patientId = newPatientInformation[0];
	m_patientName = newPatientInformation[1];
	m_patientAddress = newPatientInformation[2];
	// 
	m_dateAdmission = newPatientInformation[3];
	m_dateDischarge = newPatientInformation[4];
	m_department = newPatientInformation[5];
}
// Others
// Updating all datamembers
int patientAdministration::patient::updatePatient(std::vector<std::string> newPatientInformation) {
	// 06-10-2021 14.30
	m_patientId = newPatientInformation[0];
	m_patientName = newPatientInformation[1];
	m_patientAddress = newPatientInformation[2];
	// 
	m_dateAdmission = newPatientInformation[3];
	m_dateDischarge = newPatientInformation[4];
	m_department = newPatientInformation[5];
	// 
	return 0;
}
// Handling PatientId
std::string patientAdministration::patient::returnPatientId() {
	// 01-10-2021 10.54
	std::string result = "*";
	result = m_patientId;
	//
	return result;
}
// Handling DateDischarge
int patientAdministration::patient::updateDateDischarge(std::string newDischargeDate) {
	// 03-10-2021 10.04
	m_dateDischarge= newDischargeDate;
	//
	return 0;
}
std::string patientAdministration::patient::returnDateDischarge() {
	// 03-10-2021 10.04
	std::string result = "*";
	result = m_dateDischarge;
	return result;
}