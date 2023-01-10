#include <iostream>
#include <vector>

// Multiply two large numbers represented as vectors of digits.
// The digits are stored in reverse order (i.e., the least significant
// digit is at the front of the vector).
std::vector<int> multiply(const std::vector<int>& a, const std::vector<int>& b) {
  // Result will have length a.size() + b.size()
  std::vector<int> result(a.size() + b.size(), 0);

  for (size_t i = 0; i < a.size(); ++i) {
    for (size_t j = 0; j < b.size(); ++j) {
      result[i + j] += a[i] * b[j];
      result[i + j + 1] += result[i + j] / 10;
      result[i + j] %= 10;
    }
  }

  // Remove leading zeros
  while (result.size() > 1 && result.back() == 0) {
    result.pop_back();
  }

  return result;
}

int main() {
  // Multiply 12345 and 67890
  std::vector<int> a = {5, 4, 3, 2, 1};
  std::vector<int> b = {0, 9, 8, 7, 6};
  std::vector<int> c = multiply(a, b);

  // Print 838102050
  for (int x : c) {
    std::cout << x;
  }
  std::cout << std::endl;

  return 0;
}
