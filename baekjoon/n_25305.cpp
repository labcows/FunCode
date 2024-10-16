#include <iostream>
#include <vector>

void insertion_sort(std::vector<int16_t>& arr)
{
    for (size_t i = 1; i < arr.size(); ++i)
    {
        size_t key = arr[i];
        size_t index = i;

        while(index > 0 && arr[index - 1] < key)
        {
            arr[index] = arr[index - 1];
            --index;
        }
        arr[index] = key;
    }
    return;
}

int main(void)
{
    int16_t N, k, x;
    std::cin >> N >> k;

    std::vector<int16_t> v;
    while (N--)
    {
        std::cin >> x;
        v.push_back(x);
    }

    insertion_sort(v);

    std::cout << v[k - 1];
    return 0;
}