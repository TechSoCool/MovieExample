
//================= Movie Example ========================
//========= Pre processor Directive Include Files ========
#include <iostream>
#include <string>
using namespace std;
#define MaxArray 3


//=============== Structure Definitions =================
struct Movie
{
    string name[MaxArray];
    int Year;
    int Time;
    float Stars;
};

//===================== Movie Function ===================
void Initialize(Movie DVD[MaxArray])

{
    for (int i = 0; i < MaxArray; i++) {

        cout << endl << "Enter the title of the movie" << endl;
        cin.ignore();//this will skip new line character left in the input buffer
        getline(cin,DVD[i].name);
        cout << endl << "Enter the year the movie was made" << endl;
        cin >> DVD1.Year;
        cout << endl << "Enter the running time of the movie" << endl;
        cin >> DVD1.Time;
        cout << endl << "Enter the number of stars of the movie" << endl;
        cin >> DVD1.Stars;

    }
}

//======== Display Movie Function =================================

void Display(Movie DVD1, Movie DVD2)

{
    cout << "The Movie " << DVD1.name

        << " was made in " << DVD1.Year << " ,runs " << DVD1.Time

        << " minutes in length and received " << DVD1.Stars << " stars" << endl;

}

void Compare(Movie DVD1, Movie DVD2)

{
    if (DVD1.Stars > DVD2.Stars)

    {
        Display(DVD1);

        cout << " and is the better Movie" << endl;

    }

    else if (DVD2.Stars > DVD1.Stars)

    {
        Display(DVD2);

        cout << " and is the better Movie" << endl;

    }

    else

    {
        Display(DVD1);

        Display(DVD2);

        cout << "are both rated the same" << endl;

    }

}

//===================== Main Program (Driver) ======================
//=====Notice main , smallest possible , just call to functions ====

void main()

{
    Movie DVD1, DVD2;

    Initialize(DVD1);

    Initialize(DVD1);

    Compare(DVD1, DVD2);

    system("pause");
    return 0;

}
