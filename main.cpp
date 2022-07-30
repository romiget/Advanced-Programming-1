#include <fstream>
#include "Flower.h"
#include "FileHandler.h"

using namespace std;
int main(int argc, char* argv[]) {
    std::vector<Flower> flowers = FileHandler::getFlowers("classified.csv");
    fstream fs;
    fs.open("Unclassified.csv");
    if (!fs)
        throw exception();
    FileHandler::fileReader(flowers, fs, 3);
}
