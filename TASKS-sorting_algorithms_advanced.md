# advanced sorting algorithms

## 0. shell sort - Knuth sequence

- `100-shell_sort.c`
- `void shell_sort(int *array, size_t size);`

sort an array of integers in ascending order using the shell sort algorithm,
using the Knuth sequence

print the array each time you decrease the interval

because the complexity of the shell sort algorithm is dependent on the size of
the array and the gap, big O notation will not be needed

### Knuth sequence

- `n_(+1)  = n * 3 + 1` -> 1, 4, 13, 40, 121, ...

## 1. counting sort

- `102-counting_sort.c`, `102-O`
- `void counting_sort(int *array, size_t size);`

sort an array of integers in ascending order using the counting sort algorithm

- assume `array` will only contain numbers >= 0
- `malloc()` and `free()` are allowed
- print the counting array once it is setup
	- the array is of size `k + 1` where `k` is the largest number in `array`
- for `102-O` write the big O notation of the _time_ complexity for the best,
  average, and worst case scenarios -- one per line

## 2. merge sort

- `103-merge_sort.c`, `103-O`
- `void merge_sort(int *array, size_t size);`

sort an array of integers in ascending order using the merge sort algorithm
- implement top-down merge sort
	- when splitting an array into two, the length of the left array must be <=
	  the length of the right array
	- sort the left array before the right
- `printf()` is allowed
- `malloc()` and `free()` can only be called _once_
- for `103-O` write the big O notation of the _time_ complexity for the best,
  average, and worst case scenarios -- one per line
