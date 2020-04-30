#include <iostream>

using namespace std;

void f1(int* mass, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> mass[i];
    }

}
int main()
{
    int n;
    cout << "Razmer Massiva" << endl;
    cin >> n;
    int* mass = new int[n];
    f1(mass, n);
    int maxcount(1), nn(-1);

    for (int i = 0; i < n; i++)
    {
        int count(0);

        for (int j = i; j < n; j++)

            if (mass[i] == mass[j])
                count++;
        //if(maxcount == count)   //На случай если 2 максимально повтор элемента или более 
            //cout<<mass[i];

        if (maxcount < count)
        {
            maxcount = count;
            nn = i;
        }
    }


    if (nn > -1)

        cout << endl << mass[nn] << endl;
    else

        cout << endl << "Netu!" << endl;
    delete[] mass;
    return 0;
}
