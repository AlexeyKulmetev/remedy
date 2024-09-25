#include "remedy.h"


void MedicalProcedure::read() override {
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