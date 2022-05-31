#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include<iomanip>
#include <iostream>
#include <cctype>
#include <cstdio>
#include <stack>
#include <string>
using namespace std;

struct military
{
    char name[25], surname[25], otch[25], ind[10], land[20], obl[30], ray[30], gor[30], ul[30], nazi[25], dolz[30], zvanie[40];
};
int line_count()
{
    char smb;
    int count = 0;
    ifstream outfile("D:\\sites\\Personal.txt"); 
    if (!outfile)
    {
        cerr << "\nFile missing!!" << endl;
    }
    while (outfile.get(smb)) 
    {
        if (smb == '\n')
        {
            count++;
        }
    }
    cout << count << "\n";
    outfile.close();
    return count / 12;
}
void search(char src[25], military* arr, int size)
{
    ofstream infile("D:\\sites\\Personal3.txt", ios::app);
    if (!infile)
    {
        cerr << "Infile open error!" << endl;
    }
    for (int i = 0; i < size; i++)
    {
        if (strcmp(src, arr[i].zvanie) == 0)
        {
            infile << arr[i].name << endl;
            infile << arr[i].surname << endl;
            infile << arr[i].otch << endl;
            infile << arr[i].ind << endl;
            infile << arr[i].land << endl;
            infile << arr[i].obl << endl;
            infile << arr[i].ray << endl;
            infile << arr[i].gor << endl;
            infile << arr[i].ul << endl;
            infile << arr[i].nazi << endl;
            infile << arr[i].dolz << endl;
            infile << arr[i].zvanie << endl;

        }
        cout << arr[i].name << endl;
        cout << arr[i].surname << endl;
        cout << arr[i].otch << endl;
        cout << arr[i].ind << endl;
        cout << arr[i].land << endl;
        cout << arr[i].obl << endl;
        cout << arr[i].ray << endl;
        cout << arr[i].gor << endl;
        cout << arr[i].ul << endl;
        cout << arr[i].nazi << endl;
        cout << arr[i].dolz << endl;
        cout << arr[i].zvanie << endl;

    }

}
int main()
{
    int n;
    char src[25];
    military* personal;
    n = line_count();
    personal = new military[n];
    ifstream outfile("D:\\sites\\Personal.txt", ios::out);
    if (!outfile)
        cerr << "Output file opening error!" << endl;
    for (int i = 0; i < n; i++)
    {
        outfile >> personal[i].name;
        outfile >> personal[i].surname;
        outfile >> personal[i].otch;
        outfile >> personal[i].ind;
        outfile >> personal[i].land;
        outfile >> personal[i].obl;
        outfile >> personal[i].ray;
        outfile >> personal[i].gor;
        outfile >> personal[i].ul;
        outfile >> personal[i].nazi;
        outfile >> personal[i].dolz;
        outfile >> personal[i].zvanie;
        cout << personal[i].name << endl;
        cout << personal[i].surname << endl;
        cout << personal[i].otch << endl;
        cout << personal[i].ind << endl;
        cout << personal[i].land << endl;
        cout << personal[i].obl << endl;
        cout << personal[i].ray << endl;
        cout << personal[i].gor << endl;
        cout << personal[i].ul << endl;
        cout << personal[i].nazi << endl;
        cout << personal[i].dolz << endl;
        cout << personal[i].zvanie << endl;
    }
    outfile.close();
    cout << "Enter the position of the person you are looking for:" << endl;

    cin.getline(src, 25);
    search(src, personal, n);
    system("pause");
    return 0;
}