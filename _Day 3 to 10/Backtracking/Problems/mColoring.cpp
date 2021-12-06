#include<bits/stdc++.h>
using namespace std;

#define V 4

void printSolution(int color[]);

bool isSafe(bool graph[V][V], int color[])
{
	// check for every edge
	for (int i = 0; i < V; i++)
		for (int j = i + 1; j < V; j++)
			if (graph[i][j] && color[j] == color[i])
				return false;
	return true;
}

bool graphColoring(bool graph[V][V], int m, int i,
				int color[V])
{
	// if current index reached end
	if (i == V) {
		
		// if coloring is safe
		if (isSafe(graph, color)) {
			
			// Print the solution
			printSolution(color);
			return true;
		}
		return false;
	}

	// Assign each color from 1 to m
	for (int j = 1; j <= m; j++) {
		color[i] = j;

		// Recur of the rest vertices
		if (graphColoring(graph, m, i + 1, color))
			return true;

		color[i] = 0;
	}

	return false;
}

void printSolution(int color[])
{
	cout << "Solution Exists:" " Following are the assigned colors \n";
	for (int i = 0; i < V; i++)
		cout << " " << color[i];
	cout << "\n";
}

// Driver code
int main()
{
	bool graph[V][V] = {
		{ 0, 1, 1, 1 },
		{ 1, 0, 1, 0 },
		{ 1, 1, 0, 1 },
		{ 1, 0, 1, 0 },
	};
	int m = 3; // Number of colors

	int color[V];
	for (int i = 0; i < V; i++)
		color[i] = 0;

	if (!graphColoring(graph, m, 0, color))
		cout << "Solution does not exist";

	return 0;
}

