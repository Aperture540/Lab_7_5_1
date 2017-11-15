/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agendron
 *
 * Created on November 15, 2017, 1:52 PM
 */

#include <cstdlib>
#include <iostream>
#include <regex>
#include <exception>
//#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    regex validIP("([0-255]{1,3}\\.[0-255]{1,3}\\.[0-255]{1,3}\\.[0-255]{1,3})"); //{3}([0-255]{1,3})");
    
    string source, destination;
    
    cin >> source;
    cin >> destination;
    
    try {
        if(regex_match(source, validIP)) {
            if(regex_match(destination, validIP)) {
                 cout << "Valid IP Header." << endl;
            }
            else {
                throw string("Invalid IP Header - Destination IP Address is invalid.");
            }
        }
        else {
            throw string("Invalid IP Header - Source IP Address is invalid.");
        }
    }
    catch(string &exc) {
        cout << exc << endl;
    }
    return 0;
}

