
#pragma once


#include "ASpell.hpp"

class Polymorph : public ASpell
{
    public:
        Polymorph();
        ~Polymorph();
        
        Polymorph* clone() const;
};


