#include <iostream>
#include <string>

using namespace std;

void print(string * pointer_to_string)
{
    cout << pointer_to_string << " = " << *pointer_to_string << endl;
}

int main()
{
    string message = "Hello world!";
    string * message_pointer;
    message_pointer = &message;

    print(message_pointer);

    return 0;
}
