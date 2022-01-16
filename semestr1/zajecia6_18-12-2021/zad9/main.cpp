#include <iostream>
#include <vector>

using namespace std;

struct student
{
    string imie;
    string nazwisko;
    vector<int> oceny;
    float srednia;
};

float average_of(student stud)
{
    float suma = 0, srednia = 0;

    for (int i = 0; i < stud.oceny.size(); i++)
    {
        suma = suma + stud.oceny.at(i);
    }

    srednia = suma / stud.oceny.size();

    return srednia;
}

student get_best_student(vector<student> studs)
{
    struct student best;

    /* Studenci w wektorze:
        studs.at(0) - stud1
        studs.at(1) - stud2
        studs.at(2) - stud3 */

    if (studs.at(0).srednia > studs.at(1).srednia)
    {
        best = studs.at(0);
    }
    if (studs.at(1).srednia > studs.at(0).srednia)
    {
        best = studs.at(1);
    }
    if (studs.at(2).srednia > best.srednia)
    {
        best = studs.at(2);
    }

    cout << "Zwracany student o najwyzszej sredniej:" << endl;
    cout << endl;
    cout << " Imie: " << best.imie << endl;
    cout << " Nazwisko: " << best.nazwisko << endl;
    cout << " Oceny: ";
    for (int i = 0; i < best.oceny.size(); i++)
    {
        cout << best.oceny.at(i) << " ";
    }
    cout << endl;
    cout << " Srednia: " << best.srednia << endl;

    return best;
}

int main()
{
    struct student stud1;
        stud1.imie = "Jan";
        stud1.nazwisko = "Kowalski";
        stud1.oceny = {5,2,5,3,3};

        stud1.srednia = average_of(stud1);

    struct student stud2;
        stud2.imie = "Adam";
        stud2.nazwisko = "Malinowski";
        stud2.oceny = {4,5,3,3,5};

        stud2.srednia = average_of(stud2);

    struct student stud3;
        stud3.imie = "Jakub";
        stud3.nazwisko = "Nowak";
        stud3.oceny = {2,5,4,3,5};

        stud3.srednia = average_of(stud3);

    // Wyswietlenie sredniej poszczegolnych studentow

    cout << "srednia stud1 (" << stud1.imie << " " << stud1.nazwisko << "): " << average_of(stud1) << endl;
    cout << "srednia stud2 (" << stud2.imie << " " << stud2.nazwisko << "): " << average_of(stud2) << endl;
    cout << "srednia stud3 (" << stud3.imie << " " << stud3.nazwisko << "): " << average_of(stud3) << endl;
    cout << endl;

    vector<student> studenci = {stud1, stud2, stud3};
    get_best_student(studenci);

    return 0;
}
