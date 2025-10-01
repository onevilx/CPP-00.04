#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string filename = argv[1];
        std::string string1 = argv[2];
        std::string string2 = argv[3];

        std::ifstream infile((filename).c_str());
        if (!infile)
        {
            std::cerr << "this is an error inputfile, try again!" << std::endl;
            return 1;
        }
        std::ofstream outfile((filename + ".replace").c_str());
        if (!outfile)
        {
            std::cerr << "this is an error in outputfile, try again!" << std::endl;
            return 1;
        }

        std::string line;
        while (std::getline(infile, line))
        {
            size_t pos = 0;
            while ((pos = line.find(string1, pos)) != std::string::npos)
            {
                line.erase(pos, string1.length());
                line.insert(pos, string2);
                pos += string2.length();
            }
            outfile << line << std::endl;
        }
    }
    else
        std::cout << "this is Wrong! its: ./program filename oldstring newstring" << std::endl;
    return 0;
}