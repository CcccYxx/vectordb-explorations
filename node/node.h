#ifndef NODE_H_
#define NODE_H_

#include <vector>
#include <queue>
#include <memory>

template <typename T>
class Node {
 public:
  Node(const std::vector<T>& payload);
  inline std::vector<T>& GetPayload() {return payload_;}
  inline std::vector<std::shared_ptr<Node<T>>>& GetNeighbors() {return neighbors_;}
  inline std::shared_ptr<Node<T>> GetNextLayerSelf() {return next_layer_self_;}
  T GetL2Distance(std::shared_ptr<Node<T>> other); // do not sqrt the result to save compute cost
  void AddNeighbor(std::shared_ptr<Node<T>> neighbor);
  inline void SetNextLayerSelf(std::shared_ptr<Node<T>> next_layer_self ) {next_layer_self_ = next_layer_self;}
 private:
  std::vector<T> payload_;
  std::shared_ptr<Node<T>> next_layer_self_;
  std::vector<std::shared_ptr<Node<T>>> neighbors_;
};

#endif  // NODE_H_
