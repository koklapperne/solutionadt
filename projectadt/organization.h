#pragma once
// Standard library headers
#include <string>
#include <vector>
namespace organizationAdministration {
	class department {
		// 16-10-2021 10.35
	public:
		// Constructors
		// Default constructor
		department();
		// Standard constructor
		department(std::vector<std::string> newDepartmentInformation);
		// Other public data member functions
		int updateDepartment(std::vector<std::string> newDepartmentInformation);
	private:
		// Private data members
		//
		std::string m_departmentCode;
		std::string m_departmentName;
		std::string m_departmentAddress;
		
	};
	//
	class hospital {
		// 16-10-2021 10.35
	public:
		// Constructors
		// Default constructor
		hospital();
		// Standard constructor
		hospital(std::vector<std::string> newHospitalInformation, std::vector<std::string> newDepartmentInformation);
		// Other public data member functions
		// Handle hospital
		int updateHospital(std::vector<std::string> newHospitalInformation);
		// Handle departments
		// IMPORTANT! Composition dictates that manipulation of department must take place through hospital!
		int updateHospitalDepartment(int departmentIndex, std::vector<std::string> newHospitalDepartmentInformation);
	private:
		// Private data members
		//
		std::string m_hospitalCode;
		std::string m_hospitalName;
		std::string m_hospitalAddress;
		// Composition one to many relation to department
		// IMPORTANT! Departments are leafs of hospital
		std::vector<department> m_departments;
	};
}
