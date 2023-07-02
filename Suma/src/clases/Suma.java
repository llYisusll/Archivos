/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package clases;

import java.util.Scanner;

/**
 *
 * @author Jesús
 */
public class Suma {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        int numero1 = 0;
        int numero2 = 0;
        System. out. println("Introduce el primer numero:");
        numero1 = reader.nextInt();
        System. out. println("Introduce el segundo numero:");
        numero2 = reader.nextInt();
        int resultado = numero1+numero2;
        System.out.println("La suma es " + numero1 + " + " + numero2 + " = " + resultado);
    }
}
