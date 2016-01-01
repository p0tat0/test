int square(int x);

int main(int argc, char **argv)
{
    printf("Hello World\n");
    printf("Square of %d is %d\n", 10, square(10 * 10));
    return 0;
}

int square(int x)
{
    return x * x;
}
