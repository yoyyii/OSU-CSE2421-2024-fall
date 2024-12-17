/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.*/

/*Student name: Yoyi Liao*/

#include <stdio.h>
#define MAX_CHAR_LENGTH 200

/*rotate the parameter one bit to the right*/
unsigned int rotate_right(unsigned int curr_hex) {

	// get last digit of the encrypted hex. then perserve it back to the most significant bit after shifted curr_hex.
	unsigned int last_digit = 1;

	return curr_hex = ((curr_hex >> 1) | (curr_hex & last_digit) << 7);
}

/*rotate the parameter one bit to the left*/
unsigned int rotate_left(unsigned int curr_hex) {

	// get first digit of the encrypted hex, then perserve it back to the least significant bit after shifted curr_hex.
	unsigned int first_digit = 0x80;
	
	return curr_hex = ((curr_hex << 1) | (curr_hex & first_digit) >> 7);
}

/*decrypt the hex value passed in and return the decrypted value*/
void decrypt(char key_8_bits, unsigned int curr_hex, int i) {

	// rotate curr_hex to the right if it's in the even position. Rotate left otherwise
	if (i % 2 == 0) {
		curr_hex = rotate_right(curr_hex); 
	} else {
		curr_hex = rotate_left(curr_hex); 
	}

	// XOR curr_hex with key to decrypt it
	putchar(curr_hex ^ key_8_bits);	
}

/*read the encrypted hex value user input*/
void read_hex(char key_8_bits) {
	
	unsigned int curr_hex = 0;

    #ifdef PROMPT
	// prompt user to enter hex values
	printf("Enter hex values: " ); 
	#endif

	// keep scanning for next hex value until reaches \n (indicating the message is complete)
	for (int i = 0; i < MAX_CHAR_LENGTH; i++) { 

		scanf("%x", &curr_hex);
		
		char getchar_val = getchar();
		
		// decrypt current hex value
		decrypt(key_8_bits, curr_hex, i); 

		// break the loop since message is complete
		if(getchar_val == '\n') { 
			break;			
		}
	}
}

/*read in 4 digits of the key and return the 8-bits key*/
char create_key() {
	
	// 8 bits key that will be returning. Making it unsigned so when we shift it to the right it will always be pad with 0	
	unsigned char key = 0x0; 

	char digit = 0;

	#ifdef PROMPT
	// prompt user to enter the key
	printf("Enter 4-bits key: " ); 
	#endif

	// read through each digit of the key
	for(int i = 4; i > 0; i--) { 
		// reads in 1 digit at a time
		digit = getchar(); 
		
		// shifting digit to correct position
		digit = digit << 3; 
		digit = digit << i;

		// perform bitwise OR to get the correct number on key
		key = key | digit; 
	}

	// bitwise OR key with itself (shifted 4 bits to the right) to get the extended key from 4 bits to 8 bits
	return key | (key >> 4); 

}

/*Main function. Prompt the user to input encrypted text and key. The function will then return the decrypted message.*/

int main() {
	
	// get the 8 bit key
	char key_8_bits = create_key(); 

	//read hex values user prompt in
	read_hex(key_8_bits); 

	putchar('\n');
	
	return 0;	
}
