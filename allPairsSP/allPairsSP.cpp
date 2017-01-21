#include <vector>
#include "allPairsSP.h"

using namespace std;

/*
Name: allPairsSP
Input: n×n vector (representing the adjacency matrix of i graph) and a value i (between 1 and n)
Output: n×n vector representing the matrix computed after the ith stage of Floyd’s algorithm
Note: infinity (∞) will be represented as −1
*/
vector<vector<double>> allPairsSP(vector<vector<double>> adjacencyMatrix, int i) {
	for (int j = 0; j < i; j++) {
		for (int k = 0; k < adjacencyMatrix.size(); k++) {
			for (int l = 0; l < adjacencyMatrix.size(); l++) {
				if ((adjacencyMatrix[k][j] != -1)&&(adjacencyMatrix[j][l] != -1)) {
					if (adjacencyMatrix[k][l] == -1) {
						adjacencyMatrix[k][l] = adjacencyMatrix[k][j] + adjacencyMatrix[j][l];
					}
					else if (adjacencyMatrix[k][l] > (adjacencyMatrix[k][j] + adjacencyMatrix[j][l])) {
						adjacencyMatrix[k][l] = adjacencyMatrix[k][j] + adjacencyMatrix[j][l];
					}
				}

			}
		}
	}

	return adjacencyMatrix;
}