#!/usr/bin/python3
def is_palindrome(n):
    return str(n) == str(n)[::-1]

def largest_palindrome():
    max_palindrome = 0
    for i in range(100, 1000):
        for j in range(i, 1000):  # Start from i to avoid duplicate products
            product = i * j
            if is_palindrome(product) and product > max_palindrome:
                max_palindrome = product
    return max_palindrome

result = largest_palindrome()

# Save result to file
with open("alx-low_level_programming/0x17-doubly_linked_lists/102-result", "w") as file:
    file.write(str(result)
