#include <iostream>
#include <vector>


int find_min_index(const std::vector<int> &input,int start){
    int current_min = INT32_MAX;
    int current_min_index = 0;
    for (int i = start;i<input.size();i++){
        if (input[i] < current_min){
            current_min = input[i];
            current_min_index = i;
        }
    }
    return current_min_index;
}

void swap(int i, int j, std::vector<int> &input){
    int temp_1 = input[i];
    int temp_2 = input[j];

    input[j] = temp_1;
    input[i] = temp_2;
}

void selection_sort(std::vector<int> &input){
    std::vector<int> temp(input.size());

    for (int i = 0; i < input.size();i++){
        int min_index = find_min_index(input,i);

        swap(i,min_index,input);
    }

    
}


int main(){
    std::vector<int> test = {10,9,8,7,6,5,4,3,2,1};
    for (auto&& i:test){
        std::cout << i << "\n";
    }
    selection_sort(test);


    std::cout << "\n";
   for (auto&& i:test){
        std::cout << i << "\n";
    }


  // std::cout << find_min(test,0); 


}