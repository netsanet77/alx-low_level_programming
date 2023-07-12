int linear_search(int *array, size_t size, int value){
	size_t i;
	if (array == NULL){
		return (-1);
	}
	for (i = 0; i < size; i++){
	if (array[i] == value) {
	return i;
	}
	else {
	return -1;
	}
	}
}
