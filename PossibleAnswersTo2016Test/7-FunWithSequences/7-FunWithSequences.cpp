 /**************
 I will be using <vector> here. Maayo na lang madugangan ang mga examples nga inyong makita on using vectors.
 ***************/
 
 #include <iostream>
 #include <vector>
 //#include <algorithm>
 
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int numItemsInS, numItemsInQ;
	
	// read first sequence
	cin >> numItemsInS;	
	vector<int> sequence_S(numItemsInS);
	for(int i = 0; i < numItemsInS; i++)
	{
		cin >> sequence_S[i];
	}
	
	// read second sequence
	cin >> numItemsInQ;	
	vector<int> sequence_Q(numItemsInQ);
	for(int i = 0; i < numItemsInQ; i++)
	{
		cin >> sequence_Q[i];
	}
	
	// print output
	// We do not need to explicitly sort the items because the first sequence above (sequence S) is already sorted from the input.
	// We can directly print the output.
	int currentS, currentQ;
	bool isCurrentSinQ;
	for(int s = 0; s < sequence_S.size(); s++)
	{
		currentS = sequence_S[s];
		isCurrentSinQ = false;
		for( int q = 0; q < sequence_Q.size(); q++)
		{
			currentQ = sequence_Q[q];
			if(currentS == currentQ)
			{
				isCurrentSinQ = true;
				break;
			}
		}
		
		if(!isCurrentSinQ)
		{
			cout << currentS << " ";
		}
	}	
	
	return 0;
}

/***************************
The pseudocode is much easier to read than the actual code so I'm going to put it here:

... // read input here

foreach s in S
{
	bool isCurrentSinQ = false;
	foreach q in Q
	{
		if (s == q)
		{
			isCurrentSinQ = true;
			break;
		}
	}
	
	if (!isCurrentSinQ)
	{
		print s + " "; 
	}
}

****************************/