#include <iostream>
#include <sstream>
#include <string>

#include "initialization.hpp"

void initialize(bool& is_initialized, double& m_1, double& m_2, double& L_1, double& L_2, double& ini_theta_1, double& ini_theta_2, char& with_friction){

    std::cout << "Press enter to set up initial conditions, otherwise type \"d\" for default values. ";

    std::string input;
    std::getline(std::cin, input);
    if (input == "d"){
        std::cout << "\nDefault setup: \n" << std::endl;
        std::cout << "m_1 = " << m_1 << std::endl;
        std::cout << "m_2 = " << m_2 << std::endl;
        std::cout << "L_1 = " << L_1 << std::endl;
        std::cout << "L_2 = " << L_2 << std::endl;
        std::cout << "ini_theta_1 = " << ini_theta_1 << std::endl;
        std::cout << "ini_theta_2 = " << ini_theta_2 << std::endl;
        std::cout << "friction: no" << std::endl;

        is_initialized = true;
    }
    else if (input.empty()){
        std::cout << "Enter mass of 1st pendulum" << std::endl;
        std::cout << "m_1 = ";
        while (!(std::cin >> m_1) || m_1 <= 0)
        {
            std::cout << "Invalid. Enter again." << std::endl;
            std::cout << "m_1 = ";
            std::cin.clear();
            std::cin.ignore(1000,'\n');
        }

        std::cout << "Enter mass of 2nd pendulum" << std::endl;
        std::cout << "m_2 = ";
        while (!(std::cin >> m_2) || m_2 <= 0)
        {
            std::cout << "Invalid. Enter again." << std::endl;
            std::cout << "m_2 = ";
            std::cin.clear();
            std::cin.ignore(1000,'\n');
        }

        std::cout << "Enter length of 1st pendulum" << std::endl;
        std::cout << "L_1 = ";
        while (!(std::cin >> L_1) || L_1 <= 0)
        {
            std::cout << "Invalid. Enter again." << std::endl;
            std::cout << "L_1 = ";
            std::cin.clear();
            std::cin.ignore(1000,'\n');
        }

        std::cout << "Enter length of 2nd pendulum" << std::endl;
        std::cout << "L_2 = ";
        while (!(std::cin >> L_2) || L_2 <= 0)
        {
            std::cout << "Invalid. Enter again." << std::endl;
            std::cout << "L_2 = ";
            std::cin.clear();
            std::cin.ignore(1000,'\n');
        }

        std::cout << "Enter initial angle 1st pendulum (in degrees)" << std::endl;
        std::cout << "ini_theta_1 = ";
        while (!(std::cin >> ini_theta_1))
        {
            std::cout << "Invalid. Enter again." << std::endl;
            std::cout << "ini_theta_1 = ";
            std::cin.clear();
            std::cin.ignore(1000,'\n');
        }

        std::cout << "Enter  initial angle 2nd pendulum (in degrees)" << std::endl;
        std::cout << "ini_theta_2 = ";
        while (!(std::cin >> ini_theta_2))
        {
            std::cout << "Invalid. Enter again." << std::endl;
            std::cout << "ini_theta_2 = ";
            std::cin.clear();
            std::cin.ignore(1000,'\n');
        }

        std::cout << "With friction? (y/n) ";
        while (!(std::cin >> with_friction) || (with_friction != 'y' && with_friction != 'n'))
        {
            std::cout << "Invalid. Enter again." << std::endl;
            std::cout << "With friction? (y/n) ";
            std::cin.clear();
            std::cin.ignore(1000,'\n');
        }

        std::cout << "\nPersonal setup: \n" << std::endl;
        std::cout << "m_1 = " << m_1 << std::endl;
        std::cout << "m_2 = " << m_2 << std::endl;
        std::cout << "L_1 = " << L_1 << std::endl;
        std::cout << "L_2 = " << L_2 << std::endl;
        std::cout << "ini_theta_1 = " << ini_theta_1 << std::endl;
        std::cout << "ini_theta_2 = " << ini_theta_2 << std::endl;
        if (with_friction == 'y'){std::cout << "friction: yes"  << std::endl;}
        else {std::cout << "friction: no"  << std::endl;}
        
        is_initialized = true;
    }

}