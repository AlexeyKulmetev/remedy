#include "remedy.h"


int main() {

    MedicalProcedure proc1("Procedure 1", 3, 2, "without connditions", 6);
    MedicalProcedure proc2("Ukol", 3, 2, "proteret spirtom", 6);

    Medicine med1("Name1", 4, 2, "zapit vodoi", 1.5);
    Medicine med2("paracetamol", 5, 1, "zapit vodoi", 0.5);

    TreatmentCourse course1;
    course1.addRemedy(&proc1);
    course1.addRemedy(&proc2);
    course1.addRemedy(&med1);
    course1.addRemedy(&med2);

    course1.displayRemedy();

    return 0;
}