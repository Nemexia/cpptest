#include<iostream>
#include<vector>
#include<memory>

using namespace std;

static void dd(vector<unique_ptr<int>> &c, unique_ptr<int> v)
{
    c.push_back(move(v));
}

int main()
{
    vector<unique_ptr<int>> cache{};
    unique_ptr<int> a = make_unique<int>(12);
    dd(cache, move(a));
    if (!a) cout << "Empty!\n";
    return 0;
}