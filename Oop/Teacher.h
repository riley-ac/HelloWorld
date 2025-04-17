#pragma once
#pragma once
#include "Human.h"

using classroom_t = unsigned short;

class Teacher : public Human
{
public:
    Teacher() {}
    Teacher(std::string name, age_t age, std::string className, classroom_t classroom) :
        Human{ name, age },
        m_classroom{ classroom },
        m_className{ className }
    {
        //
    }
    void Read();
    void Write();

    void SetClassName(std::string className) {
        m_className = className;
        std::string GetClassName() {
            return m_classroom;
        }
    }
    void


private:
    std::string m_className
        classroom_t m_classroom = 0;
};