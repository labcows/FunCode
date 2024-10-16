#include <iostream>
#include <vector>

void insertion_sort(std::vector<int16_t>& arr)
{
    for (size_t i = 1; i < arr.size(); ++i)
    {
        int16_t key = arr[i];
        size_t j = i;

        while (j > 0 && arr[j - 1] < key)
        {
            arr[j] = arr[j - 1];
            --j;
        }
        arr[j] = key;
    }
}

int main(void)
{
    std::vector<int16_t> v;
    int16_t num, sum(0);
    for (int16_t i = 0; i < 5; ++i)
    {
        std::cin >> num;
        sum += num;
        v.push_back(num);
    }

    insertion_sort(v);

    std::cout << sum / 5 << std::endl;
    std::cout << v[2] << std::endl;

    return 0;
}