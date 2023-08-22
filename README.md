<<<<<<< HEAD
partner 2 is here (Buoyantichub) [www.github.com/Buoyantichub]
=======
# printf()

The `printf()` function in C is used to format and display output on the console. It stands for "print formatted" and is part of the standard input/output library (`stdio.h`). It allows you to print text along with formatted values, such as variables, constants, and expressions.

Here's the basic syntax of the `printf()` function:

```c
printf(format_string, argument_list);
```

- `format_string`: This is a string that specifies how the output should be formatted. It can include placeholders for the values you want to print, indicated by the `%` symbol, followed by format specifiers.
- `argument_list`: These are the values that you want to substitute into the placeholders in the format string. The number and types of arguments should match the format specifiers in the format string.

Here's an example to illustrate the usage of `printf()`:

```c
#include <stdio.h>

int main() {
    int age = 25;
    float height = 5.9;
    char grade = 'A';

    printf("My age is %d, my height is %.2f feet, and my grade is %c.\n", age, height, grade);

    return 0;
}
```

In this example, `%d`, `%.2f`, and `%c` are format specifiers for integer, floating-point, and character values, respectively. The corresponding values are provided in the `argument_list`.

Here are some common format specifiers:

- `%d`: Integer
- `%f`: Floating-point number
- `%c`: Character
- `%s`: String
- `%x`: Hexadecimal
- `%%`: Prints a literal percent sign

You can also include formatting options within the format specifiers. For example, `%.2f` specifies that a floating-point number should be displayed with 2 decimal places.

Remember to match the number and types of arguments with the format specifiers in the same order they appear in the format string. Failing to do so can lead to unpredictable behavior or errors.

Additionally, it's important to handle escape sequences like `\n` (newline) and `\t` (tab) to control the layout of the printed output.

That's a brief overview of the `printf()` function in C! It's a powerful tool for displaying formatted output in your programs.


#Authors

Partner 1: Byaruhanga Francis    Github profile: https://github.com/Francis-Byaruhanga
>>>>>>> 1fbba060d8255528c3fc15a6c645455ae9249ac8
