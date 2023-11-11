struct Node {
  int vertex; 
  int distance; 
};

class Graph {
public:
    vector<vector<pair<int,int>>> g;
    int dik(int start, int end) {
        int n = g.size();
        vector<int> distances(n, INT_MAX);
        distances[start] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> priorityQueue;
        priorityQueue.push({0, start});

        while (!priorityQueue.empty()) {
            int currentNode = priorityQueue.top().second;
            int currentCost = priorityQueue.top().first;
            priorityQueue.pop();

            if (currentCost > distances[currentNode])
                continue;

            if(currentNode == end)
                return currentCost ;

            for (auto edge : g[currentNode]) {
                int neighbor = edge.first, edgeLength = edge.second;
                int newRouteCost = edgeLength + distances[currentNode];

                if (distances[neighbor] > newRouteCost) {
                    distances[neighbor] = newRouteCost;
                    priorityQueue.push({newRouteCost, neighbor});
                }
            }
        }
        return ((distances[end] == INT_MAX) ? -1 : distances[end]);
    }
    Graph(int n, vector<vector<int>>& edges) {
        g.resize(101);
        for(auto i:edges) g[i[0]].push_back({i[1],i[2]});
    }
    
    void addEdge(vector<int> edge) {
        g[edge[0]].push_back({edge[1],edge[2]});
    }
    
    int shortestPath(int node1, int node2) {
        return dik(node1,node2);
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */