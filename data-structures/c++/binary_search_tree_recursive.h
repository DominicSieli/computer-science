#ifndef BINARY_SEARCH_TREE_RECURSIVE
#define BINARY_SEARCH_TREE_RECURSIVE

#include <queue>
#include <vector>

namespace DataStructures
{
	template<typename T>
		class BinarySearchTreeRecursive
		{
			private:
				struct Node
				{
					T data {};
					Node* left = nullptr;
					Node* right = nullptr;

					Node(const T& data) : data{data}
					{}
				};

				Node* root = nullptr;

			public:
				BinarySearchTreeRecursive()
				{}

				~BinarySearchTreeRecursive()
				{}

				T Min()
				{
					return Min(root)->data;
				}

				T Max()
				{
					return Max(root)->data;
				}

				void Clear()
				{
					Clear(root);
					root = nullptr;
				}

				bool Empty()
				{
					return !(bool)root;
				}

				bool Contains(const T& data)
				{
					return (bool)NodePointer(root, data);
				}

				void Insert(const T& data)
				{
					Insert(root, data);
				}

				void Delete(const T& data)
				{
					Node* node = NodePointer(root, data);
					Node* successor = Successor(NodePointer(root, data));
					Node* parent = (node != root) ? ParentPointer(root, data) : nullptr;
					Node* successor_parent = (successor != nullptr) ? ParentPointer(root, successor->data) : nullptr;

					if(parent != nullptr && node == parent->left) parent->left = successor;
					if(parent != nullptr && node == parent->right) parent->right = successor;
					if(successor_parent != nullptr && successor_parent->left == successor) successor_parent->left = nullptr;
					if(successor_parent != nullptr && successor_parent->right == successor) successor_parent->right = nullptr;
					if(node->left != nullptr && node->left != successor && successor->left == nullptr) successor->left = node->left;
					if(node->right != nullptr && node->right != successor && successor->right == nullptr) successor->right = node->right;
					if(node == root) root = successor;

					delete node;
				}

				std::vector<T> DepthFirstSearchInOrder()
				{
					std::vector<T> vector;
					if(Empty() == false) TraverseInOrder(root, vector);

					return vector;
				}

				std::vector<T> DepthFirstSearchPreOrder()
				{
					std::vector<T> vector;
					if(Empty() == false) TraversePreOrder(root, vector);

					return vector;
				}

				std::vector<T> DepthFirstSearchPostOrder()
				{
					std::vector<T> vector;
					if(Empty() == false) TraversePostOrder(root, vector);

					return vector;
				}

				std::vector<T> BreadthFirstSearch()
				{
					Node* node = root;
					std::vector<T> vector;
					if(Empty() == true) return vector;
					std::queue<Node*> queue;
					queue.push(node);

					while(queue.size() > 0)
					{
						node = queue.front();
						queue.pop();
						vector.push_back(node->data);

						if(node->left != nullptr) queue.push(node->left);
						if(node->right != nullptr) queue.push(node->right);
					}

					return vector;
				}

			private:
				Node* Min(Node* node)
				{
					return (node->left != nullptr) ? Min(node->left) : node;
				}

				Node* Max(Node* node)
				{
					return (node->right != nullptr) ? Max(node->right) : node;
				}

				void Clear(Node* node)
				{
					if(node == nullptr) return;
					if(node->left != nullptr) Clear(node->left);
					if(node->right != nullptr) Clear(node->right);

					delete node;
				}

				Node* NodePointer(Node* node, const T& data)
				{
					if(node == nullptr) return nullptr;
					if(data == node->data) return node;
					if(data < node->data) return NodePointer(node->left, data);
					if(data > node->data) return NodePointer(node->right, data);

					return nullptr;
				}

				Node* ParentPointer(Node* node, const T& data)
				{
					if(node == nullptr) return nullptr;
					if(node->left != nullptr && data == node->left->data) return node;
					if(node->right != nullptr && data == node->right->data) return node;
					if(node->left != nullptr && data < node->data) return ParentPointer(node->left, data);
					if(node->right != nullptr && data > node->data) return ParentPointer(node->right, data);

					return nullptr;
				}

				void Insert(Node* node, const T& data)
				{
					if(root == nullptr) {root = new Node(data); return;}
					if(node->left != nullptr && data < node->data) Insert(node->left, data);
					if(node->right != nullptr && data > node->data) Insert(node->right, data);
					if(node->left == nullptr && data < node->data) {node->left = new Node(data); return;}
					if(node->right == nullptr && data > node->data) {node->right = new Node(data); return;}
				}

				Node* Successor(Node* node)
				{
					if(node == nullptr) return nullptr;
					if(node->left == nullptr && node->right == nullptr) return nullptr;
					if(node->left != nullptr && node->right == nullptr) return node->left;
					if(node->left == nullptr && node->right != nullptr) return node->right;
					if(node->left != nullptr && node->right != nullptr) return Min(node->right);

					return nullptr;
				}

				void TraversePreOrder(Node* node, std::vector<T>& vector)
				{
					vector.push_back(node->data);

					if(node->left != nullptr) TraversePreOrder(node->left, vector);
					if(node->right != nullptr) TraversePreOrder(node->right, vector);
				}

				void TraverseInOrder(Node* node, std::vector<T>& vector)
				{
					if(node->left != nullptr) TraverseInOrder(node->left, vector);

					vector.push_back(node->data);

					if(node->right != nullptr) TraverseInOrder(node->right, vector);
				}

				void TraversePostOrder(Node* node, std::vector<T>& vector)
				{
					if(node->left != nullptr) TraversePostOrder(node->left, vector);
					if(node->right != nullptr) TraversePostOrder(node->right, vector);

					vector.push_back(node->data);
				}
		};
}

#endif