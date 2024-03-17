
#include "Base.hpp"

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

int	main(int argc, char **argv)
{
    if (argc > 1 && argv)
    {
        std::cout << "realtype: error: command-line arguments aren't supported" << std::endl;
        return EXIT_FAILURE;
    }
    Base *c;
    std::cout << "TEST 1" << std::endl;
    c = generate();
    identify(c);
    identify(*c);

    delete c;
    return EXIT_SUCCESS;
}
