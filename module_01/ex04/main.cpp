//missing 42 header

#include <iostream>
#include <string>

void checkArgs(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Number of arguments not valid." << std::endl;
        exit(1);
    }
    std::string strToFind = argv[2];
    if (strToFind.empty())
    {
        std::cout << "String cannot be empty."
        exit(1);
    }
}

int main(int argc, char **argv)
{
    checkArgs(argc, argv);
    std::string 
}