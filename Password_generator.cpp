#include <iostream>
#include <cstdlib> // Will use it to create random function
#include <ctime> // Use it for the time function


using namespace std;

int main(){
    const char characters[] = {'@', '#', '$', '1', '2', '3', 'a', 'b', 'c', 'd', 'e', 'f', 'g', '4', 's', 't', 'u', 'v',
                               'w', '5', '6', '7', '8', '9', '0', '!','%', '^', '&', '*', '=', '?', 'h', 'i',
                               'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r','x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F',
                               'G', 'H', 'I','J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R','S', 'T', 'U', 'V', 'W', 'X',
                               'Y', 'Z'};

    int lengthOfCharacters = sizeof(characters) - 1;
    int lengthOfPassword;


    while(true){
        cout << "Enter the length you want the password to be or Enter \"0\" to quit program: " << endl;

        cin >> lengthOfPassword;


        if(lengthOfPassword >= 8){
            cout << "The length of password you want is " << lengthOfPassword<< endl;
            cout << endl;
            srand(time(nullptr)); // Uses the current time of the computer as the seed

            cout << "Generated Password: ";

            for(int i = 0; i < lengthOfPassword; i++){
                cout << characters[rand() % lengthOfCharacters];

            }
            cout << endl;
        }
        else if( lengthOfPassword == 0)
            break;
        else{
            cout << "The length of your password is too short. The minimum length is 8." << endl;
        }
    }

    return 0;
}
