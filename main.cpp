#include "genome.h"

#include <iostream>
#include "string.h"
#include <cstdio>

using namespace std;

int main() {
  genome myGenome;
  
  myGenome.print();
  
  myGenome.allocate(4);
  
  myGenome.print();
  
  myGenome.randomize();
  
  myGenome.print();
  
  myGenome.setBlue(0, 226);
  
  myGenome.print();
  
  myGenome.set_mRate(0.5);
  
  myGenome.mutate();
  
  myGenome.print();
  
  cout << myGenome.calculate_gene_fitness(2, {15, 167, 244}) << endl;
   
  Pixel* myPixel;
  myPixel = new Pixel[4];
  myPixel[0] = {15, 167, 244};
  myPixel[1] = {1, 2, 3};
  myPixel[2] = {4, 9, 10};
  myPixel[3] = {12, 13, 14};
  
  cout << myGenome.calculate_overall_fitness(myPixel, 4) << endl;
  
  myGenome.set_pixel(3, {4, 9, 10});
  
  myGenome.print();
  
  
  genome Color;
  Color.allocate(4);
  
  Color.setRed(0, 226);
  Color.setRed(3, 100);
  Color.setRed(2, 0);
  
  Color.setBlue(0, 56);
  Color.setBlue(3, 43);
  Color.setBlue(1, 9);
  
  Color.setGreen(2, 79);
  Color.setGreen(1, 3);
  Color.setGreen(0, 134);
  
  cout << "Test setRed()" << endl;
  cout << "Test 1: " << Color.getRed(0) << " compared to " << 226 << endl;
  cout << "Test 2: " << Color.getRed(3) << " compared to " << 100 << endl;
  cout << "Test 3: " << Color.getRed(2) << " compared to " << 0 << endl;
  
  cout << "Test setBlue()" << endl;
  cout << "Test 1: " << Color.getBlue(0) << " compared to " << 56 << endl;
  cout << "Test 2: " << Color.getBlue(3) << " compared to " << 43 << endl;
  cout << "Test 3: " << Color.getBlue(1) << " compared to " << 9 << endl;
  
  cout << "Test setGreen()" << endl;
  cout << "Test 1: " << Color.getGreen(2) << " compared to " << 79 << endl;
  cout << "Test 2: " << Color.getGreen(1) << " compared to " << 3 << endl;
  cout << "Test 3: " << Color.getGreen(0) << " compared to " << 134 << endl;
  
  return 0;
}
