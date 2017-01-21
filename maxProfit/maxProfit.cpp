#include <vector>
#include "maxProfit.h"

using namespace std;

/*
Input: Vector of n execution times (in seconds), n deadlines (in seconds), and n profits (in dollars) for on-time completion
Output: Greatest profit for executing the n jobs
Constraints: *Once started, a job must run to completion
			 *If a job is completed after its deadline, its profit is $0
			 *You want to schedule the jobs in a way that maximizes the profit.
*/
int maxProfit(vector<int> duration , vector<int> deadline , vector<int> profit) {
	int maxStax = 0;
	int n = deadline.size();
	int job = 0;
	int priority = 100000;
	int CurPriority = 0;
	int time = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			CurPriority = deadline[j] - duration[j];

			if ((CurPriority < priority) && (CurPriority >= time)) {
				priority = CurPriority;
				job = j;
			}

			else if ((CurPriority == priority) && (profit[j] > profit[job]) && (CurPriority >= time)) {
				job = j;
			}
		}

		maxStax = maxStax + profit[job];
		time = time + duration[job];
		deadline[job] = 0;
		duration[job] = 10;
		profit[job] = 0;
		priority = 100000;
	}

	return maxStax;
}