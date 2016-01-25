import java.io.*;
import java.util.*;

public class typecheck {

	public static String checkType(String inp) {

		int i;
		double f;
		
		try {

			f = Double.parseDouble(inp);
			i = (int) f;

			if (i == f) {
				return "Primitive : int";
			}

			return "Primitive : double";
		}

		catch(NumberFormatException e) {

			if (inp.length() == 1) {
				return "Primitive : char";
			}

			else if (inp == "true" || inp == "false") {
				return "Primitive : boolean";
			}

			return "Referenced : String";
		}
	}


    public static void main(String[] args) {
    
    	String HR_INP[] = {"5.35", "a", "false", "100", "I am a code monkey", "true", "17.3", "c", "derp"};
      	
      	for (int i = 0; i < 9; i++) {

      		String res = checkType(HR_INP[i]);
      		System.out.println(res);
      	}
    }
}
