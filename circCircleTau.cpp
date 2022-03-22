// Copyright (c) 2022 Daniel Imperadeiro All rights reserved.
// Created by: Daniel Imperadeiro
// Created on: March. 22, 2022
// This program asks the user for the radius and then
// displays the circumference using tau.
#include <iostream>

int main() {
  // declare constants
  const float TAU = 6.28;

  // declare variables
  float radius, circumference;

  std::cout << "Enter the radius (mm): ";
  std::cin >> radius;

  // calculate the circumference using tau
  circumference = TAU * radius;

  //display the circumference to the user
  std::cout << "\n";
  std::cout << "Circumference = " << circumference << " mm" << std::endl;
}
