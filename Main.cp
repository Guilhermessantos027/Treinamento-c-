// Online C# compiler (editor) for free
// Write and run C# online using this editor.

using System;

public class HelloWorld {
    public static void Main(string[] args) {
       Humano Guilherme=new Humano();
        Humano Gabriel=new Humano();
        Comida Sucrilhos=new Comida();
        Comida pao=new Comida();
        Sucrilhos.aumentarVida(10);
        pao.aumentarVida(5);
        Guilherme.Falar();
            Guilherme.Comer(Sucrilhos.(10));
        Guilherme.Andar(null,5);
        Gabriel.Andar(20)
    }
}

public class Humano{
    int vida=100;
    int fome=100;
    private void Tiraravidadojogador(int dano){
        vida-=dano;

    }
    private void Falar(){
        console.WriteLine ("Tenho "+fome +"de fome"+"tenho" +vida +"de vida");
        
    }
    private void Andar(int metros,int km){
        if(metros!=null){
              fome=metros-fome;
        } else{
              fome=km-fome;
        }
        
    }
    private void Comer (int comida){
        
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
