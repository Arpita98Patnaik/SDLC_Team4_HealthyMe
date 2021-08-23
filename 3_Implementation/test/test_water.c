#include "unity.h"
#include<essentials.h>
#include<water.h>

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



int main(void)
{
  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

  /* Run Test functions */
  RUN_TEST(L_13);
  RUN_TEST(L_15);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

