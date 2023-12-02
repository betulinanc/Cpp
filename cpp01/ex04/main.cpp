#include "replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
        return (0);

    replace handle(av[1], av[2], av[3]);
    handle.findAndWrite();
}