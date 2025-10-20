/*
 * TASK DESCRIPTION
 *********************************
 *
 * `void shell_sort(int *array, size_t size);`
 *
 * sort an array of integers in ascending order using the shell sort algorithm
 * with the Knuth sequence
 *
 * print the array every time before you decrease the gap interval
 *
 * because the complexity of the shell sort algorithm is dependent on the size
 * of the array and the gap, big O notation will not be needed
 *
 * source: Wikipedia
 *********************************
 *
 * shell sort is an in-place comparison method. it can be thought of as mostly
 * an expansion of insertion sort.
 *
 * start by sorting pairs of elements far apart from each other. then proceed
 * by reducing the size of the comparison gap after each iteration.
 *
 * by commencing with a large gap, it quickly moves very out-of-place elements
 * to their position faster than a simple nearest-neighbor exchange.
 *
 * the run time of this algorithm is heavily dependent on the gap sequence
 * used. for many variants, determining the time complexity remains an open
 * problem
 *
 * description
 *********************************
 *
 * in essence the list is progressively modified so that from any starting
 * point, every h^th element thereafter produces a sorted list (resulting in an
 * h-sorted list) this continues until h = 1.
 *
 * here's the alphabet in one 5-sorted configuration :
 * a f k p v b g l r w c h m s x d i n t y e j o u z
 *
 * the knuth sequence:
 * k_[+1] = 3(k_[0]) + 1
 */
