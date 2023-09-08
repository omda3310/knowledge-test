#!/usr/bin/python3
"""Python function to filter even numbers from a list of integers."""


def filter_even_numbers(list):
    """Test element of list"""
    even_number = [n for n in list if n % 2 == 0]
    return even_number


input_list = [3, 8, 12, 7, 4, 6, 9, 10]
even_numbers = filter_even_numbers(input_list)
print(even_numbers)
