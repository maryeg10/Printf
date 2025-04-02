/*
int	main(void)
{
int my_len, orig_len;

// Test with a simple string
my_len = ft_printf("Simple test\n");
orig_len = printf("Simple test\n");
printf("ft_printf: %d characters, printf: %d characters\n\n", my_len, orig_len);

// Test with integers (including limits)
my_len = ft_printf("Positive integer: %d, Negative integer: %d\n", 123, -456);
orig_len = printf("Positive integer: %d, Negative integer: %d\n", 123, -456);
printf("ft_printf: %d characters, printf: %d characters\n\n", my_len, orig_len);

my_len = ft_printf("Maximum integer: %d, Minimum integer: %d\n", INT_MAX, INT_MIN);
orig_len = printf("Maximum integer: %d, Minimum integer: %d\n", INT_MAX, INT_MIN);
printf("ft_printf: %d characters, printf: %d characters\n\n", my_len, orig_len);

// Test with characters
my_len = ft_printf("Character: %c\n", 'A');
orig_len = printf("Character: %c\n", 'A');
printf("ft_printf: %d characters, printf: %d characters\n\n", my_len, orig_len);

// Test with strings
my_len = ft_printf("String: %s\n", "Hello, world!");
orig_len = printf("String: %s\n", "Hello, world!");
printf("ft_printf: %d characters, printf: %d characters\n\n", my_len, orig_len);

my_len = ft_printf("NULL string: %s\n", NULL);
orig_len = printf("NULL string: %s\n", NULL);
printf("ft_printf: %d characters, printf: %d characters\n\n", my_len, orig_len);

// Test with pointers
int x = 42;
my_len = ft_printf("Pointer: %p\n", &x);
orig_len = printf("Pointer: %p\n", &x);
printf("ft_printf: %d characters, printf: %d characters\n\n", my_len, orig_len);

// Test with hexadecimal numbers (lowercase)
my_len = ft_printf("Hexadecimal (lowercase): %x\n", 255);
orig_len = printf("Hexadecimal (lowercase): %x\n", 255);
printf("ft_printf: %d characters, printf: %d characters\n\n", my_len, orig_len);

// Test with hexadecimal numbers (uppercase)
my_len = ft_printf("Hexadecimal (uppercase): %X\n", 255);
orig_len = printf("Hexadecimal (uppercase): %X\n", 255);
printf("ft_printf: %d characters, printf: %d characters\n\n", my_len, orig_len);

// Test with unsigned integers
my_len = ft_printf("Unsigned: %u\n", 4294967295u);
orig_len = printf("Unsigned: %u\n", 4294967295u);
printf("ft_printf: %d characters, printf: %d characters\n\n", my_len, orig_len);

// Test with percentage
my_len = ft_printf("Percentage: %%\n");
orig_len = printf("Percentage: %%\n");
printf("ft_printf: %d characters, printf: %d characters\n\n", my_len, orig_len);

// Edge cases and combinations
my_len = ft_printf("Combination: %d, %x, %s, %p\n", 1024, 255, "Test", &x);
orig_len = printf("Combination: %d, %x, %s, %p\n", 1024, 255, "Test", &x);
printf("ft_printf: %d characters, printf: %d characters\n\n", my_len, orig_len);

return 0;
}
*/

/*
int main(void)
{
    int n = 42;
    unsigned int un = -42;
    char c = '\0';
    char *s = NULL;
    char *ptr = "Test";
    int rlen1 = 0, rlen2 = 0;
    // Test 1: Mix
    rlen1 = ft_printf("\033[0;33mTest Mix: %c %s %d %i %u %x %X %p %%\n\033[0m", c, s, n, n, un, n, n, s);
    rlen2 = printf("\033[0;32mTest Mix: %c %s %d %i %u %x %X %p %%\n\033[0m", c, s, n, n, un, n, n, s);
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 2: Char
    rlen1 = ft_printf("\033[0;33mTest char: %c\n\033[0m", 'A');
    rlen2 = printf("\033[0;32mTest char: %c\n\033[0m", 'A');
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 3: String
    rlen1 = ft_printf("\033[0;33mTest string: %s\n\033[0m", "mundo");
    rlen2 = printf("\033[0;32mTest string: %s\n\033[0m", "mundo");
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 4: Hex minusculas
    rlen1 = ft_printf("\033[0;33mTest hex: %x\n\033[0m", 25555555);
    rlen2 = printf("\033[0;32mTest hex: %x\n\033[0m", 25555555);
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 5: Puntero
    rlen1 = ft_printf("\033[0;33mTest ptr: %p\n\033[0m", ptr);
    rlen2 = printf("\033[0;32mTest ptr: %p\n\033[0m", ptr);
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 6: Hex mayusculas
    rlen1 = ft_printf("\033[0;33mTest HEX: %X\n\033[0m", 255);
    rlen2 = printf("\033[0;32mTest HEX: %X\n\033[0m", 255);
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 7: Decimal
    rlen1 = ft_printf("\033[0;33mTest dec: %d\n\033[0m", 777);
    rlen2 = printf("\033[0;32mTest dec: %d\n\033[0m", 777);
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 8: Int
    rlen1 = ft_printf("\033[0;33mTest int: %i\n\033[0m", 777);
    rlen2 = printf("\033[0;32mTest int: %i\n\033[0m", 777);
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 9: Unsigned int
    rlen1 = ft_printf("\033[0;33mTest uns: %u\n\033[0m", -0);
    rlen2 = printf("\033[0;32mTest uns: %u\n\033[0m", -0);
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 10: Porcentaje
    rlen1 = ft_printf("\033[0;33mTest porcentaje: %%\n\033[0m");
    rlen2 = printf("\033[0;32mTest porcentaje: %%\n\033[0m");
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 11: Locura
    rlen1 = ft_printf("\033[0;33mTest locura: %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n\033[0m", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
    rlen2 = printf ("\033[0;32mtest locura: %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n\033[0m", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    return 0;
}
/*
