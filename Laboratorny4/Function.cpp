#include "Function.h"


void replace(List<Household^>^& vect, int first_index, int second_index) {
	Household^ first_before = vect[first_index];
	vect[first_index] = vect[second_index];
	vect[second_index] = first_before;
}


void bubbleSort(List<Household^>^ line) {
	int comprasions = 0;
	int permutations = 0;
	int now_permutations = 0;
	int size = line->Count;
	do {
		now_permutations = 0;
		for (int i = 0; i < size - 1; i++) {

			if (line[i]->Name[0] > line[i + 1]->Name[0]) {
				replace(line, i, i + 1);
				now_permutations++;
			}
			comprasions++;
		}
		permutations += now_permutations;

		size--;
	} while (now_permutations != 0);
}