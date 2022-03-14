#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy
#include <cmath>

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    return (left-right)*(left-right);
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if(mask < 0 || bit_pos < 0){
      return false;
    }
    if( ((mask ^ int(pow(2, bit_pos))) ) == mask - int(pow(2, bit_pos)) ){
      return true;
    }
    return false;

    /*if ( (1 << bit_pos) & mask ){
      return true;
    }*/
  }

  // Task 3
  int max3(int left, int middle, int right) {
    if(left < middle){
        left = middle;
    }
    if(right > left){
      return right;
    }

    return left;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if(left != nullptr && right != nullptr){
      int value = *left;
      *left = *right;
      *right = value;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if(arr == nullptr || length <= 0){
      return 0;
    }
    int summ = 0;
    for (int i = 0; i < length; ++i) {
      summ += arr[i];
    }
    return summ;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if(arr == nullptr || length <= 0){
      return nullptr;
    }
    int a = -9999;
    int* max = &a;
    for (int i = 0; i < length; ++i) {
      if(arr[i] > *max){
        max = &arr[i];
      }
    }
    return max;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if(length <= 0){
      return nullptr;
    }

    int* arr;
    arr = new int[length];

    std::fill(&arr[0], arr + length, init_value);
    return arr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (arr_in == nullptr || length <= 0){
      return nullptr;
    }

    int* arr;
    arr = new int[length];

    std::copy(arr_in, arr_in + length, arr);
    return arr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr){
      os << "Invalid argument: arr\n";
    }
    if (length <= 0){
      os << "Invalid argument: length\n";
    }
    if(k <= 0){
      os << "Invalid argument: k\n";
    }
    if( arr != nullptr && length > 0 && k > 0){
      for (int i = 0; i < length; i = i + k) {
        os << arr[i] << "\t";
      }
    }
  }

}  // namespace assignment
