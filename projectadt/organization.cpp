// Standard library headers
#include <string>
// Local headers
#include "organization.h"
// Department
// Public data member functions
// Constructors
organizationAdministration::department::department() {
	// 16-10-2021 10.42
	 m_departmentCode="*";
	 m_departmentName = "*";
	 m_departmentAddress = "*";
}
organizationAdministration::department::department(std::vector<std::string> newDepartmentInformation) {
	// 16-10-2021 10.42
	m_departmentCode = newDepartmentInformation[0];
	m_departmentName = newDepartmentInformation[1];
	m_departmentAddress = newDepartmentInformation[2];
}
// Others
int organizationAdministration::department::updateDepartment(std::vector<std::string> newDepartmentInformation) {
	// 16-10-2021 12.02
	m_departmentCode = newDepartmentInformation[0];
	m_departmentName = newDepartmentInformation[1];
	m_departmentAddress = newDepartmentInformation[2];
	//
	return 0;
}
// *
// Hospital
// Public data member functions
// Constructors
organizationAdministration::hospital::hospital() {
	// 16-10-2021 10.57
	// Default constructor
	m_hospitalCode = "*";
	m_hospitalName = "*";
	m_hospitalAddress = "*";
	// Declare and initialize a department object and add it to m_departments!
	// IMPORTANT! The composition relation dictates that a hospital MUST have at least one
	// department
	organizationAdministration::department firstDepartment;
	m_departments.push_back(firstDepartment);
	
	
}
organizationAdministration::hospital::hospital(std::vector<std::string> newHospitalInformation, std::vector<std::string> newDepartmentInformation) {
	// 16-10-2021 10.57
	// Standard constructor
	m_hospitalCode = newHospitalInformation[0];
	m_hospitalName = newHospitalInformation[1];
	m_hospitalAddress = newHospitalInformation[2];
	// Declare and initialize a department object and add it to m_departments!
	// IMPORTANT! The composition relation dictates that a hospital MUST have at least one
	// department
	organizationAdministration::department firstDepartment(newDepartmentInformation);
	m_departments.push_back(firstDepartment);
}
// Others
// Handle hospital
int organizationAdministration::hospital::updateHospital(std::vector<std::string> newHospitalInformation) {
	// 16-10-2021 11.38
	m_hospitalCode = newHospitalInformation[0];
	m_hospitalName = newHospitalInformation[1];
	m_hospitalAddress = newHospitalInformation[2];
	//
	return 0;
}
// Handle departments
int organizationAdministration::hospital::updateHospitalDepartment(int departmentIndex, std::vector<std::string> newDepartmentInformation) {
	// 16-10-2021 11.38
	int appAction = 0;
	appAction = m_departments[departmentIndex].updateDepartment(newDepartmentInformation);
	//
	return 0;
}