int square(int x);

int main(int argc, char **argv)
{
    printf("Hello World\n");
    printf("Square of %d is %d\n", 10, square(10));
    printf("Sum of %d and %d is %d\n", 10, 20, sum(10, 20));
    printf("Max of %d and %d is %d\n", 10, 20, max(10, 20));
    return 0;
}

int square(int x)
{
    return x * x;
}

int sum(int x, int y)
{
    return x + y;
}

int max(int x, int y)
{
    if x > y {
        return x;
    }

    return y;
}

