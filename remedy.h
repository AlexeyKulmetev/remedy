#ifndef REMEDY_H
#define REMEDY_H


#include <string>
#include <vector>


class Remedy {
protected:
    std::string _Name;
    int _treatmentDays;
    int _frequencyPerDay;

public:
    virtual void read();
    virtual void write() const;
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

    virtual void read() override;
    virtual void write() const override;
};


class TreatmentCourse {
private:
    std::vector<Remedy*> _remedyList;

public:
    // Default constructor
    TreatmentCourse() {}

    
};

#endif