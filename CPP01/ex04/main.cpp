#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string filename = argv[1];
        std::string string1 = argv[2];
        std::string string2 = argv[3];

        if (string1.empty())
        {
            std::cout << "string1 is empty" << std::endl;
            return 1;
        }
        std::ifstream infile((filename).c_str());
        if (!infile)
        {
            std::cout << "this is an error inputfile, try again!" << std::endl;
            return 1;
        }
        std::ofstream outfile((filename + ".replace").c_str());
        if (!outfile)
        {
            std::cout << "this is an error in outputfile, try again!" << std::endl;
            return 1;
        }

        std::string content;
        char ch;
        while (infile.get(ch))
            content += ch;
        if (content.empty())
        {
            std::cout << "the file " << filename << " is empty!" << std::endl;
            return 1;
        }
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