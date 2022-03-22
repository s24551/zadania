package com.company;



public class MyCircle {
    static double radius;

    public MyCircle (double radius){
        this.radius = radius;
    }

    public static double Obw (){
        return 2*Math.PI*radius;

    }

    public static double Pol (){
        return Math.PI*Math.pow(radius,2);

    }

    public static double D (){
        return radius*2;

    }



    //Math.PI
}
