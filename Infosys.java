import java.util.Scanner;

public class Infosys{
    private static void finFactors(int num){
        int count = 0;
        for (int i = 1; i <= num; ++i) {
            if (num % i == 0) {
                count++;
            }
        }
        System.out.println(count);
    }
    private static boolean isPrime(int sum){
        int flag = 0;
        for(int i=1;i<=sum;i++){
            if(sum%i==0){
                flag++;
            }
        }
        if (flag==2) {
            return true;
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String instr = sc.nextLine();
        int[] arr = new int[instr.length()];
        int num = 0, j = 0;
        for(int i=0;i<instr.length();i++){
            if(instr.charAt(i)>=48 && instr.charAt(i)<=57){
                num = num*10 + (instr.charAt(i)-48);
            }
            if((instr.charAt(i)==' '||instr.charAt(i)=='\n') && num!=0){
                arr[j] = num;
                num = 0;
                j++;
            }
        }
        int sum = 0;
        if(j==0)
        {
            System.out.println("-1");
            System.exit(0);
        }
        for(int i=0;i<j;i++){
            sum+=(arr[i]%10);
        }
        if(isPrime(sum)){
            System.out.println("prime Found");
            System.exit(0);
        }
        int let = 0,copy = sum;
        while(copy>0){
            let = let*10 + copy%10;
            copy/=10;
        }
        if(isPrime(let)){
            System.out.println("prime Found");
            System.exit(0);
        }
        finFactors(let);
    }
}