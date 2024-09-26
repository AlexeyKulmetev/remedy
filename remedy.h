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

    virtual void read() override;

    virtual void write() const override;
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

    virtual void read() override; 

    virtual void write() const override;
};


class TreatmentCourse {
private:
    std::vector<Remedy*> _remedyList;

public:
    // Default constructor
    TreatmentCourse() {}

    TreatmentCourse(std::vector<Remedy*>& remedies) {
        _remedyList = remedies;
    }

    ~TreatmentCourse() {
        for (auto remedy : _remedyList) {
            delete remedy;
        }
        _remedyList.clear();
    }

    void addRemedy(Remedy* remedy) {
        _remedyList.push_back(remedy);
    }

    void displayRemedy() {
        for (Remedy* remedy : _remedyList) {
            remedy->write();
        }
    }
};

#endif