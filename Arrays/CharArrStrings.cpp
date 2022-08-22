#include<bits/stdc++.h>
using namespace std;
using std::cout;
int main(){
    char arr[20] = "This is char array";
    string mystring = "This is string\n";


    cout << endl
         << arr;
    cout << endl
         << mystring;

    cout << endl
         << mystring.capacity();

    cout << endl
         << "Enter both arr and str by enter: " << endl;

    cin.getline(arr, 20);
    getline(cin, mystring);

    cout << endl
         << arr;
    cout << endl
         << mystring;

    int i = 0;
    while(arr[i]!='\0'){
        i++;
    }

    cout << endl
         << "Count of arr is " << i;

    cout << endl
         << "Count of Str is " << mystring.length();

    printf("\n%c", mystring.front());
    cout << endl
         << mystring.capacity();
    printf("\n%c", mystring.at(3));
    printf("\n%c", mystring.back());
    cout << endl
         << mystring.capacity();
    cout << endl
         << strcmp("ye hai nyi array", arr);
    cout << endl
         << strlen(arr);

    return 0;
}