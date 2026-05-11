#include<iostream>
#include<string>
#include<cmath>
#include<memory>
#include "Observed_object.h"

Observed_object::Observed_object(std::string object_name, double object_mass)
{
  std::cout<<"Parameterized constructor called"<<std::endl;
  name = object_name;
  mass = object_mass;
}