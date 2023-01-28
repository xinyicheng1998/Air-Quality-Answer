#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iterator>
#include <iomanip>
#include "airQualityType.h"
#include "airQualityType.cpp"
#include "dateType.h"
#include "dateType.cpp"
#include "timeType.h"
#include "timeType.cpp"


int main(){

    //testing dateType
    cout << "testing dateType" << endl;

    cout << "testing for default constructor" << endl;
    dateType date = dateType();
    date.print();
    cout << endl;

    cout << "testing for constructor" << endl;
    dateType date1 = dateType(1, 1, 2020);
    date1.print();
    cout << endl;

    cout << "testing getter" << endl;
    cout << date1.getDay() << endl;
    cout << date1.getMonth() << endl;
    cout << date1.getYear() << endl;

    cout << "testing setter" << endl;
    dateType date2;
    cout << "set day to 14" << endl;
    date2.setDay(14);
    cout << "set month to 4" << endl;
    date2.setMonth(4);
    cout << "setYear to 2022" << endl;
    date2.setYear(2022);
    date2.print();
    cout << endl;

    dateType date3;
    cout << "set day to 2, set month to 1, set year to 2000" <<endl;
    date3.setDateType(2, 1, 2000);
    date3.print();
    cout << endl;
    
    
    
    //testing timeType
    cout << "testing timeType" << endl;

    cout << "testing for default constructor" << endl;
    timeType time = timeType();
    time.print();
    cout << endl;

    cout << "testing for constructor" << endl;
    timeType time1 = timeType(22, 59, 59);
    date1.print();
    cout << endl;

    cout << "testing getter" << endl;
    cout << time1.getHour() << endl;
    cout << time1.getMinute() << endl;
    cout << time1.getSecond() << endl;

    cout << "testing setter" << endl;
    timeType time2;
    cout << "set hour to 1" << endl;
    time2.setHour(1);
    cout << "set minute to 1" <<endl;
    time2.setMinute(1);
    cout << "set second to 1" << endl;
    time2.setSecond(1);
    time2.print();
    cout << endl;

    timeType time3;
    cout << "set hour to 2, set minute to 1, set second to 59" <<endl;
    time3.setTimeType(2, 1, 59);
    time3.print();
    cout << endl;

    
    //testing for airQualityType
    cout << "testing airQualityType" << endl;

    cout << "testing for default constructor" << endl;
    airQualityType airQuality = airQualityType();
    airQuality.print();
    cout << endl;

    cout << "testing for constructor" << endl;
    airQualityType airQuality1 = airQualityType(date1, time1, 31.0, 1.0, 0.7357);
    airQuality1.print();
    cout << endl;

    cout << "testing getter" << endl;
    cout << airQuality1.getDate() << endl;
    cout << airQuality1.getTime() << endl;
    cout << airQuality1.getTemp() << endl;
    cout << airQuality1.getRelativeHumidity() << endl;
    cout << airQuality1.getAbsoluteHumidity() << endl;

    cout << "testing setter" << endl;
    airQualityType airQuality2;
    cout << "set Date to 14/4/2022" << endl;
    airQuality2.setDate(date2);
    cout << "set Time to 1:1:1" << endl;
    airQuality2.setTime(time2);
    cout << "set Temperature to 35.0" << endl;
    airQuality2.setTemp(35.0);
    cout << "set Relative Humidity to 86.1" << endl;
    airQuality2.setRelativeHumidity(86.1);
    cout << "set Absolute Humidity to 0.7951" << endl;
    airQuality2.setAbsoluteHumidity(0.7951);
    airQuality2.print();
    cout << endl;

    airQualityType airQuality3;
    cout << "set Date to 2/1/2000, set Time to 2:1:59, set Temperature to 25.0, set Relative Humidity to 65.1, set Absolute Humidity to 0.6156" << endl;
    airQuality3.setAirQualityType(date3, time3, 25.0, 65.1, 0.6156);
    airQuality3.print();
    cout << endl;

    return 0;
}