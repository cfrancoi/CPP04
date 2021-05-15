#ifndef __ISQUAD_H__
# define __ISQUAD_H__

# include "ISpaceMarine.hpp"

class ISquad
{
public:
    virtual ~ISquad() {}
    virtual int getCount() const = 0;
    virtual ISpaceMarine* getUnit(int) const = 0;
    virtual int push(ISpaceMarine *el) = 0;
};

#endif // __ISQUAD_H__