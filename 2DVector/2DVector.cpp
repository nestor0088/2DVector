#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> sales;
    vector<int>temp;
    //
    temp.push_back(12);
    temp.push_back(15);
    temp.push_back(17);
    sales.push_back(temp);
    temp.clear();
    //
    temp.push_back(22);
    temp.push_back(25);
    temp.push_back(27);
    sales.push_back(temp);
    int a = sales.size();
    int b = sales[1].size();
    cout << "rows --> " << a << endl;
    cout << "columns --> " << b << endl;
    for (int r = 0; r < sales.size(); r++)
    {
        for (int c = 0; c < sales[0].size(); c++)
        {
            cout << sales[r][c] << "\t";
        }
        cout << endl;
    }
}

