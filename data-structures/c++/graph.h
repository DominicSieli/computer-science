#ifndef GRAPH
#define GRAPH

#include <vector>
#include <iostream>
#include <unordered_map>
#include <initializer_list>

namespace DataStructures
{
	template<typename T>
		class Graph
		{
			private:
				std::unordered_map<T, std::vector<T>> nodes;

			public:
				Graph()
				{}

				Graph(const std::initializer_list<T>& list)
				{
					for(const T& node : list) AddNode(node);
				}

				~Graph()
				{}

				void AddNode(const T& node)
				{
					nodes.emplace(node, std::vector<T>());
				}

				void DeleteNode(const T& node)
				{
					for(auto& n : nodes)
					{
						for(unsigned int i = 0; i < n.second.size(); i++)
						{
							if(n.second[i] == node) n.second.erase(n.second.begin() + i);
						}
					}

					nodes.erase(node);
				}

				void AddOneDirectionalEdge(const T& node_1, const T& node_2)
				{
					AddNode(node_1);
					AddNode(node_2);
					nodes.at(node_1).push_back(node_2);
				}

				void AddTwoDirectionalEdge(const T& node_1, const T& node_2)
				{
					AddNode(node_1);
					AddNode(node_2);
					nodes.at(node_1).push_back(node_2);
					nodes.at(node_2).push_back(node_1);
				}

				void DeleteOneDirectionalEdge(const T& node_1, const T& node_2)
				{
					for(unsigned int i = 0; i < nodes.at(node_1).size(); i++)
					{
						if(nodes.at(node_1)[i] == node_2) nodes.at(node_1).erase(nodes.at(node_1).begin() + i);
					}
				}

				void DeleteTwoDirectionalEdge(const T& node_1, const T& node_2)
				{
					for(unsigned int i = 0; i < nodes.at(node_1).size(); i++)
					{
						if(nodes.at(node_1)[i] == node_2) nodes.at(node_1).erase(nodes.at(node_1).begin() + i);
					}

					for(unsigned int i = 0; i < nodes.at(node_2).size(); i++)
					{
						if(nodes.at(node_2)[i] == node_1) nodes.at(node_2).erase(nodes.at(node_2).begin() + i);
					}
				}

				void Print()
				{
					for(const auto& node : nodes)
					{
						std::cout << node.first << ": [";

						for(const auto& n : node.second)
						{
							std::cout << n << ",";
						}

						if(node.second.size() > 0) std::cout << "\b";
						std::cout << "]\n";
					}
				}
		};
}

#endif