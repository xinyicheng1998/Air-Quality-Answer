#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iterator>
#include <iomanip>
#include "main.cpp"

using namespace std;

int mainTest(){

    ifstream infile;
    readFile(infile);
    // test case no.
    // 1. terminal input empty.txt --> the file is empty
    // 2. terminal input testing.txt --> Here is the current number of entries in our database: 42
    // 3. terminal input q --> Exit!
    // use testing.txt for follwing testing 
    // 4. terminal input 1, year: 2004, month: 3 --> Average temperature for Month 3 is 10.43 Degrees Celsius.
    // 5. terminal input 2, year: 2004, month:4 --> Average Relative Humidity for Month 4 is 53.10%.
    // 6. terminal input 3, year: 2004, month:5 --> Average Absolute Humidity for Month 5 is 1.22.
    // 7. terminal input 4, year: 2004, month:8, day: 21, hour: 0, minute: 00, second: 00 --> Temperature: 26.70, Relative Humidity: 46.70
    // 8. terminal input 5, year: 2004, month:7 --> Highest Temperature for Month 7 is 34.00 Degrees Celsius.
    // 9. terminal input 6, year: 2004, month:8 --> Highest Relative Humidity for Month 8 is 47.30%.
    // 10. terminal input 7, year: 2004, month:9 --> Highest Absolute Humidity for Month 9 is 1.11.
    // 11. terminal input 8, year: 2004, month:10 --> Average temperature for Month 10 is 20.90 Degrees Celsius. 
                                                    // The dates and times for a month when the temperature is higher than the average temperature: 
                                                    // Date: 2/10/2004   Time: 9:0:0
    // 12. terminal input 9, year: 2005, month:1 --> Average Relative Humidity for Month 1 is 60.83%
                                                    // The dates and times for a month when the relative humidity is higher than the average relative humidity: 
                                                    // Date: 19/1/2005   Time: 7:0:0
    // 13. terminal input 10, year: 2005, month:2 --> Average Absolute Humidity for Month 2 is 0.52.
                                                    // The dates and times for a month when the absolute humidity is higher than the average absolute humidity:
                                                    // Date: 25/2/2005   Time: 5:0:0

    // 14. terminal input 1, year: 2005, month: 12 --> Please enter valid month and year
    // 15. terminal input 4, year: 2005, month:4, day: 31 --> Date and Time not found in our data base. Search another date!
    // 16. terminal input 4, year: 2005, month:2, day:1, hour:7, minute: 00, second: 00 --> Date and Time not found in our data base. Search another date!
    
    return 0;
}