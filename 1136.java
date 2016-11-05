import java.util.*;
import java.math.*;


public class Main{
    public static void main(String[] args){
	Scanner scanner = new Scanner(System.in);
	
	while(scanner.hasNext()){
	    int n = scanner.nextInt();
	    int m = scanner.nextInt();
	    
	    if(n == 0 && m == 0){
		return;
	    }
	  
	    ArrayList<Integer> l = new ArrayList<>(m);
	    int aux = 0;
	    for (int i = 0; i < m; i++){
		aux = scanner.nextInt();
		l.add(aux);
	    }
	  
	    System.out.println(possible(n, l));   
	}
    }
    
    static String possible(int n, ArrayList<Integer> l){
	int len = l.size();
	HashSet<Integer> set = new HashSet<>();
	
	for(int i = 0; i < len; i++){
	    for(int j = i+1; j < len; j++){
		set.add(Math.abs(l.get(i) - l.get(j)));
	    } 
	}
	
	for(int i = 1; i<=n; i++){
	    if(!set.contains(i)){
		return "N";
	    }
	}
	
	return "Y";
    }
}
