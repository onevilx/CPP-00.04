#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Harl harl;

        std::string Levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

        int levelindex = -1;

        int i = 0;
        
        while(i < 4)
        {
            if (Levels[i] == argv[1])
            {
                levelindex = i;
                break;
            }
            i++;
        }

        switch (levelindex)
        {
            case 0:
                std::cout << "[ DEBUG ]" << std::endl;
                harl.complain("DEBUG");
                std::cout << std::endl;
                // fall through

            case 1:
                std::cout << "[ INFO ]" << std::endl;
                harl.complain("INFO");
                std::cout << std::endl;
                //  fall through
            case 2:
                std::cout << "[ WARNING ]" << std::endl;
                harl.complain("WARNING");
                std::cout << std::endl;
                // fall through
            case 3:
                std::cout << "[ ERROR ]" << std::endl;
                harl.complain("ERROR");
                std::cout << std::endl;
                break;

            default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        }
    }
    else
        std::cout << "WRONG! ./program <levels>" << std::endl;
}