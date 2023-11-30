0x01-python-if_else_loops_functions
0x01-python-if_else_loops_functions


======================================================================







0-positive_or_negative.py


#!/usr/bin/python3

import random

number = random.randint(-10, 10)

if number > 0:

    print(f"{number} is positive")

elif number == 0:

    print(f"{number} is zero")

else:

    print(f"{number} is negative")






1-last_digit.py



#!/usr/bin/python3

import random

number = random.randint(-10000, 10000)

if number < 0:

    last_num = number % -10

elif number >= 0:

    last_num = number % 10

if last_num > 5:

    print(f"Last digit of {number} is {last_num} and is greater than 5")

elif last_num == 0:

    print(f"Last digit of {number} is {last_num} and is 0")

else:

    print(f"Last digit of {number} is {last_num} and is less than 6 and not 0")







10-add.py


#!/usr/bin/python3

def add(a, b):

    return a + b






10-main.py


#!/usr/bin/env python3

add = __import__('10-add').add


print(add(1, 2))

print(add(98, 0))

print(add(100, -2))






100-print_tebahpla.py


#!/usr/bin/python3

for i in range(122, 96, -1):

    if i % 2:

        i = i - 32

    print("{:c}".format(i), end="")












101-main.py



#!/usr/bin/env python3

remove_char_at = __import__('101-remove_char_at').remove_char_at


print(remove_char_at("Best School", 3))

print(remove_char_at("Chicago", 2))

print(remove_char_at("C is fun!", 0))

print(remove_char_at("School", 10))

print(remove_char_at("Python", -2))






101-remove_char_at.py


#!/usr/bin/python3

def remove_char_at(str, n):

    if n < 0:

        return str

    else:

        str = str[0:n] + str[n+1:]

    return str






102-magic_calculation.py



#!/usr/bin/python3

def magic_calculation(a, b, c):

    if a < b:

        return c

    elif c > b:

        return a + b

    return a * b - c







11-main.py



#!/usr/bin/env python3

pow = __import__('11-pow').pow


print(pow(2, 2))

print(pow(98, 2))

print(pow(98, 0))

print(pow(100, -2))

print(pow(-4, 5))







11-pow.py


#!/usr/bin/python3

def pow(a, b):

    return a ** b





12-fizzbuzz.py



#!/usr/bin/python3

def fizzbuzz():

    for i in range(1, 101):

        if i % 3 == 0 and i % 5 == 0:

            print("FizzBuzz ", end="")

        elif i % 3 == 0:

            print("Fizz ", end="")

        elif i % 5 == 0:

            print("Buzz ", end="")

        else:

            print("{:d} ".format(i), end="")







12-main.py


#!/usr/bin/env python3

fizzbuzz = __import__('12-fizzbuzz').fizzbuzz


fizzbuzz()

print("")







2-print_alphabet.py


#!/usr/bin/python3

for i in range(97, 123):

    print(chr(i).format(), end="")







3-print_alphabt.py



#!/usr/bin/python3

for i in range(97, 123):

    if (i == 101) or (i == 113):

        continue

    print(chr(i).format(), end="")






4-print_hexa.py


#!/usr/bin/python3

for i in range(0, 99):

    print("{0} = {1}".format(i, hex(i)))







5-print_comb2.py



#!/usr/bin/python3

for i in range(99):

    print("{:02d}".format(i), end=", ")

print("{:02d}".format(99))







6-print_comb3.py



#!/usr/bin/python3

for i in range(9):

    for j in range(i + 1, 10):

        if i * 10 + j < 89:

            print("{:d}{:d}".format(i, j), end=", ")

print("{:d}".format(89))





7-islower.py


#!/usr/bin/python3

def islower(c):

    return ord("a") <= ord(c) <= ord("z")





8-main.py


#!/usr/bin/env python3

uppercase = __import__('8-uppercase').uppercase


uppercase("best")

uppercase("Best School 98 Battery street")





8-uppercase.py


#!/usr/bin/python3

def uppercase(str):

    for i in str:

        if ord("a") <= ord(i) <= ord("z"):

            i = chr(ord(i) - 32)

        print("{:s}".format(i), end="")

    print()







9-main.py


#!/usr/bin/env python3

print_last_digit = __import__('9-print_last_digit').print_last_digit


print_last_digit(98)

print_last_digit(0)

r = print_last_digit(-1024)

print(r)







9-print_last_digit.py



#!/usr/bin/python3

def print_last_digit(number):

    if number < 0:

        last_num = (-number % 10)

    elif number >= 0:

        last_num = number % 10

    print("{:d}".format(last_num), end="")

    return last_num









README.md



Solutions to 0x01. Python - if/else, loops, functions tasks.



13-insert_number.c



#include "lists.h"


/**

 * insert_node - Inserts a number into a sorted singly-linked list.

 * @head: A pointer the head of the linked list.

 * @number: The number to insert.

 *

 * Return: If the function fails - NULL.

 * Otherwise - a pointer to the new node.

 */

listint_t *insert_node(listint_t **head, int number)

{

        listint_t *node = *head, *new;


        new = malloc(sizeof(listint_t));

        if (new == NULL)

                return (NULL);

        new->n = number;


        if (node == NULL || node->n >= number)

        {

                new->next = node;

                *head = new;

                return (new);

        }


        while (node && node->next && node->next->n < number)

                node = node->next;


        new->next = node->next;

        node->next = new;


        return (new);

}




lists.h


#ifndef LISTS_H

#define LISTS_H


#include <stdlib.h>


/**

 * struct listint_s - singly linked list

 * @n: integer

 * @next: points to the next node

 *

 * Description: singly linked list node structure

 *

 */

typedef struct listint_s

{

        int n;

        struct listint_s *next;

} listint_t;


size_t print_listint(const listint_t *h);

listint_t *add_nodeint_end(listint_t **head, const int n);

void free_listint(listint_t *head);

listint_t *insert_node(listint_t **head, int number);


#endif /* LISTS_H */


