#include <iostream>
#include <string>
#include <ctime>

void EST_Time(int hour, int minute, int second) {
  // Adjust for EST (UTC-5)
  hour -= 4; // Subtract 5 hours
  if (hour < 0) {
    hour += 24; // Wrap around if necessary
  }
  std::cout << "Here's the time in EST: " << hour << ":" << minute << ":" << second << std::endl;
}

int main() {
  std::cout << "Multi-Time Zone Clock\n";
  std::cout << "Choose your time zone:\n 1) EST\n 2) IDK, tell me one to add\n E) Exit\n";
  std::string input;
  std::getline(std::cin, input); 
  if (input == "1" || input == "EST") {
    // Get the current time
    time_t now = time(0);
    tm *ltm = localtime(&now);

    // Extract hour, minute, and second
    int hour = ltm->tm_hour;
    int minute = ltm->tm_min;
    int second = ltm->tm_sec;

    EST_Time(hour, minute, second);
  } 
  return 0;
}
