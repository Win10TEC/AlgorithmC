#include <CUnit/CUnit.h>
#include <CUnit/Console.h>
#include "recurcive.h"
//#include<stdio.h>

int main() {
  CU_pSuite testSuite;

  /* CUnit初期化 */
  CU_initialize_registry();
  /* Suite登録 */
  testSuite = CU_add_suite("CTestSuite", NULL, NULL);

  /* Test関数 */
  CU_add_test(testSuite, "emainTest", test_emain);

  /* CUnit 実行 */
  CU_console_run_tests();
  /* CUnit 終了処理 */
  CU_cleanup_registry();

  return 0;
}

void test_emain() {

  CU_ASSERT_TRUE(emain);
  
}
