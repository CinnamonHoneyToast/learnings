/* Implementation of Esacpe Sequences
 * We all have definitely used escape sequences.
 * We have used "\n" n number of times. But have we ever given any thought as to how 
 * does the computer know that it has to print a new line when we say "\n"?
 * When we type the letter "A", the computer displays the letter "A" on the screen.
 * But  when we type "\n" the computer prints a blank line. How is this happening?
 * 
 * The answer is very simple.
 * We know that the computer encodes all the characters interms of ASCII code.
 * The ASCII code of "A" is 65, whole hexadecimal value is "0x41" let us try to 
 * print the value "0x41" and see the result.
 *
*/

#include <stdio.h>

int main() 
{
	// Print the Hexa decimal value of "A"
	printf("%c", 0x41);
	
	/*
	 * Clearly the above code prints "A" on the standard output.
	 * Now if the letter "A" has a ASCII code 65 and hexadecimal as 0x41
	 * Then "\n" must also have an ASCII code and it's corresponding code
	 * in Hexadeciamal! The ASCII code of "\n" is 10 and it's code in 
	 * Hexadecimal is 0x0A. Now let us try printing it on Std. Output.
	 */
	
	printf("Hello,%c world!", 0x0A);
	
	/*
	 * We know that the ASCII value of "A" is 65 and that of "a" is 90.
	 * Have we ever given a thought as to what are the ASCII characters 
	 * before 65? Some of the ASCII codes before 65 are escape sequences.
	 * Like "\n" is "0x0A", "\?" is "3F" i.e. 63 in Decimal and so on.
	 *
	 * NOTE: The escape sequences are ONE CHARACTER long. 
	 * That is why we display/print them using %c .....
	 *
	 * Let us write a C program to print the characters from ASCII code 1 to 128.
	 * Note that, we print until 128 because A character can only have value until
	 * 128 since it is only ONE BYTE LONG!
	 *
	 * REFERENCES:
	 * [1] Escape sequences in C : https://en.wikipedia.org/wiki/Escape_sequences_in_Chttps://en.wikipedia.org/wiki/Escape_sequences_in_C
	 */

	return 0;
}

