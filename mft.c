#include <stdio.h>

int main()
{
    int i, m, p, s, n, req;

    printf("Enter the memory size: ");
    scanf("%d", &m);

    printf("Enter the no of partitions: ");
    scanf("%d", &p);

    s = m / p;
    printf("Each partition size: %d\n", s);

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    for (i = 0, m -= s; i < n; ++i)
    {
        printf("Enter the memory req for process%d: ", i + 1);
        scanf("%d", &req);

        if (req <= s && m >= s)
        {
            printf("Process1 is allocated in partn%d\n", i + 1);
            printf("Internal fragmentation for process%d is: %d\n", i + 1, s - req);
            m -= s;
        }
        else
        {
            printf("Process2 is not allocated in partn%d\n", i + 1);
            printf("External fragmentation for process%d is: %d\n", i + 1, m - req);
            m -= s;
        }
    }

    return 0;
}
