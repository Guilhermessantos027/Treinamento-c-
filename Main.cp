// Online C# compiler (editor) for free
// Write and run C# online using this editor.

using System;

public class HelloWorld {
    public static void Main(string[] args) {
       Humano Guilherme=new Humano();
        Humano Gabriel=new Humano();
        Comida Sucrilhos=new Comida();
        Sucrilhos.NomearComida("Sucrilhos");
        Comida pao=new Comida();
        pao.NomearComida("pao");
        Sucrilhos.DarValorComida(10);
        pao.DarValorComida(5);
        Guilherme.Falar();
        Guilherme.Comer(Sucrilhos.RetornarValorComida());
        Guilherme.Andar(5,2);
        Gabriel.Andar(20,3);
         Guilherme.Falar();
        Guilherme.Comer(pao.RetornarValorComida());
    }
}

public class Humano{
    int vida=100;
    int fome=100;
    private void Tiraravidadojogador(int dano){
        vida-=dano;

    }
    public void Falar(){
        Console.WriteLine ("Tenho "+fome +" de fome"+" tenho " +vida +" de vida");
        
    }
    public void Andar(int metros,int km){
        if(metros!=null){
              fome=metros-fome;
        } else{
              fome=km-fome;
        }
        
    }
    public void Comer (int comida){
        
        fome= fome+comida;
    }
}
public class Comida{
    int aumentarVida;
    string nomeDaComida;
    
    public int RetornarValorComida(){
        return aumentarVida;
    }
    public void DarValorComida(int valor){
      aumentarVida=valor;
        
    }
    public void NomearComida(string nomeDado){
        nomeDaComida=nomeDado;
        
    }
}
