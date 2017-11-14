#include<stdio.h>
int year;
#define daysTilAugExptFeb 215

char OfficialCalendar(){
  char officialCalendar;
  if (year >= 1919)
    officialCalendar = 'G';
  else if (year <= 1917)
    officialCalendar = 'J';
  else {
    officialCalendar = 'X';
  }
  return officialCalendar;
}

int DaysInFeb(){
  char cal = OfficialCalendar();
  int isLeap = 0;
  if ((year % 4) == 0) {
    if ((year % 400) == 0)
      isLeap = 1;
    else if ((year % 100) == 0){
      if (cal == 'J')
        isLeap = 1;
    }
    else
      isLeap = 1;
  }
  if (cal == 'X') {
    return 15; // from 14th feb to 28th feb. 28 because, 1918 is not a leap year.
  }
  return isLeap ? 29 : 28;
}

int main(){
  int date;
  char *resultDate;
  scanf("%d",&year);
  date = 256 - daysTilAugExptFeb - DaysInFeb();
  snprintf(resultDate,"%2d.09.%d",date,year);
  printf("%s\n",resultDate);
}
