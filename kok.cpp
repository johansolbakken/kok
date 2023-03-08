#include <cstdlib>
#include <sstream>
#include <string>
#include <iostream>

int main(int argc, char **argv)
{
    std::stringstream args;

    for (int i = 1; i < argc; i++)
    {
        args << " " << std::string(argv[i]);
    }

    std::cout << "Kokær" << args.str() << " nå seru seru\n";

    std::stringstream program;
    program << "git clone";
    program << args.str();

    system(program.str().c_str());
}