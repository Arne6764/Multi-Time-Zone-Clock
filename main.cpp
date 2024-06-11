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

void UTC_Time(int hour, int minute, int second) {
  std::cout << "Here's the time in UTC: " << hour << ":" << minute << ":" << second << std::endl;
}

void PDT_Time(int hour, int minute, int second) {
  // Adjust for PDT (UTC-7)
  hour -= 7; //subtract 7 hours
  if (hour < 0) {
    hour += 24; // Wrap around if necessary
  }
  std::cout << "Here's the time in PDT: " << hour << ":" << minute << ":" << second << std::endl;
}

void CEST_Time(int hour, int minute, int second) {
  // Adjust for CEST (UTC+2)
  hour += 2; //add 2 hours
  if (hour >= 24) {
    hour -= 24; // Wrap around if necessary
  }
  std::cout << "Here's the time in CEST: " << hour << ":" << minute << ":" << second << std::endl;
}

void BST_Time(int hour, int minute, int second) {
  // Adjust for BST (UTC+1)
  hour += 1; //add 1 hour
  if (hour >= 24) {
    hour -= 24; // Wrap around if necessary
  }
  std::cout << "Here's the time in BST: " << hour << ":" << minute << ":" << second << std::endl;
}

void EEST_Time(int hour, int minute, int second) {
  // Adjust for EEST (UTC+3)
  hour += 3; //add 3 hours
  if (hour >=24) {
    hour -= 24; // Wrap around if necessary
  }
  std::cout << "Here's the time in EEST: " << hour << ":" << minute << ":" << second << std::endl;
}

void MST_Time(int hour, int minute, int second) {
  // Adjust for MST (UTC-6)
  hour -= 6; //subtract 6 hours
  if (hour < 0) {
    hour += 24; // Wrap around if necessary
  }
  std::cout << "Here's the time in MST: " << hour << ":" << minute << ":" << second << std::endl;
}

int main() {
  std::cout << "Multi-Time Zone Clock\n";
  std::cout << "Choose your time zone:\n 1) EST\n 2) UTC\n 3) PDT\n 4) CEST\n 5) BST\n 6) EEST\n 7) MST\n E) Exit\n";
  std::string input;
  std::getline(std::cin, input); 
  if (input == "1" || input == "EST" || input == "est") {
    // Get the current time
    time_t now = time(0);
    tm *ltm = localtime(&now);

    // Extract hour, minute, and second
    int hour = ltm->tm_hour;
    int minute = ltm->tm_min;
    int second = ltm->tm_sec;

    EST_Time(hour, minute, second);
  } 
  else if (input == "2" || input == "UTC" || input == "utc") {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int hour = ltm->tm_hour;
    int minute = ltm->tm_min;
    int second = ltm->tm_sec;

    UTC_Time(hour, minute, second);
  }
  else if (input == "3" || input == "PDT" || input == "pdt") {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int hour = ltm->tm_hour;
    int minute = ltm->tm_min;
    int second = ltm->tm_sec;

    PDT_Time(hour, minute, second);
  }
  else if (input == "4" || input == "CEST" || input == "cest") {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int hour = ltm->tm_hour;
    int minute = ltm->tm_min;
    int second = ltm->tm_sec;
    
    CEST_Time(hour, minute, second);
  }
  else if (input == "5" || input == "BST" || input == "bst") {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int hour = ltm->tm_hour;
    int minute = ltm->tm_min;
    int second = ltm->tm_sec;

    BST_Time(hour, minute, second);
  }
  else if (input == "6" || input == "EEST" || input == "eest") {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int hour = ltm->tm_hour;
    int minute = ltm->tm_min;
    int second = ltm->tm_sec;

    EEST_Time(hour, minute, second);
  }
  else if (input == "7" || input == "MST" || input == "mst") {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int hour = ltm->tm_hour;
    int minute = ltm->tm_min;
    int second = ltm->tm_sec;
    MST_Time(hour, minute, second);
  }
  return 0;
}
