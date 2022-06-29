1  #include <unistd.h>
2  /**
3   * main - Entry point
4   *
5   * Return: Always 1 (Success)
6   */
7 int main(void)
8 {
9          char str1[] = "and the piece of art is useful\" - Dora korpar, 2015-10-19\n";
10
11         write(2, str1, 59);
12         return (1);
13}
