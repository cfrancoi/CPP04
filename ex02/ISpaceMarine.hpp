#ifndef __ISPACEMARINE_H__
#define __ISPACEMARINE_H__

class ISpaceMarine
{

public:
    
    virtual ~ISpaceMarine() {}
    virtual ISpaceMarine *clone(void) const = 0;
    virtual void battleCry(void) const = 0;
    virtual void rangedAttack(void) const = 0;
    virtual void meleeAttack(void) const = 0;
};

#endif // __ISPACEMARINE_H__