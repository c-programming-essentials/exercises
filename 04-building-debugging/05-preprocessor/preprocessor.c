int main(int argc, char **argv) {
    int n;
    int *array;
    ts t1, t2, t3;

    printf("Amount of random number to generate?\n");
    scanf("%d", &n);

    array = malloc(n*sizeof(int));
    if (!array) {
        perror("malloc");
        return -1;
    }

    clock_gettime(CLOCK_REALTIME, &t1);

    for (int i = 0; i<n; i++)
        array[i] = rand()%100;

    clock_gettime(CLOCK_REALTIME, &t2);

    t3.tv_sec = t2.tv_sec - t1.tv_sec;
    t3.tv_nsec = t2.tv_nsec - t1.tv_nsec;
    if (t3.tv_nsec < 0) {
        t3.tv_sec--;
        t3.tv_nsec += 1000000000L;
    }

    printf("Generated %d numbers in %ld.%09ld seconds\n", n,
            t3.tv_sec, t3.tv_nsec);

    free(array);
    return 0;
}