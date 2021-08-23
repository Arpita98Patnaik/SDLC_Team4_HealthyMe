#include "unity.h"
#include<essentials.h>
#include<water.h>
#include<dietPlan.h>
#include<Cal_Intake.h>
/**
 * @brief Set the Up object
 * Required by the unity test framework
 */
void setUp() {}

/**
 * @brief Release the objects that are setup for tests
 * Required by the unity test framework
 */
void tearDown() {}

/**
 * @brief Test workoutcheck function
 * 
 */
void L_13(void)
{
  
  member *ptr1=NULL;
  TEST_ASSERT_EQUAL(NULL_PTR,workoutcheck(ptr1,0));

}

/**
 * @brief test calculatewaterquant function
 * 
 */
void L_15(void)
{
  member *ptr1 = NULL;
  member ptr2[3];

//   (ptr2)->usr_id = 1;
//   (ptr2)->unit = 1;
//   (ptr2)->w  = 200;
//   TEST_ASSERT_EQUAL(INCONSISTENT_DATA,calcwaterquant(ptr2,0));
  
//   (ptr2+1)->w =100.0;
//   (ptr2+1)->time[0] = 20;
//   (ptr2+1)->time[1] = 15;
//   TEST_ASSERT_EQUAL(INCONSISTENT_DATA,calcwaterquant(ptr2,1));

//   (ptr2+2)->usr_id = 2;
//   (ptr2+2)->unit = 2;
//   (ptr2+2)->w  = 1200;
//   TEST_ASSERT_EQUAL(INCONSISTENT_DATA,calcwaterquant(ptr2,1));

  (ptr2+2)->usr_id = 2;
  (ptr2+2)->unit = 2;
  (ptr2+2)->w  = 800;
  (ptr2+2)->time[0] = 2;
  (ptr2+2)->time[1] = 15;
  TEST_ASSERT_EQUAL(NULL_PTR,calcwaterquant(ptr1,0));
  TEST_ASSERT_EQUAL(SUCCESS,calcwaterquant(ptr2,2));
  
}

void test_utility(void)
{
    //All tests should pass
    // ret_code_t utility(int choice,member *ptr, int n){
    member ptr2[3];
    (ptr2+2)->usr_id = 2;
    (ptr2+2)->unit = 2;
    (ptr2+2)->w  = 800;
    (ptr2+2)->age = 30;
    (ptr2+2)->gender = 1;
    (ptr2+2)->time[0] = 2;
    (ptr2+2)->time[1] = 15;

    TEST_ASSERT_EQUAL(INCONSISTENT_DATA, utility(1,ptr2,2)); 
    TEST_ASSERT_EQUAL(INCONSISTENT_DATA, utility(2,ptr2,2));
    TEST_ASSERT_EQUAL(INCONSISTENT_DATA, utility(4,ptr2,2));
    TEST_ASSERT_EQUAL(INCONSISTENT_DATA, utility(5,ptr2,2));
    TEST_ASSERT_EQUAL(SUCCESS, utility(6,ptr2,2));

    TEST_ASSERT_EQUAL(NULL_PTR, utility(1,NULL,0));
    TEST_ASSERT_EQUAL(INCONSISTENT_DATA, utility(1,ptr2,2));
    TEST_ASSERT_EQUAL(INCONSISTENT_DATA, utility(2,ptr2,2));


}



void test_mealchoice1(void)
{
    ////Tests if meal data base for all meals is present
    //This test should pass
    // ret_code_t mealchoice(int bmr,brkfst *b_head,lunch *l_head,snack *s_head,dinner *d_head)
    struct brkfst *b1 = NULL;
    struct lunch *l1 = NULL;
    struct snack *s1 = NULL;
    struct dinner *d1 = NULL;
    TEST_ASSERT_EQUAL(NULL_PTR,mealchoice(23,b1,l1,s1,d1));
}

void test_mealchoice2(void)
{
    //Tests if BMR is non-zero
    //This test should pass
    struct brkfst b2 = {"Milk", 50, NULL};
    struct lunch l2 = {"Cake", 250, NULL};
    struct snack s2 = {"Biscuit", 103, NULL};
    struct dinner d2 = {"Waffles", 130, NULL};
    TEST_ASSERT_EQUAL(INCONSISTENT_DATA, mealchoice(0,&b2,&l2,&s2,&d2));
}

void test_mealchoice3(void)
{
    //Tests if BMR is positive
    //This test should pass
    struct brkfst b3 = {"Milk", 50, NULL};
    struct lunch l3 = {"Cake", 250, NULL};
    struct snack s3 = {"Biscuit", 103, NULL};
    struct dinner d3 = {"Waffles", 130, NULL};
    TEST_ASSERT_EQUAL(INCONSISTENT_DATA, mealchoice(-10,&b3,&l3,&s3,&d3));
}

void test_mealchoice4(void)
{
    //Tests if meal data base for all meals is present
    //This test should pass
    struct brkfst b4 = {"Milk", 50, NULL};
    struct lunch *l4 = NULL;
    struct snack s4 = {"Biscuit", 103, NULL};
    struct dinner *d4 = NULL;
    TEST_ASSERT_EQUAL(NULL_PTR,mealchoice(23,&b4,l4,&s4,d4));
}



int main(void)
{
  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

  /* Run Test functions */
  RUN_TEST(L_13);
  RUN_TEST(L_15);
  RUN_TEST(test_utility);

    RUN_TEST(test_mealchoice1);
    RUN_TEST(test_mealchoice2);
    RUN_TEST(test_mealchoice3);
    RUN_TEST(test_mealchoice4);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

