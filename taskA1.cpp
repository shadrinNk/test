#include <iostream>
#include <map>

int main()
{
    std::map<int, bool> arr;

    int n = 0;
    int x;

    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> x;
        arr[x] = true;
    }

    std::cout << "\n\n" << arr.size();

    system("pause");
    return 0;
}
