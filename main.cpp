#include <iostream>
#include <fstream>
#include "Flower.h"
#include "FileHandler.h"

using namespace std;
int main() {
    std::vector<Flower> flowers = FileHandler::getFlowers("classified.csv");
}
