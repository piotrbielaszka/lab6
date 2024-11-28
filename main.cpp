#include <algorithm>
#include "rand.hpp"
#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

constexpr auto print_vector = [](const auto &vec)
{
    for (const auto &el : vec)
        cout << el << ' ';
    cout << '\n';
};

class porownywacz
{
    int wartosc_graniczna;

public:
    porownywacz(int a) : wartosc_graniczna(a) {}
    bool operator()(int x)
    {
        return x > wartosc_graniczna;
    }
};

int main()
{
    /// zad 1-3
    //     vector<int> vi = makeRandomVector<int>(10, 0, 10);
    //     print_vector(vi);
    //     sort(vi.begin(), vi.end(), [](int a, int b)
    //          { return a > b; });
    //     print_vector(vi);
    //     cout << count(vi.begin(), vi.end(), 7);

    /// zad 4
    //     vector<double> vd = makeRandomVector<double>(10, 0., 10.);
    //     print_vector(vd);
    //     cout << count_if(vd.begin(), vd.end(), [](double a)
    //                      { return a > 7; });

    /// zad 6
    // vector<int> vi = makeRandomVector<int>(10, 0, 10);
    // sort(vi.begin(), vi.end());
    // print_vector(vi);
    // cout << "Wpisz liczbe od ktorej ma byc wieksza wartosc elementu: ";
    // int min_a;
    // cin >> min_a;
    // cout << count_if(vi.begin(), vi.end(), porownywacz(min_a));

    /// zad 7
    // vector<int> vi = makeRandomVector<int>(10, 0, 10);
    // sort(vi.begin(), vi.end());
    // print_vector(vi);
    // cout << "Wpisz liczbe od ktorej ma byc wieksza wartosc elementu: ";
    // int min_a;
    // cin >> min_a;
    // cout << count_if(vi.begin(), vi.end(), [&min_a](int x)
    //                  { return x > min_a; });

    /// Cwiczenie 1
    // string a;
    // cin >> a;
    // cout << ((adjacent_find(a.begin(), a.end()) == a.end()) ? "znaki sie nie powtarzaja\n" : "znaki sie powtarzaja\n");

    /// Cwiczenie 2
    // string piesek = "piesek";
    // string kotek = "kotek";
    // cout << ((search(a.begin(), a.end(), piesek.begin(), piesek.end()) != a.end()) ? "Jest piesek\n" : "Piesek uciekl\n");
    // cout << ((search(a.begin(), a.end(), kotek.begin(), kotek.end()) != a.end()) ? "Jest kotek\n" : "Kotek uciekl\n");

    /// Cwiczenie 3
    // reverse(a.begin(), a.end());
    // cout << a << "\n";

    /// Cwiczenie 4
    // vector<double> a = makeRandomVector<double>(10, 0, 10);
    // vector<double> b = makeRandomVector<double>(10, 0, 10);
    // cout << inner_product(a.begin(), a.end(), b.begin(), 0.);

    /// Cwiczenie 5
    // vector<int> a = makeRandomVector<int>(10, 0, 10);
    // print_vector(a);
    // auto a_end = find(a.begin(), a.end(), 7);
    // sort(a.begin(), a_end);
    // print_vector(a);

    /// Cwiczenie 6
    vector<int> a = makeRandomVector<int>(10, 1, 4);
    print_vector(a);
    a.erase(remove(a.begin(), a.end(), 3),a.end());
    print_vector(a);
}
