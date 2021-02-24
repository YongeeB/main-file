#include "include.c"
typedef struct tm tm;
int main()
{
     /**** All if conditions
     score: must be greater than 5 if not you wont be alllowed to input all your necessary info.
     Time: It checks whether the time is noon or morning.
     Marital_status: It checks whether the user relationship status is engaged, married, single or complicated.
     Cgpa: The condition checks your Cgpa status and output the country in which you are given scholarship to ****/
     int score;
     score = 5;
     time_t currentTime;
     time(&currentTime);
     //printf("%s", info.check);
     tm *myTime = localtime(&currentTime);
     scan();
     printf("%i\n", myTime->tm_hour);
     if (score >= 5)
     {

          //if score greater than 5............... score
          if (myTime->tm_hour < 12)
          {

               // Time Checker for morning

               if (info.Gender == "%s", "Male" || info.Gender == "%s", "male" || info.Gender == "%s", "M" || info.Gender == "%s", "m")
               {
                    // for male
                    // married
                    if (info.marital_status == "%s", "Married" || info.marital_status == "%s", "married")
                    {
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              man_married_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              man_married_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              man_married_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              man_married_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              man_married_fail();
                         }
                    }
                    else if (info.marital_status == "%s", "Engaged" || info.marital_status == "%s", "engaged")
                    {
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              man_engaged_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              man_engaged_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              man_engaged_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              man_engaged_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              man_engaged_fail();
                         }
                    }
                    else if (info.marital_status == "%s", "Complicated" || info.marital_status == "%s", "complicated")
                    {
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              man_complicated_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              man_complicated_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              man_complicated_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              man_complicated_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              man_complicated_fail();
                         }
                    }
                    else if (info.marital_status == "%s", "Single" || info.marital_status == "%s", "single")
                    {
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              man_single_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              man_single_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              man_single_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              man_single_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              man_single_fail();
                         }
                    }
                    else
                    {
                         // any other input for relationship status
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              man_other_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              man_other_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              man_other_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              man_other_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              man_other_fail();
                         }
                    }
               }
               else if (info.Gender == "%s", "Female" || info.Gender == "%s", "female" || info.Gender == "%s", "F" || info.Gender == "%s", "f")
               {
                    if (info.marital_status == "%s", "Married" || info.marital_status == "%s", "married")
                    {
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              woman_married_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              woman_married_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              woman_married_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              woman_married_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              woman_married_fail();
                         }
                    }
                    else if (info.marital_status == "%s", "Engaged" || info.marital_status == "%s", "engaged")
                    {
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              woman_engaged_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              woman_engaged_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              woman_engaged_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              woman_engaged_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              woman_engaged_fail();
                         }
                    }
                    else if (info.marital_status == "%s", "Complicated" || info.marital_status == "%s", "complicated")
                    {
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              woman_complicated_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              woman_complicated_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              woman_complicated_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              woman_complicated_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              woman_complicated_fail();
                         }
                    }
                    else if (info.marital_status == "%s", "Single" || info.marital_status == "%s", "single")
                    {
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              woman_single_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              woman_single_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              woman_complicated_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              woman_complicated_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              woman_single_fail();
                         }
                    }
                    else
                    {
                         // any other input for relationship status
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              woman_other_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              woman_other_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              woman_other_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              woman_other_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              woman_other_fail();
                         }
                    }
               }
          }
          else if (myTime->tm_hour >= 12)
          {

               // Time Checker for afternoon

               // Time checker for afternoon
               if (info.Gender == "%s", "Male" || info.Gender == "%", "male" || info.Gender == "%s", "M" || info.Gender == "%s", "m")
               {
                    // for male
                    // married
               
                    if (info.marital_status == "%s", "Married" || info.marital_status == "%s", "married")
                    {
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              man_p_married_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              man_p_married_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              man_p_married_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              man_p_married_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              man_p_married_fail();
                         }
                    }
                    else if (info.marital_status == "%s", "Engaged" || info.marital_status == "%s", "engaged")
                    {
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              man_p_engaged_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              man_p_engaged_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              man_p_engaged_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              man_p_engaged_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              man_p_engaged_fail();
                         }
                    }
                    else if (info.marital_status == "%s", "Complicated" || info.marital_status == "%s", "complicated")
                    {
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              man_p_complicated_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              man_p_complicated_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              man_p_complicated_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              man_p_complicated_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              man_p_complicated_fail();
                         }
                    }
                    else if (info.marital_status == "%s", "Single" || info.marital_status == "%s", "single")
                    {
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              man_p_single_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              man_p_single_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              man_p_single_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              man_p_single_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              man_p_single_fail();
                         }
                    }
                    else
                    {
                         // any other input for relationship status
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              man_p_other_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              man_p_other_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              man_p_other_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              man_p_other_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              man_p_other_fail();
                         }
                    }
               }
               else if (info.Gender == "%s", "Female" || info.Gender == "%s", "female" || info.Gender == "%s", "F" || info.Gender == "%s", "f")
               {
                    if (info.marital_status == "%s", "Married" || info.marital_status == "%s", "married")
                    {
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              woman_p_married_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              woman_p_married_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              woman_p_married_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              woman_p_married_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              woman_p_married_fail();
                         }
                    }
                    else if (info.marital_status == "%s", "Engaged" || info.marital_status == "%s", "engaged")
                    {
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              woman_p_engaged_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              woman_p_engaged_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              woman_p_engaged_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              woman_p_engaged_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              woman_p_engaged_fail();
                         }
                    }
                    else if (info.marital_status == "%s", "Complicated" || info.marital_status == "%s", "complicated")
                    {
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              woman_p_complicated_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              woman_p_complicated_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              woman_p_complicated_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              woman_p_complicated_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              woman_p_complicated_fail();
                         }
                    }
                    else if (info.marital_status == "%s", "Single" || info.marital_status == "%s", "single")
                    {
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              woman_p_single_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              woman_p_single_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              woman_p_single_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              woman_p_single_fail();
                         }
                    }
                    else
                    {
                         // any other input for relationship status
                         if (info.Cgpa >= 4.5 && info.Cgpa <= 5.0 && number ==1)
                         {
                              // grade checker
                              woman_p_other_scholar();
                         }
                         else if (info.Cgpa >= 4.0 && info.Cgpa < 4.5 && number ==2)
                         {
                              // grade checker for 4.0
                              woman_p_other_brillant();
                         }
                         else if (info.Cgpa >= 3.0 && info.Cgpa < 4.0 && number ==3)
                         {
                              // grade checker for 3.5
                              woman_p_other_good();
                         }
                         else if (info.Cgpa >= 2.0 && info.Cgpa < 3.0 && number ==4)
                         {
                              // grade checker for 2.0
                              woman_p_other_pass();
                         }
                         else
                         {
                              // grade checker for dropouts
                              woman_p_other_fail();
                         }
                    }
               }

               //! not morning

               //! not motning
          }
          else
          {
               //invalid
               printf("%s", "invalid time and date");
          }

          //score greater than 5
     }
     else
     {
          // !score less than 5

          printf("You are not allowed to to go through the next phase cause you didnt answer all the questions correctly");
          //! score less than 5
     }
     return 0;
}
