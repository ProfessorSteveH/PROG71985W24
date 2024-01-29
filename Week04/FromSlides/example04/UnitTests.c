// here is a CUnit based example of unit testing the "swaps" library from example03
// steps:
//		0. download and install CUnit from https://sourceforge.net/projects/cunit-msvc/, the assertions you can use: http://cunit.sourceforge.net/doc/writing_tests.html#assertions
//		1. right click on Header Files and add existing...  then browse to example03\swaps.h and add
//		2. right click on Source Files and add existing...  then browse to example03\swaps.c and add
//		3. select this project, right click and select Properties (at the bottom)
//				a. make sure all configurations is selected
//				b. go to C/C++, then add Additional Include directory: mine is C:\Program Files (x86)\CUnit\Include\CUnit
//				c. go to Linker and add Additional Library directory: mine is C:\Program Files (x86)\CUnit\Lib\$(ConfigurationName)-$(Platform)
//				d. still in Linker, add library: CUnit.lib
//		4. code whats below:

#include <stdio.h>   //make this first to avoid error about redefinition of sprintf
#include  "CUnit.h"

#include "../example03/swaps.h"

int init_suite(void) { return 0; }
int clean_suite(void) { return 0; }

void test_swap(void)
{
	int a = 5;
	int b = 10;
	swap(a,b);
	CU_ASSERT_EQUAL(a, 10);
	CU_ASSERT_EQUAL(b, 5);
}

void test_swap2(void)
{
	int a = 5;
	int b = 10;
	swap2(&a, &b);
	CU_ASSERT_EQUAL(a, 10);
	CU_ASSERT_EQUAL(b, 5);
}
int main(void)
{
	CU_pSuite pSuite1, pSuite2 = NULL;

	// Initialize CUnit test registry
	if (CUE_SUCCESS != CU_initialize_registry())
		return CU_get_error();

	// Add suite1 to registry
	pSuite1 = CU_add_suite("inital tests", init_suite, clean_suite);
	if (NULL == pSuite1) {
		CU_cleanup_registry();
		return CU_get_error();
	}

	// add test1 to suite1
	if ((NULL == CU_add_test(pSuite1, "swap function:\n", test_swap)))
	{
		CU_cleanup_registry();
		return CU_get_error();
	}
	if ((NULL == CU_add_test(pSuite1, "swap2 function:\n", test_swap2)))
	{
		CU_cleanup_registry();
		return CU_get_error();
	}
	CU_basic_run_tests();// OUTPUT to the screen

	CU_cleanup_registry();//Cleaning the Registry
	return CU_get_error();
}
