#include <iostream>
int main()
{
    string FirstName, LastName, FullName, FavoriteMeal, FavoriteMovie;
    cout << "Your First Name: ";
    cin >> FirstName;
    cout << "Your Last Name: ";
    cin >> LastName;
    FullName = FirstName + ' ' + LastName;
    cout << "Your Full Name: " << FullName << "\n";
    getline(cin, FullName);
    cout << "Your Favorite Meal: ";
    getline(cin, FavoriteMeal);
    cout << "Your Favorite Movie: ";
    getline(cin, FavoriteMovie);
}
