#include <stdlib.h>
#include <stdio.h>

int lab3main();
int get_ingredients(char*** ingredients);
void get_item(int ingredientsNum, char** ingredients);
void print_ingredients(int ingredientsNum, char** ingredients);
int get_thispizza(char**** thispizza, char** ingredients, int ingredientsNum);
void get_customer_ingredients(int orderNum, char*** thispizza, char** ingredients);
void save_info(char** ingredients, int ingredientsNum, char*** thispizza, int orderNum);
void print_file(char** ingredients, int ingredientsNum, char*** thispizza, int orderNum, char* fileName);
void free_dmem(char** ingredients, char*** thispizza, int ingredientsNum);
void free_ingredients(char** ingredients, int ingredientsNum);
void free_thispizza(char*** thispizza);
void print_thispizza(int orderNum, char*** thispizza);
