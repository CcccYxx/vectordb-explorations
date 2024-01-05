#include "node.h"
#include <cmath>
#include <memory>

template <typename T>
Node<T>::Node(const std::vector<T>& payload)
    : next_layer_self_(nullptr), payload_(payload) {}

template <typename T> T Node<T>::GetL2Distance(std::shared_ptr<Node<T>> other) {
  std::vector<T> other_payload = other->GetPayload();
  T result = 0;
  for (size_t i = 0; i < payload_.size(); i++) {
    T self_element = payload_[i];
    T other_element = other_payload[i];
    result += pow(self_element - other_element, 2);
  }
  // No sqrt to save computation cost
  return result;
}

template <typename T>
void Node<T>::AddNeighbor(std::shared_ptr<Node<T>> neighbor) {
  neighbors_.push_back(neighbor);
}

// Explicit template instantiation
template class Node<int>;
template class Node<float>;
template class Node<double>;
