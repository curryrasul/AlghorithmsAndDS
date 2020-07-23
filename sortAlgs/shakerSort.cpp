// Шейкерная сортировка

// Шейкерная сортировка представляет собой усовершенствованный алгоритм сортировки пузырьком.
// Пузырьковая работает в одну сторону, а шейкерная в две сразу. 
// В bubbleSort мы присваивали переменной t, последний свап индекс справа, тем самым уменьшали границу.
// Здесь же, создадим еще доп переменную, и будем увеличивать ее, тем самым уменьшая неотсортированный интервал
// Сложность O(n^2). На небольших значениях выигрывает во времени у обычной bubbleSort.

void shakerSort(int *array, int len) {
    // Левая граница
    int left = 0;
    // Правая граница
    int right = len - 1;
    // Доп переменная (такая же как в bubbleSort.cpp)
    int bound;
    
    // Выполняем цикл пока левая граница меньше правой
    while (left < right) {
        // То же что и в bubbleSort.cpp
        bound = right;
        for (int i = left; i < bound; i++) {
            if (array[i] > array[i + 1]) {
                swap(array[i], array[i + 1]);
                right = i;
            }
        }

        // Теперь делаем то же самое, но в обратную сторону
        bound = left;
        for (int i = right; i > bound; i--) {
            if (array[i] < array[i - 1]) {
                swap(array[i], array[i - 1]);
                left = i;
            }
        }
    }
}
