#include <vector>
#include "maximumST.h"

using namespace std;

/*
Name: maximumST (adaptation of Exercise 9.3.5)
Input: n×n vector (representing the adjacency matrix of a graph)
Output: value of the maximum spanning tree of the graph defined by the n×n vector
*/
double maximumST(vector<vector<double> > adjacencyMatrix) {
	double maxST = 0.0;
	double curST;
	int n = adjacencyMatrix.size();
	int i_a = 0;
	int j_a = 0;
	vector<int> used;
	int yn = 0;
	int yn2 = 0;

	for (int z = 0; z < (n-1); z++){

		curST = 0.0;

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (adjacencyMatrix[i][j] > curST) {
					curST = adjacencyMatrix[i][j];
					i_a = i;
					j_a = j;
				}
			}
		}

		maxST = maxST + curST;
		adjacencyMatrix[i_a][j_a] = 0;

		for(int k = 0; k < used.size(); k++) {
			if(used[k] == i_a) {
				for(int l = 0; l < n; l++) {
					adjacencyMatrix[i_a][l] = 0;
					adjacencyMatrix[l][i_a] = 0;
				}
			}
			if(used[k] == j_a) {
				for(int m = 0; m < n; m++) {
					adjacencyMatrix[m][j_a] = 0;
					adjacencyMatrix[j_a][m] = 0;
				}
			}
		}

		used.insert(used.end(),i_a);
		used.insert(used.end(),j_a);

	}

	return maxST;
}