#include <iostream>
#include <ctime>
using namespace std;
 
int main( )
 {
    
                 time_t ttime = time(0);
                 int n;
                 cin>>n;
                 
                 tm *local_time = localtime(&ttime);
                 switch(n)
                 {
                    case 1:
                         cout << "Year: "<< 1900 +  local_time->tm_year << endl;
                         break;
                     case 2:
                          cout << "Month: "<< 1 + local_time->tm_mon<< endl;
                          break;
                      case 3:
                           cout << "Day: "<< local_time->tm_mday << endl;
                           break;
                       case 4:
                           cout << "Time: "<< 1 + local_time->tm_hour << ":";
                           cout << 1 + local_time->tm_min << ":";
                           cout << 1 + local_time->tm_sec << endl;
                           break;
                      default:
                           cout<<"invalid choice";
                   }
                   return 0;
 }
