#include <iostream>
#include <vector>

void bubble_sort(std::vector<int16_t>& arr)
{
    int16_t tmp;
    for(size_t i = 0; i < arr.size() - 1; ++i)
        for(size_t j = i + 1; j < arr.size(); ++j)
        {
            if(arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    return;
}

void selection_sort(std::vector<int16_t>& arr)
{
    int16_t min_number, min_idx, tmp;
    for(size_t i = 0; i < arr.size() - 1; ++i)
    {
        min_number = arr[i];
        min_idx = i;
        for(size_t j = i + 1; j < arr.size(); ++j)
        {
            if(arr[j] < min_number)
            {
                min_number = arr[j];
                min_idx = j;
            }
        }
        tmp = arr[i];
        arr[i] = min_number;
        arr[min_idx] = tmp;
    }
    return;
}

int main(void)
{
    std::vector<int16_t> v;
    int16_t N;
    std::cin >> N;

    int16_t num;
    while(N--)
    {
        std::cin >> num;
        v.push_back(num);
    }

    selection_sort(v);

    for(int16_t n : v)
        std::cout << n << std::endl;

    return 0;
}