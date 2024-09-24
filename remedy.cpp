#include "remedy.h"
#include <iostream>

// FIX ME implement read and write methods of base class and then use them

void MedicalProcedure::read() {
    std::string tmpName;
    int tmpTreatDays;
    int tmpFreqPerDay;
    std::string tmpExecCond;
    int tmpMinutesReq;

    std::cout << "Reading the medical procedure: " << std::endl << "Enter the name: "; std::cin >> tmpName;
    std::cout << std::endl << "Enter the treatment days "; std::cin >> tmpTreatDays;
    std::cout << std::endl << "Enter the Frequency per day: "; std::cin >> tmpFreqPerDay;
    std::cout << std::endl << "Enter the execution conditions: "; std::cin >> tmpExecCond;
    std::cout << std::endl << "ENter the required minutes to procedure: "; std::cin >> tmpMinutesReq;

    set(tmpName, tmpTreatDays, tmpFreqPerDay, tmpExecCond, tmpMinutesReq);
}

void MedicalProcedure::write() const {
    std::cout << "Information about the " << _Name << "procedure: " << std::endl;
    std::cout << "Treatment days: " << _treatmentDays << std::endl;
    std::cout << "Frequency per day: " << _frequencyPerDay << std::endl;
    std::cout << "Execution conditions: " << _executionConditions << std::endl;
    std::cout << "Minutes required for procedure: " << _minutesRequired << std::endl;
}

void Medicine::read() {
    std::string tmpName;
    int tmpTreatDays;
    int tmpFreqPerDay;
    std::string tmpMethod;
    float tmpDose;

    std::cout << "Reading the medical procedure: " << std::endl << "Enter the name: "; std::cin >> tmpName;
    std::cout << std::endl << "Enter the treatment days "; std::cin >> tmpTreatDays;
    std::cout << std::endl << "Enter the Frequency per day: "; std::cin >> tmpFreqPerDay;
}