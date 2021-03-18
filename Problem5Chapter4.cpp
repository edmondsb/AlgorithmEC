using namespace std;

#include <iostream>
#include <cmath>

int main()
{
    int houses[] = {2, 7, 10, 14, 19, 21, 27, 31, 40, 50};

    int stations[] = {0, 0, 0, 0, 0, 0 ,0 ,0 ,0, 0};

    int numberOfHouses = 10;
    
    int currentHouse = 0;
    int currentStation = 0;
    int i = 0;

    while (i < numberOfHouses) {
        currentHouse = houses[i];
        if (i == 0) {
            stations[0] = (currentHouse + 4);
            currentStation = stations[0];
        }
        else if (abs(currentHouse - currentStation) > 4)
        {
            stations[i] = (currentHouse + 4);
            currentStation = stations[i];
        }
        i++;
    }
    
    cout << "Stations are at ";
    for (int i = 0; i < numberOfHouses; i++)
    {
        if(stations[i] != 0)
        cout <<stations[i] << " ";
    }
    cout << endl;
}
