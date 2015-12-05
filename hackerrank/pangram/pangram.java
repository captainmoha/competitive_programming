package javatest1;

import java.util.Scanner;
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

import java.util.HashMap;
import java.util.Map;
import java.util.Iterator;
import java.util.Set;

class Pangram {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String S = input.next();
        S = S.toLowerCase();

        Dictionary<Character, Integer> alphabet = new Hashtable<Character, Integer>();

        alphabet.put('a', 0);
        alphabet.put('b', 0);
        alphabet.put('c', 0);
        alphabet.put('d', 0);
        alphabet.put('e', 0);
        alphabet.put('f', 0);
        alphabet.put('g', 0);
        alphabet.put('h', 0);
        alphabet.put('i', 0);
        alphabet.put('j', 0);
        alphabet.put('k', 0);
        alphabet.put('l', 0);
        alphabet.put('m', 0);
        alphabet.put('n', 0);
        alphabet.put('o', 0);
        alphabet.put('p', 0);
        alphabet.put('q', 0);
        alphabet.put('r', 0);
        alphabet.put('s', 0);
        alphabet.put('t', 0);
        alphabet.put('u', 0);
        alphabet.put('v', 0);
        alphabet.put('w', 0);
        alphabet.put('x', 0);
        alphabet.put('y', 0);
        alphabet.put('z', 0);
            
        for (int index = 0; index < S.length(); index++) {
            char current = S.charAt(index);

        }
            
    }
}