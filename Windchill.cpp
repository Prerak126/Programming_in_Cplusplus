#include <iostream> 
#include <iomanip> 
#include <cmath> 
using namespace std; 

int windChill(int Temp, int Speed); 

int main() 
{ 
         
        cout << "|Wind Chill Table|" <<'\n';
        cout << "|Speed|"<<"                                |Temperature F|" << endl; 
        cout << "|  MPH|"; 
        for (int x = 40; x > -50; x -= 5) 
                cout <<setw(5) <<x; 
        cout <<'\n';
        cout << "-------------------------------------------------------------------------------------------------";
        cout <<'\n';

        
        for (int wind = 5; wind <= 60; wind += 5) 
        { 
                cout << setw(5) << wind << " |"; 
                for (int temp = 40; temp >= -45; temp -= 5) 
                { 
                        cout << setw(5) << windChill(temp, wind); 
                } 
                cout <<'\n'; 
        } 
        cout << "-------------------------------------------------------------------------------------------------";
        return 0; 
} 

int windChill(int Temp, int Speed) 
{ 
        return round (35.74 + (0.6215 * Temp) - (35.75 * pow(Speed, 0.16)) + (0.4275 * Temp * pow(Speed, 0.16)));
            
} 
 
