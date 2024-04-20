import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;

public class practice {

    public static void main(String[] args){

        int  arr[] = {12,5,787,1,23,34523,523,42,3423,4234,234,234,23,423,423,4,234,24,2,42,342,342,4,1241241,};
        Arrays.sort(arr);
        ArrayList<Integer>ans = new ArrayList<>();

        int k = 5;
        for(int i= arr.length-1;i>k;i--){

            ans.add(arr[i]);
        }
        System.out.println(ans);
    }
}