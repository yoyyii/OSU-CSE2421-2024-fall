# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT

# Author: Yoyi Liao

gcc_opt = -std=c99 -pedantic -Wimplicit-function-declaration -Wreturn-type -Wformat -g -c

# all targets currently defined in this file
all: lab4.zip lab4

lab4.zip: Makefile LAB4README lab4.h lab4main.c readInventory.c processDate.c isLeapYear.c getCurrentDay.c getDifference.c buildNewList.c insert.c printNode.c freeList.c continueProcess.c options.c insertCase1.c insertCase2.c insertCase3.c printOptions.c totalRevenue.c totalWholesaleCost.c currentInvestment.c totalSales.c totalProfit.c averageProfit.c itemsInStock.c itemsOutOfStock.c getDepartment.c addNewItem.c deleteItem.c outprintList.c checkExist.c findStock.c createNewNode.c deleteCase2.c deleteCase3.c printColumn.c itemStock.c departmentName.c
	zip lab4.zip Makefile LAB4README lab4.h lab4main.c readInventory.c processDate.c isLeapYear.c getCurrentDay.c getDifference.c buildNewList.c insert.c printNode.c freeList.c continueProcess.c options.c insertCase1.c insertCase2.c insertCase3.c printOptions.c totalRevenue.c totalWholesaleCost.c currentInvestment.c totalSales.c totalProfit.c averageProfit.c itemsInStock.c itemsOutOfStock.c getDepartment.c addNewItem.c deleteItem.c outprintList.c checkExist.c findStock.c createNewNode.c deleteCase2.c deleteCase3.c printColumn.c itemStock.c departmentName.c

# binary converter executable
lab4: lab4main.o readInventory.o processDate.o isLeapYear.o getCurrentDay.o getDifference.o buildNewList.o insert.o printNode.o freeList.o continueProcess.o options.o insertCase1.o insertCase2.o insertCase3.o printOptions.o totalRevenue.o totalWholesaleCost.o currentInvestment.o averageProfit.o totalSales.o totalProfit.o itemsInStock.o itemsOutOfStock.o getDepartment.o addNewItem.o deleteItem.o outprintList.o checkExist.o findStock.o createNewNode.o deleteCase2.o deleteCase3.o printColumn.o itemStock.o departmentName.o
	gcc lab4main.o readInventory.o processDate.o isLeapYear.o getCurrentDay.o getDifference.o buildNewList.o insert.o printNode.o freeList.o continueProcess.o options.o insertCase1.o insertCase2.o insertCase3.o printOptions.o totalRevenue.o totalWholesaleCost.o currentInvestment.o totalSales.o totalProfit.o itemsInStock.o averageProfit.o itemsOutOfStock.o getDepartment.o addNewItem.o deleteItem.o outprintList.o checkExist.o findStock.o createNewNode.o deleteCase2.o deleteCase3.o printColumn.o itemStock.o departmentName.o -o lab4

# execute if lab4main.c changes
lab4main.o: lab4main.c lab4.h
	gcc $(gcc_opt) lab4main.c

# execute if readInventory.c changes
readInventory.o: readInventory.c lab4.h
	gcc $(gcc_opt) readInventory.c

# execute if processDate.c changes
processDate.o: processDate.c lab4.h
	gcc $(gcc_opt) processDate.c

# execute if isLeapYear.c changes
isLeapYear.o: isLeapYear.c lab4.h
	gcc $(gcc_opt) isLeapYear.c

# execute if getCurrentDay.c changes
getCurrentDay.o: getCurrentDay.c lab4.h
	gcc $(gcc_opt) getCurrentDay.c

# execute if getDifference changes
getDifference.o: getDifference.c lab4.h
	gcc $(gcc_opt) getDifference.c	

# execute if buildNewList changes
buildNewList.o: buildNewList.c lab4.h
	gcc $(gcc_opt) buildNewList.c

# execute if insert changes
insert.o: insert.c lab4.h
	gcc $(gcc_opt) insert.c

# execute if printNode changes
printNode.o: printNode.c lab4.h
	gcc $(gcc_opt) printNode.c

# execute if freeList changes
freeList.o: freeList.c lab4.h
	gcc $(gcc_opt) freeList.c

# execute if continueProcess changes
continueProcess.o: continueProcess.c lab4.h
	gcc $(gcc_opt) continueProcess.c

# execute if options changes
options.o: options.c lab4.h
	gcc $(gcc_opt) options.c

# execute if insertCase1 changes
insertCase1.o: insertCase1.c lab4.h
	gcc $(gcc_opt) insertCase1.c

# execute if insertCase2 changes
insertCase2.o: insertCase2.c lab4.h
	gcc $(gcc_opt) insertCase2.c

# execute if insertCase3 changes
insertCase3.o: insertCase3.c lab4.h
	gcc $(gcc_opt) insertCase3.c

# execute if printOptions changes
printOptions.o: printOptions.c lab4.h
	gcc $(gcc_opt) printOptions.c

# execute if totalRevenue changes
totalRevenue.o: totalRevenue.c lab4
	gcc $(gcc_opt) totalRevenue.c

totalWholesaleCost.o: totalWholesaleCost.c lab4.h
	gcc $(gcc_opt) totalWholesaleCost.c

currentInvestment.o: currentInvestment.c lab4.h
	gcc $(gcc_opt) currentInvestment.c

totalSales.o: totalSales.c lab4.h
	gcc $(gcc_opt) totalSales.c

totalProfit.o: totalProfit.c lab4.h
	gcc $(gcc_opt) totalProfit.c

averageProfit.o: averageProfit.c lab4.h
	gcc $(gcc_opt) averageProfit.c

itemsInStock.o: itemsInStock.c lab4.h
	gcc $(gcc_opt) itemsInStock.c

itemsOutOfStock.o: itemsOutOfStock.c lab4.h
	gcc $(gcc_opt) itemsOutOfStock.c

# execute if getDepartment changes
getDepartment.o: getDepartment.c lab4.h
	gcc $(gcc_opt) getDepartment.c

addNewItem.o: addNewItem.c lab4.h
	gcc $(gcc_opt) addNewItem.c

deleteItem.o: deleteItem.c lab4.h
	gcc $(gcc_opt) deleteItem.c

outprintList.o: outprintList.c lab4.h
	gcc $(gcc_opt) outprintList.c

checkExist.o: checkExist.c lab4.h
	gcc $(gcc_opt) checkExist.c

findStock.o: findStock.c lab4.h
	gcc $(gcc_opt) findStock.c

createNewNode.o: createNewNode.c lab4.h
	gcc $(gcc_opt) createNewNode.c

deleteCase2.o: deleteCase2.c lab4.h
	gcc $(gcc_opt) deleteCase2.c

deleteCase3.o: deleteCase3.c lab4.h
	gcc $(gcc_opt) deleteCase3.c

printColumn.o: printColumn.c lab4.h
	gcc $(gcc_opt) printColumn.c

itemStock.o: itemStock.c lab4.h
	gcc $(gcc_opt) itemStock.c

departmentName.o: departmentName.c lab4.h
	gcc $(gcc_opt) departmentName.c

# clean
clean:
	rm -rf *.o lab4 lab4.zip

test:
	./verify
