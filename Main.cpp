#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>
#include "Observed_object.h"
#include "Star.h"



int main()
{
    //initialise variables
    std::string line;
    std::string value;
    std::vector<std::vector<std::string>> objects;
    std::vector<std::string> line_vector;

    //Open file
    std::ifstream file;
    file.open("Objects.txt");

    while(getline(file, line))
        {
        std::stringstream line_stream(line);
        while(getline(line_stream, value,',')) 
        {
            line_vector.push_back(value);
        }
        
        objects.push_back(line_vector);
        line_vector.clear();
        }
    std::cout<<objects[0][2];
    Observed_object test{"aaa",3};

    //std::vector<Observed_object> objects;

    file.close();

    return 0;

}