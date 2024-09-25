#ifndef REMEDY_H
#define REMEDY_H


#include <string>
#include <vector>
#include <iostream>

// FIX ME problem with linking

class Remedy {
protected:
    std::string _Name;
    int _treatmentDays;
    int _frequencyPerDay;

public:
    virtual ~Remedy() {}
    virtual void read() = 0;
    virtual void write() const = 0;
};


class MedicalProcedure : public Remedy {
protected:
    std::string _executionConditions;
    int _minutesRequired;

public:
    MedicalProcedure(std::string name = "", int treatDays = 0, int freqPerDay = 0,
        std::string execCond = "", int minutesReq = 0) 
    {
        set(name, treatDays, freqPerDay, execCond, minutesReq);
    }

    void set(std::string name = "", int treatDays = 0, int freqPerDay = 0,
        std::string execCond = "", int minutesReq = 0) 
    {
        _Name = name;
        _treatmentDays = treatDays;
        _frequencyPerDay = freqPerDay;
        _executionConditions = execCond;
        _minutesRequired = minutesReq;
    }

    ~MedicalProcedure() {}

    void read() override;

    void write() const override {
        std::cout << "Information about the " << _Name << " procedure: " << std::endl;
        std::cout << "Treatment days: " << _treatmentDays << std::endl;
        std::cout << "Frequency per day: " << _frequencyPerDay << std::endl;
        std::cout << "Execution conditions: " << _executionConditions << std::endl;
        std::cout << "Minutes required for procedure: " << _minutesRequired << std::endl;
    }
};


class Medicine : public Remedy {
protected:
    std::string _intakeMethod;
    float _doseUnits;

public:
    Medicine(std::string name = "", int treatDays = 0, int freqPerDay = 0,
        std::string intakeMethod = "", float doseUnits = 0)
    {
        set(name, treatDays, freqPerDay, intakeMethod, doseUnits);
    }   

    void set(std::string name = "", int treatDays = 0, int freqPerDay = 0,
        std::string intakeMethod = "", float doseUnits = 0)
    {
        _Name = name;
        _treatmentDays = treatDays;
        _frequencyPerDay = freqPerDay;
        _intakeMethod = intakeMethod;
        _doseUnits = doseUnits;
    }

    ~Medicine() {}

    void read() override {
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

    void write() const override {
        std::cout << "Information about the " << _Name << " medicine: " << std::endl;
        std::cout << "Treatment days: " << _treatmentDays << std::endl;
        std::cout << "Frequency per day: " << _frequencyPerDay << std::endl;
        std::cout << "Intake method: " << _intakeMethod << std::endl;
        std::cout << "Dose units: " << _doseUnits << std::endl; 
    }
};


class TreatmentCourse {
private:
    std::vector<Remedy*> _remedyList;

public:
    // Default constructor
    TreatmentCourse() {}

    ~TreatmentCourse() {
        for (auto remedy : _remedyList) {
            delete remedy;
        }
        _remedyList.clear();
    }

    
};

#endif