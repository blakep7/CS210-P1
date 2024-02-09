/**
 * @file sample-tester.cpp
 * @author SDSU Department of Computer Science
 * @brief This is a sample tester for program 1.
 * @version 1.1
 * @date 2024-02-09
 */
#include "OrderedPQ.h"
#include "UnorderedPQ.h"

/**
 * This file is being provided as a courtesy, it will NOT fully test your classes.
 * Students SHOULD write their own test file and fully test their created data structures.
 * Don't forget to priortize edge case testing!
 */

int main() {
	OrderedPQ queue(10);    // Either structure should perform the same
//	UnorderedPQ queue;      // Either structure should perform the same

	printf("Begin Sample Test\n\n");

    // Test 1
	if (!queue.isEmpty()) {
        printf("1 ERROR: queue is empty\n");
    }
	else {
        printf("1  PASS: queue is empty\n");
    }

    // Test 2
	if (!queue.insert(10)) {
        printf("2 ERROR: insert largest item\n");
    }
	else {
        printf("2  PASS: insert largest item\n");
    }

    // Test 3
	if (queue.remove() != 10) {
        printf("3 ERROR: remove highest priority\n");
    }
	else {
        printf("3  PASS: remove highest priority\n");
    }

    // Test 4
	if (queue.contains(10)) {
        printf("4 ERROR: contains\n");
    }
	else {
        printf("4  PASS: contains\n");
    }

    // Test 5
    try {
        if (queue.remove()) {
            printf("5 ERROR: remove from empty queue\n");
        }
    }
    catch (std::invalid_argument& e) {
	    printf("5  PASS: caught exception remove when empty\n");
        printf("%s\n", e.what());
    }
    catch (std::exception& e) {
	    printf("5 ERROR: caught unknown exception remove when empty\n");
        printf("%s\n", e.what());
    }
	printf("\nEnd Sample Test\n");
}
