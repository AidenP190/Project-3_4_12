/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: aparsons
 *
 * Created on September 12, 2017, 1:12 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int vector[] = { 3, -5, 7, -20, -4, 14, 5, 2, -13 }; 
    
    int n = sizeof(vector) / sizeof(vector[0]);
    
    int small, *ptr = vector;
    
    small = *ptr;
    
    for(int i; i < n; i++)
    {
        if(*ptr < small)
        {
            small = *ptr;
            
            ptr++;
        } 
        else
        {
            ptr++;
        }
        
    }
    
    cout << "The smallest number in the array is " << small;
    
    return 0;
}

