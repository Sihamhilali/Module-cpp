#pragma once
#include <iostream>
#include"IMateriaSource.hpp"
#include"AMateria.hpp"
class MateriaSource: public IMateriaSource
{
    private:
        AMateria *learnedMaterias[4];
    public :
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &M);
    MateriaSource &operator=(const MateriaSource &M);
    void learnMateria(AMateria* obj);
    AMateria* createMateria(std::string const & type);
};