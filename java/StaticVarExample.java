class StaticVarExample {
    public static String myClassVar="class or static variable";
    String myClassVar1="instance variable";
     
    public static void main(String args[]){
       StaticVarExample obj = new StaticVarExample();
       StaticVarExample obj2 = new StaticVarExample();
       StaticVarExample obj3 = new StaticVarExample();
       StaticVarExample obj4 = new StaticVarExample();
       StaticVarExample obj5 = new StaticVarExample();
       StaticVarExample obj6 = new StaticVarExample();
       
       //All three will display "class or static variable"
       System.out.println(obj.myClassVar);
       System.out.println(obj2.myClassVar);
       System.out.println(obj3.myClassVar);
       
       System.out.println(obj4.myClassVar1);
       System.out.println(obj5.myClassVar1);
       System.out.println(obj6.myClassVar1);

       obj3.myClassVar = "Changed";
       System.out.println(StaticVarExample.myClassVar);
       //changing the value of static variable using obj2
       obj5.myClassVar1 = "Changed Text";
 
       //All three will display "Changed Text"
       System.out.println(obj.myClassVar);
       System.out.println(obj2.myClassVar);
       System.out.println(obj3.myClassVar);

       System.out.println(obj4.myClassVar1);
       System.out.println(obj5.myClassVar1);
       System.out.println(obj6.myClassVar1);

    }
 }