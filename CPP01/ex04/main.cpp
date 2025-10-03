#include <iostream>
#include <fstream>

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

        std::string content;
        char ch;
        while (infile.get(ch))
            content += ch;
        size_t pos = 0;
        while ((pos = content.find(string1, pos)) != std::string::npos)
        {
            content.erase(pos, string1.length());
            content.insert(pos, string2);
            pos += string2.length();
        }
        outfile << content;
    }
    else
        std::cout << "this is Wrong! its: ./program filename oldstring newstring" << std::endl;
    return 0;
}