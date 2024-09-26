#include "remedy.h"


void MedicalProcedure::read() {
    std::string tmpName;
    int tmpTreatDays;
    int tmpFreqPerDay;
    std::string tmpExecCond;
    int tmpMinutesReq;

    std::cout << "Reading the medical procedure: " << std::endl;
    std::cout << "Enter the name: "; std::cin >> tmpName;
    std::cout << std::endl << "Enter the treatment days "; std::cin >> tmpTreatDays;
    std::cout << std::endl << "Enter the Frequency per day: "; std::cin >> tmpFreqPerDay;
    std::cout << std::endl << "Enter the execution conditions: "; std::cin >> tmpExecCond;
    std::cout << std::endl << "ENter the required minutes to procedure: "; std::cin >> tmpMinutesReq;

    if (tmpName.empty()) tmpName = "No name";
    if (tmpTreatDays < 1) tmpTreatDays = 1;
    if (tmpFreqPerDay < 1) tmpFreqPerDay = 1;
    if (tmpExecCond.empty()) tmpExecCond = "No execution conditions";
    if (tmpMinutesReq < 1) tmpMinutesReq = 1;

    set(tmpName, tmpTreatDays, tmpFreqPerDay, tmpExecCond, tmpMinutesReq);
}

void MedicalProcedure::write() const {
    std::cout << "Information about the " << _Name << " procedure: " << std::endl;
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

    std::cout << "Reading the medicine: " << std::endl;
    std::cout << "Enter the name: "; std::cin >> tmpName;
    std::cout << std::endl << "Enter the treatment days "; std::cin >> tmpTreatDays;
    std::cout << std::endl << "Enter the Frequency per day: "; std::cin >> tmpFreqPerDay;
    std::cout << std::endl << "Enter the intake method: "; std::cin >> tmpMethod;
    std::cout << std::endl << "Enter the dose units: "; std::cin >> tmpDose;

    if (tmpName.empty()) tmpName = "No name";
    if (tmpTreatDays < 1) tmpTreatDays = 1;
    if (tmpFreqPerDay < 1) tmpFreqPerDay = 1;
    if (tmpMethod.empty()) tmpMethod = "No intake method";
    if (tmpDose < 1) tmpDose = 1;

    set(tmpName, tmpTreatDays, tmpFreqPerDay, tmpMethod, tmpDose);
}

void Medicine::write() const {
    std::cout << "Information about the " << _Name << " medicine: " << std::endl;
    std::cout << "Treatment days: " << _treatmentDays << std::endl;
    std::cout << "Frequency per day: " << _frequencyPerDay << std::endl;
    std::cout << "Intake method: " << _intakeMethod << std::endl;
    std::cout << "Dose units: " << _doseUnits << std::endl; 
}