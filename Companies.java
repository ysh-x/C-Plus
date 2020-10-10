import java.util.*;

class NotElegibleException extends Exception {
     NotElegibleException(String s) {
          super(s);
     }
}

interface Elegible {
    void elegible (float GPA, int backlogs);
}
class Wipro implements Elegible  {
     public void elegible(float GPA, int backlogs) throws NotEligibleException {
          if (GPA > 7.0 && backlogs <= 2) {
               System.out.println("You are eligible to apply in Wipro");
          } else {
               throw new NotEligibleException("You are not elegible to apply for the company");
          }

     }
     

}

class IBM implements Elegible{
        public void elegible(float GPA, int backlogs) throws NotEligibleException {
          if (GPA > 8.0 && backlogs == 0) {
               System.out.println("You are eligible to apply in IBM");
          } else {
               throw new NotEligibleException("You are not elegible to apply for the company");
          }

     }

}

class TCS implements Elegible{
        public void elegible (float GPA, int backlogs) throws NotEligibleException{
             if (GPA >=6.0  && backlogs <=1 ) {
                  System.out.println("You are eligible to apply in TCS");
             } else {
                  throw new NotEligibleException("You are not elegible to apply for the company");
             }
          
     }

}

class Google implements Elegible{
       public void elegible (float GPA, int backlogs) throws NotEligibleException {
             if (GPA > 9.0 && backlogs == 0) {
                  System.out.println("You are eligible to apply in Google");
             } else {
                  throw new NotEligibleException("You are not elegible to apply for the company");
             }
          
     }

}

class Companies {
     public static void main (String arg[]) {
          Scanner in = new Scanner (System.in);

          float GPA;
          int backlogs,x;
          
          System.out.println("Recruitment \n Avalaible Companies\n\n1.Wipro\n2.IBM\n3.TCS\n4.Google");
          System.out.println("Choose the company (1 - 4)");
          x = in.nextInt();
          System.out.println("GPA  :");
          GPA = in.nextFloat();
          System.out.println("Number of Backlogs  :");
          backlogs = in.nextInt();

          try {
               switch(x) {
                    case 1: {
                         Wipro W = new Wipro();
                         W.elegible(GPA, backlogs);
                         break;
                         }
                    case 2:  {
                         IBM I = new IBM();
                         I.elegible(GPA, backlogs);
                         break;
                    }
                    case 3:  {
                         TCS T = new TCS();
                         T.elegible(GPA, backlogs);
                         break;
                    }
                    case 4: {
                         Google G = new Google();
                         G.elegible(GPA, backlogs);
                         break;
                    }
                    default: 
                         System.out.println("Invalid Company Selected");

               }    

          }
     catch(Exception e) {
          System.out.println("Exception Occured   : "+e);
     }
     }
}