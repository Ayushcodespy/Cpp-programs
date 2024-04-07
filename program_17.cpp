/* write a c++ program to calculate the no of tiles used in home where total area and
   area of one tile is taken by user*/

#include <iostream>
#include <cmath>

using namespace std;

class TileCalculator {
    private:
    double totalArea;
    double tileArea;
    public:
    void setTotalArea(double area) {
        totalArea = area;
    }

    void setTileArea(double area) {
        tileArea = area;
    }

    int calculateTiles() {
        return ceil(totalArea / tileArea);
    }
};

int main() {
    double totalArea, tileArea;
    
    cout << "Enter the total area of the home (in square units): ";
    cin >> totalArea;
    
    cout << "Enter the area covered by one tile (in square units): ";
    cin >> tileArea;
    
    TileCalculator calc;
    
    calc.setTotalArea(totalArea);
    calc.setTileArea(tileArea);
    
    int numberOfTiles = calc.calculateTiles();

    cout << "Total number of tiles needed: " << numberOfTiles << endl;
    
    return 0;
}
