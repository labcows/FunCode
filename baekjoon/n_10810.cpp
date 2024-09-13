#include <iostream>

int main(){
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    int32_t array[101]= {};
    int32_t N, M, start_idx, end_idx, number;
    std::cin >> N >> M;

    for (int32_t i = 0; i < M; ++i){

        std::cin >> start_idx >> end_idx >> number;
        for (int32_t j = start_idx; j <= end_idx; ++j){
            array[j] = number;
        }
    }

    for (int32_t j = 1; j <= N; ++j){
        std::cout << array[j] << " ";
    }

    return 0;
}