/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define RARRLENGTH 10
#define FLAG 1

struct Cost {
	float wholesalePrice;
	float retailPrice;
	int wholesaleQuantity;
	int retailQuantity;
};

struct Data {
	char item[50];
	char department[30];
	int stockNumber;
	struct Cost pricing;
};

typedef struct Node {
	struct Data grocery_item;
	struct Node *next;
} Node;

int main(int, char*[]);
void readInventory(char*, char*, Node**);
void processDate(FILE*, char*, char*);
int isLeapYear(int);
int getCurrentDay(int, int, int);
int getDifference(int, int, int, int);
int buildNewList(Node**, FILE*);
void insert(Node**, Node*);
void printNode(Node*);
void freeList(Node**);
void continueProcess(FILE*, int, char*);
void options(Node**, char*, char*);
void insertCase1(Node**, Node*);
void insertCase2(Node**, Node*);
void insertCase3(Node**, Node*);
void printOptions();
float totalRevenue(Node*, int);
float totalWholesaleCost(Node*, int);
float currentInvestment(Node*, int);
float totalSales(Node*, int);
float totalProfit(Node*, int);
float averageProfit(Node*, int);
float itemsInStock(Node*, int);
float itemsOutOfStock(Node*, int);
float getDepartment(Node*, int);
void addNewItem(Node**, char*, char*);
void deleteItem(Node**, char*, char*);
void outprintList(Node**, char*, char*);
int checkExist(char*, char*, int*, Node*);
int findStock(Node*, int);
void createNewNode(char*, char*, int, float, float, int, int, Node**);
void deleteCase2(Node**);
void deleteCase3(Node**, int);
void printColumn();
int itemStock(Node*, int, Node*);
int departmentName(Node*, char*);