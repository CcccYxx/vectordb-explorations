#ifndef LAYER_H_
#define LAYER_H_

#include "../node/node.h" // Assuming Node class is defined in Node.h
#include <memory>
#include <vector>

template <typename T> class Layer {
public:
  Layer(size_t max_connection = 4, size_t ef_construction = 12);
  void InsertNode(const std::vector<T> &vec,
                  const std::vector<std::shared_ptr<Node<T>>> &entry_nodes);
  // Find nearest neighbors
  std::vector<std::shared_ptr<Node<T>>>
  FindNN(const Node<T> &target,
         const std::vector<std::shared_ptr<Node<T>>> &entry_nodes);

private:
  size_t max_connection_;
  size_t ef_construction_;
  std::shared_ptr<Layer<T>> next_layer_;
  std::vector<std::shared_ptr<Node<T>>> nodes_;
};

#endif // LAYER_H_
