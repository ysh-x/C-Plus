import java.lang.*;
import java.util.*;
import java.io.*;

class FileCount {
     public static void main(String arg[]) {
          try {
          int iterate = 0, iterateString = 0, max = 1;
          List <String>  words = new ArrayList<> ();
          List<Character> tempWords = new ArrayList <>();

          FileReader file = new FileReader("File.txt");
          
          int i;
          while((i=file.read())!= -1) {
               if((char)i == ' ') {
                    StringBuilder sb = new StringBuilder();

                    for(Character c : tempWords) {
                         sb.append(c);
                    }
                    words.add(sb.toString());
                    tempWords.clear();
               }
               else {
                    tempWords.add((char)i);
               }


          }

          System.out.println("Word" + "\t:\t" + "Occurances");

          for(String auto : words) {
               int occurances = Collections.frequency(words, auto);
               if(occurances > 2  && max <= 3) {
                    max++;
                   System.out.println(auto + "\t:\t" + occurances);
               }
          }
     } catch(Exception E) {
          E.printStackTrace();
     }
     }
}