#include "genome.h"

#include <iostream>
#include "string.h"
#include "string"
#include <cstdio>

using namespace std;

int main() {
  genome myGenome;
  
  myGenome.print();
  
  cout << endl;
  
  myGenome.allocate(4);
  
  myGenome.print();

  cout << endl;
  
  myGenome.randomize();
  
  myGenome.print();
  
  cout << endl;
  
  myGenome.setBlue(0, 226);
  
  myGenome.print();

  cout << endl;
  
  myGenome.set_mRate(0.5);
  
  myGenome.mutate();
  
  myGenome.print();

  cout << endl;
  
  cout << myGenome.calculate_gene_fitness(2, {15, 167, 244}) << endl;
   
  Pixel* myPixel;
  myPixel = new Pixel[4];
  myPixel[0] = {15, 167, 244};
  myPixel[1] = {1, 2, 3};
  myPixel[2] = {4, 9, 10};
  myPixel[3] = {12, 13, 14};
  
  cout << myGenome.calculate_overall_fitness(myPixel, 4) << endl;

  cout << endl;
  
  myGenome.setPixel(3, {4, 9, 10});
  
  myGenome.print();

  cout << endl;
  
  myGenome.UnitTest();
  
  return 0;
}
