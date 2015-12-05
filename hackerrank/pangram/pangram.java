// package javatest1;

import java.io.*;
import java.util.*;


class Main {

    public static void main(String[] args) {

        // get the input
        Scanner input = new Scanner(System.in);
        String S = input.nextLine();
        S = S.toLowerCase();

        // create a hastable with chars as keys and ints as values
        Map<Character, Integer> alphabet = new Hashtable<Character, Integer>();

        // fill the map with letters as keys and 0 as values
        for (int j = 0; j < 26; j++) {

            alphabet.put(((char)(j + 97)), 0);    // 97 is a in ascii
        }

        // go through the input string 
        for (int index = 0; index < S.length(); index++) {
            char current = S.charAt(index);

            // check if the current char has a corresponding key in the map
            if (alphabet.get(current) != null) {

                // increment the pair which has the key
                alphabet.put(current, alphabet.get(current) + 1);
            }

        }

        // go through the map
        for (char key : alphabet.keySet()) {

            // if one of the letters didn't occur in the string then it's over and the verdict is that it's not a pangram
            if (alphabet.get(key) < 1) {
                System.out.println("Input string is not a pangram");
                return;
            }
        }

        // if it survives the loop then it's all good
        System.out.println("Input string is a pangram");
            
    }
}
