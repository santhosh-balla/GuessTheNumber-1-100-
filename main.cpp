  #include <iostream>

  using namespace std;

  int main() {
      int low = 1;
      int high = 100;
      int attempts = 0;

      while (attempts < 7) {
          int mid = low + (high - low) / 2;
          char answer;
          cout << "Is this your number, or is it higher or lower (y/h/l)? " << mid << endl;
          cin >> answer;

          if (answer == 'y') {
              cout << "I guessed it correctly!" << endl;
              break;
          } else if (answer == 'h') {
              low = mid + 1;
          } else if (answer == 'l') {
              high = mid - 1;
          } else {
              cout << "Invalid input. Please enter 'y', 'h', or 'l'." << endl;
              continue; // Skip the increment of attempts for invalid input
          }

          attempts++;
      }

      if (attempts == 7) {
          cout << "I couldn't guess your number within 7 attempts." << endl;
      }

      return 0;
  }
