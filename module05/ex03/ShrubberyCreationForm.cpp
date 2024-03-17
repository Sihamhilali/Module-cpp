#include"ShrubberyCreationForm.hpp"
#include<fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("Shrubbery creation",145,137), target(target) {
    std::cout << "Shrubbery creation" << this->getName() << " constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm():AForm("Shrubbery creation",145,137), target("default") {
    std::cout << "Shrubbery creation" << this->getName() << " default constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Shrubbery creation <" << this->getName() << "> destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):AForm(copy), target(copy.target) {
    std::cout << "SShrubbery creation <" << this->getName() << "> copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref) {
     if (this == &ref)
        return *this;
    AForm::operator=(ref);
    this->target = ref.target;
    std::cout << "Shrubbery creationm <" << this->getName() << "> assignation operator called" << std::endl;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::ofstream file;
    file.open(this->target + "_shrubbery");
    if(!file.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return;
    }
    file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
    file<< "             ,-'" << "          __,,-- \\" << std::endl;
    file<< "           ,'    __,--\"\"\"\"dF      )" << std::endl;
    file<< "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
    file<< "        ,'       _Hb ___dF\"-._,-'" << std::endl;
    file<< "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
    file<< "     (     ,-'                  `." << std::endl;
    file<< "      `._,'     _   _             ;" << std::endl;
    file<< "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
    file<< "       \\    ,'" << "Hb.-'HH`-.dHF\"" << std::endl;
    file<< "        `--'   \"Hb  HH  dF\"" << std::endl;
    file<< "                \"Hb HH dF" << std::endl;
    file<< "                 \"HbHHdF" << std::endl;
    file<< "                  |HHHF" << std::endl;
    file<< "                  |HHH|" << std::endl;
    file<< "                  |HHH|" << std::endl;
    file<< "                  |HHH|" << std::endl;
    file<< "                  |HHH|" << std::endl;
    file<< "                  dHHHb" << std::endl;
    file<< "                .dFd|bHb.               o" << std::endl;
    file<< "      o       .dHFdH|HbTHb.          o /" << std::endl;
    file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
    file << "    .       .   |\\   .    ' '-." << std::endl;
    file << "    ___________/  \\____________" << std::endl;
    file << "   /  Why is it, when you want \\" << std::endl;
    file << "  |  something, it is so damn   |" << std::endl;
    file << "  |    much work to get it?     |" << std::endl;
    file << "   \\___________________________/" << std::endl;
    file.close();
    std::cout << "ShrubberyCreationForm <" << this->getName() << "> has been executed by " << executor.getName() << std::endl;
}