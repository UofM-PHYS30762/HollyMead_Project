#ifndef OBSERVED_OBJECT_H
    #define OBSERVED_OBJECT_H

    #include<iostream>
    #include<string>
    #include<cmath>
    #include<memory>

    class Observed_object
    {
        private:

        protected:
            std::string name;
            double mass;
        public:
            Observed_object(std::string name, double mass);
            ~Observed_object(){std::cout<<"Destructor called"<<std::endl;} // Destructor (in-line)
    };
#endif