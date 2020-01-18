#include <main.h>

void InitOut(void);
void MovePoz(void);

char ExpandX(void);
char ExpandY(void);
char ExpandZ(void);

char ComplressX(void);
char ComplressY(void);
char ComplressZ(void);

void main()
{

   // Initialization all peripherials
   InitOut();
   while(TRUE)
   {
      MovePoz();
      delay_ms(DELAY);
   }

}


void InitOut(void)
{
   output_low(Fz1);
   output_low(Fz2);
   output_low(Fz3);
   output_low(Fx1);
   output_low(Fx2);
   output_low(Fx3);
   output_low(Fy1);
   output_low(Fy2);
   output_low(Fy3);
}


void MovePoz(void)
{
   static int i16_State = 0;

   switch (i16_State)
   {
      case 0:
         if (1 == ExpandY())
            i16_State++;
         break;
   
      case 1:
         if (1 == ExpandZ())
            i16_State++;
         break;
         
      case 2:
         if (1 == ComplressZ())
            i16_State++;
         break;
   
      case 3:
         if (1 == ComplressY())
            i16_State++;
         break;
         
      case 4:
         if (1 == ExpandY())
            i16_State++;
         break;
   
      case 5:
         if (1 == ExpandZ())
            i16_State++;
         break;
         
      case 6:
         if (1 == ExpandX())
            i16_State++;
         break;
   
      case 7:
         if (1 == ComplressX())
            i16_State++;
         break;
         
      case 8:
         if (1 == ComplressZ())
            i16_State++;
         break;
   
      case 9:
         if (1 == ComplressY())
            i16_State++;
         break;
         
      case 10:
         if (1 == ExpandX())
            i16_State++;
         break;
   
      case 11:
         if (1 == ExpandZ())
            i16_State++;
         break;
         
      case 12:
         if (1 == ComplressZ())
            i16_State++;
         break;
   
      case 13:
         if (1 == ComplressX())
            i16_State++;
         break;
         
      case 14:
         if (1 == ExpandX())
            i16_State++;
         break;
         
      case 15:
         if (1 == ComplressX())
            i16_State++;
         break;
            
      default:
         break;
   }
   
   if (i16_State >= 16)
      i16_State = 0;
}

char ExpandX(void)
{
   static int i16_Poziton = 0;

   switch (i16_Poziton)
   {
   case 0:
         output_high(Fx1);
         break;
   
      case 1:
         output_low(Fx1);
         break;
         
      case 2:
         output_high(Fx2);
         break;
   
      case 3:
         output_low(Fx2);
         break;
         
      case 4:
         output_high(Fx3);
         break;
   
      case 5:
         output_low(Fx3);
         break;
         
      default:
         break;
   }
   if (i16_Poziton >= 5)
   {
      i16_Poziton = 0;
      return 1;
   }
   else
   {
      i16_Poziton++;
      return 0;
   }

}

char ExpandY(void)
{
   static int i16_Poziton = 0;

   switch (i16_Poziton)
   {
   case 0:
         output_high(Fy1);
         break;
   
      case 1:
         output_low(Fy1);
         break;
         
      case 2:
         output_high(Fy2);
         break;
   
      case 3:
         output_low(Fy2);
         break;
         
      case 4:
         output_high(Fy3);
         break;
   
      case 5:
         output_low(Fy3);
         break;
         
      default:
         break;
   }
   if (i16_Poziton >= 5)
   {
      i16_Poziton = 0;
      return 1;
   }
   else
   {
      i16_Poziton++;
      return 0;
   }

}

char ExpandZ(void)
{
   static int i16_Poziton = 0;

   switch (i16_Poziton)
   {
   case 0:
         output_high(Fz1);
         break;
   
      case 1:
         output_low(Fz1);
         break;
         
      case 2:
         output_high(Fz2);
         break;
   
      case 3:
         output_low(Fz2);
         break;
         
      case 4:
         output_high(Fz3);
         break;
   
      case 5:
         output_low(Fz3);
         break;
         
      default:
         break;
   }
   if (i16_Poziton >= 5)
   {
      i16_Poziton = 0;
      return 1;
   }
   else
   {
      i16_Poziton++;
      return 0;
   }

}



char ComplressX(void)
{
static int i16_Poziton = 0;

   switch (i16_Poziton)
   {
   case 0:
         output_high(Fx3);
         break;
   
      case 1:
         output_low(Fx3);
         break;
         
      case 2:
         output_high(Fx2);
         break;
   
      case 3:
         output_low(Fx2);
         break;
         
      case 4:
         output_high(Fx1);
         break;
   
      case 5:
         output_low(Fx1);
         break;
         
      default:
         break;
   }
   if (i16_Poziton >= 5)
   {
      i16_Poziton = 0;
      return 1;
   }
   else
   {
      i16_Poziton++;
      return 0;
   }


}

char ComplressY(void)
{
static int i16_Poziton = 0;

   switch (i16_Poziton)
   {
   case 0:
         output_high(Fy3);
         break;
   
      case 1:
         output_low(Fy3);
         break;
         
      case 2:
         output_high(Fy2);
         break;
   
      case 3:
         output_low(Fy2);
         break;
         
      case 4:
         output_high(Fy1);
         break;
   
      case 5:
         output_low(Fy1);
         break;
         
      default:
         break;
   }
   if (i16_Poziton >= 5)
   {
      i16_Poziton = 0;
      return 1;
   }
   else
   {
      i16_Poziton++;
      return 0;
   }


}

char ComplressZ(void)
{
static int i16_Poziton = 0;

   switch (i16_Poziton)
   {
   case 0:
         output_high(Fz3);
         break;
   
      case 1:
         output_low(Fz3);
         break;
         
      case 2:
         output_high(Fz2);
         break;
   
      case 3:
         output_low(Fz2);
         break;
         
      case 4:
         output_high(Fz1);
         break;
   
      case 5:
         output_low(Fz1);
         break;
         
      default:
         break;
   }
   if (i16_Poziton >= 5)
   {
      i16_Poziton = 0;
      return 1;
   }
   else
   {
      i16_Poziton++;
      return 0;
   }


}
