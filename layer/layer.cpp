#include "layer.h"
#include <vector>

template <typename T>
Layer<T>::Layer(size_t max_connection, size_t ef_construction)
    : max_connection_(max_connection),
      ef_construction_(ef_construction), next_layer_(nullptr) {}

template <typename T>
std::vector<std::shared_ptr<Node<T>>>
Layer<T>::FindNN(const Node<T> &target,
                 const std::vector<std::shared_ptr<Node<T>>> &entry_nodes) {
  std::vector<std::shared_ptr<Node<T>>> nearest_neighbors;

  // Implementation of the nearest neighbor search.
  // This is where you'll need to add the logic to find the nearest neighbors
  // based on your specific requirements and algorithm.

  return nearest_neighbors;
}

template <typename T>
void Layer<T>::InsertNode(const std::vector<T> &vec,
                  const std::vector<std::shared_ptr<Node<T>>> &entry_nodes) {
}

// Explicit template instantiation
template class Layer<int>;
template class Layer<float>;
template class Layer<double>;
