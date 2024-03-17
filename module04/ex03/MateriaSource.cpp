#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        this->learnedMaterias[i] = NULL;
    }
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        delete this->learnedMaterias[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource &MS)
{
     *this = MS;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &MS)
{
    for(int i = 0; i < 4; ++i)
    {
        if(this->learnedMaterias[i])
        {
            delete this->learnedMaterias[i];
            this->learnedMaterias[i] = MS.learnedMaterias[i];
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; ++i) {
        if (!learnedMaterias[i]) {
            learnedMaterias[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; ++i) {
        if (learnedMaterias[i] && learnedMaterias[i]->getType() == type) {
            return learnedMaterias[i]->clone();
        }
    }
    return NULL;
}
