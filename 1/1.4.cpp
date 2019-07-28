template <typename T>
void sort(T *num, int size)
{
    int temp;
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size - 1 - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}