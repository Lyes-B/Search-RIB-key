 /**
  * Search RIB key
  * Made for educational purpose
  *
  *  Copyright (c) 2015-2016 Lyes Belhadj
  *
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  *    http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[])
{
    int bank_code = 0, guichet_code = 0, account_num1 = 0, account_num2 = 0, key_rib = 0;

    printf("Program for find the RIB key - programming by Lyes Belhadj\n");

    printf("\nEnter bank code: ");
    scanf("%d", &bank_code);

    printf("\nEnter guichet code: ");
    scanf("%d", &guichet_code);

    printf("\nEnter the first part of number account (it's the five number of number account): ");
    scanf("%d", &account_num1);

    printf("\nEnter the second part of number account (it's the six fallowing number of number account): ");
    scanf("%d", &account_num2);

    key_rib = 97 - (89 * bank_code + 15 * guichet_code + 81 * account_num1 + 3 * account_num2) % 97;

    printf("The key of RIB is: %d", key_rib);



    return 0;
}
