0x00-python-hello_world
0x00-python-hello_world

=========•••••••••================



0-run


#!/bin/bash

python3 $PYFILE


________________________________



1-run_inline


#!/bin/bash

python3 -c "$PYCODE"


________________________________




100-write.py


#!/usr/bin/python3

import sys

sys.stderr.write("and that piece of art is useful - Dora Korpar, 2015-10-19\n")

exit(1)


________________________________




101-compile


#!/bin/bash

python3 -m compileall $PYFILE -b

Give feedback


________________________________




2-print.py


#!/usr/bin/python3

print('"Programming is like building a multilingual puzzle')


________________________________




3-print_number.py


#!/usr/bin/python3

number = 98

print(f"{number} Battery street\n", end="")


________________________________




4-print_float.py


#!/usr/bin/python3

number = 3.14159

print(f"Float: {number:.2f}")


________________________________




5-print_string.py



#!/usr/bin/python3

str = "Holberton School"

print(str * 3)

print(str[:9])


________________________________




6-concat.py


#!/usr/bin/python3

str1 = "Holberton"

str2 = "School"

str1 = str1 + " " + str2

print(f"Welcome to {str1}!")


________________________________




7-edges.py


#!/usr/bin/python3

word = "Holberton"

word_first_3 = word[:3]

word_last_2 = word[-2:]

middle_word = word[1:-1]

print(f"First 3 letters: {word_first_3}")

print(f"Last 2 letters: {word_last_2}")

print(f"Middle word: {middle_word}")


________________________________




8-concat_edges.py


#!/usr/bin/python3

str = "Python is an interpreted, interactive, object-oriented programming\

         language that combines remarkable power with very clear syntax"

str = str[39:67] + str[115:120] + str[0:6]

print(str)


________________________________





9-easter_egg.py



________________________________




10-check_cycle.c


#include "lists.h"


/**

 * check_cycle - checks if a linked list contains a cycle

 * @list: linked list to check

 *

 * Return: 1 if the list has a cycle, 0 if it doesn't

 */

int check_cycle(listint_t *list)

{

        listint_t *slow = list;

        listint_t *fast = list;


        if (!list)

                return (0);


        while (slow && fast && fast->next)

        {

                slow = slow->next;

                fast = fast->next->next;

                if (slow == fast)

                        return (1);

        }


        return (0);

}


