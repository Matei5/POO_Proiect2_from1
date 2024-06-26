#ifndef POO_PROIECT2_FROM1_ABSTRACTSTUDENT_H
#define POO_PROIECT2_FROM1_ABSTRACTSTUDENT_H

#include "Ipersoana.h"

class AbstractStudent : public Ipersoana{
protected:
    std::string Nume;
    std::string Prenume;
    float nota;
public:
    std::string getFullName() override;
    virtual float getNota() const;
    virtual void setNota(float n);
    friend std::ostream& operator<<(std::ostream& os, const AbstractStudent &s);
    virtual void Afisare() const;

    virtual ~AbstractStudent();

    AbstractStudent(std::string Nume = "", std::string Prenume = "", float nota_ = 0);
};

#endif //POO_PROIECT2_FROM1_ABSTRACTSTUDENT_H
