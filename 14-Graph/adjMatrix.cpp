#include <iostream>
using namespace std;

// if there is an edge then true else false
bool adjMatrix[10][10];

// function to initialize the adjacency matrix as false
// initially there is no node
void init()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            adjMatrix[i][j] = false;
        }
    }
}

// function to know if there is an edge between two nodes
bool isEdge(int startNode, int endNode)
{
    if (adjMatrix[startNode][endNode])
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int startNode, endNode, numOfNodes, numOfEdges;
    // since there is no node
    init();

    // take input as number of nodes
    cout << "Enter Total Num of Edges\n";
    cin >> numOfNodes;

    // take input as number of Edges
    cout << "Enter Total Num of Edges\n";
    cin >> numOfEdges;

    // Now Mark start Node and End Node In Adjacency Matrix
    for (int i = 0; i < numOfEdges; i++)
    {
        cout << "Please Enter " << i + 1 << "th edge\n";
        cout << "Enter Start Node: ";
        cin >> startNode;
        cout << "Enter End Node: ";
        cin >> endNode;
        adjMatrix[startNode][endNode] = true;
    }

    cout << "\n"
         << isEdge(3, 4) << "\n";
}