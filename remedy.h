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
    virtual void read() override;
    virtual void write() const override;
};


class Medicine : public Remedy {
protected:
    std::string _intakeMethod;
    float _doseUnits;

public:
    virtual void read() override;
    virtual void write() const override;
};


class TreatmentCourse {
private:
    std::vector<Remedy*> _remedyList;
};

#endif