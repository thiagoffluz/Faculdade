import java.awt.*;
import java.awt.geom.*;
import java.lang.System.Logger;
import java.lang.System.Logger.Level;
import java.util.concurrent.TimeUnit;

/**
* An example for the use of a GeneralPath to draw a car.
*
* @author Frank Klawonn
* Last change 07.01.2005
*/
public class GeneralPathCar extends Frame
{
  //Constructor
  GeneralPathCar()
  {
    //Enables the closing of the window.
    addWindowListener(new MyFinishWindow());
  }


  public void paint(Graphics g)
  {
    Graphics2D g2d = (Graphics2D) g;

    //Use of antialiasing to have nicer lines.
    g2d.setRenderingHint(RenderingHints.KEY_ANTIALIASING,RenderingHints.VALUE_ANTIALIAS_ON);

    //The lines should have a thickness of 3.0 instead of 1.0.
    BasicStroke bs = new BasicStroke(3.0f);
    g2d.setStroke(bs);

    //The GeneralPath to decribe the car.
    GeneralPath gp = new GeneralPath();
    GeneralPath gp2 = new GeneralPath();
    
    //GUITARRA
    /*
    gp.moveTo(50, 80);
    gp.lineTo(90, 120);
    gp.lineTo(50, 160);
    gp.lineTo(140, 125);
    gp.moveTo(50, 80);
    gp.lineTo(140, 115);
    gp.lineTo(250, 115);
    gp.moveTo(140, 125);
    gp.lineTo(250, 125);
    gp.lineTo(280, 134);
    gp.lineTo(265, 120);
    gp.lineTo(280, 106);
    gp.lineTo(250, 115);
    */
    
    //BARCO
    /*
    gp.moveTo(150,250);//comeco
    gp.lineTo(165, 310);//linha reta atras
    gp.lineTo(450, 310);//linha reta de baixo do casco
    gp.quadTo(480,310,500,250);//curva de baixo casco
    gp.quadTo(320,260,150,250);//curva de cima do casco
    gp.moveTo(390,253);
    gp.lineTo(380, 220);//linha maior da parte superior
    gp.lineTo(370, 210);//pequena inclinação da parte superior
    gp.lineTo(220, 210);//teto
    gp.quadTo(190,210,190,252);//curvatura da parte de tras do teto
    gp.moveTo(310,210);
    gp.lineTo(300, 140);//linha inclinada da direita do mastro
    gp.lineTo(270, 140);//linha reta de cima do mastro
    gp.lineTo(270, 210);//linha reta de tras do mastro
    //gp.lineTo(304, 190);//primeiro trinagulo de baixo
    //gp.lineTo(270, 190);//linha de cima do primeiro triangulo
    //gp.moveTo(304,190);
    //gp.lineTo(270,210);
*/    
    
    //AVIAO 1
/*
    gp.moveTo(110,100);
    gp.lineTo(80,130);
    gp.lineTo(80,145);
    gp.lineTo(110,145);
    gp.lineTo(110,175);
    gp.lineTo(100,190);
    gp.lineTo(120,190);
    gp.lineTo(126,190);
    gp.lineTo(136,190);
    gp.lineTo(126,175);
    gp.lineTo(126,145);
    gp.lineTo(156,145);
    gp.lineTo(156,130);
    gp.lineTo(126,100);
    gp.quadTo(118,50,110,100);
*/

    //AVIAO 2

    //Asa de cima parte traseira
    gp.moveTo(190,150);
    gp.lineTo(220,220);//linha maior
    gp.lineTo(225,250);//linha menor
    //Corpo parte de cima
    gp.quadTo(150,250,110,260);
    //Cauda
    gp.lineTo(80,230);//primeira linha
    gp.lineTo(70,230);//linha reta de cima
    gp.lineTo(85,270);//primeira linha de tras 
    gp.lineTo(70,310);// segunda linha de tras
    gp.lineTo(80,310);//linha reta de baixo
    gp.lineTo(110,280);//ultima linha
    //Corpo parte de baixo
    gp.quadTo(185,290,225,290);
    //Asa de baixo parte traseira
    gp.lineTo(220,320);//linha menor
    gp.lineTo(190,390);//linha maior
    //Asa de baixo parte dianteira
    gp.lineTo(205,390);//linha reta
    gp.lineTo(270,290);//linha diagonal maior
    //Bico
    gp.quadTo(440,270,270,250);
    //Asa de cima parte frontal
    gp.lineTo(205,150);//linha diagonal maior
    gp.lineTo(190,150);//linha reta

 
    
    
    
    
    
    
    
/* //CARRO
    //Start at the lower front of the car.
    gp.moveTo(60,120);
    //front underbody
    gp.lineTo(80,120);
    //front wheel
    gp.quadTo(90,140,100,120);
    //middle underbody
    gp.lineTo(160,120);
    //rear wheel
    gp.quadTo(170,140,180,120);
    //rear underbody
    gp.lineTo(200,120);
    //rear
    gp.curveTo(195,100,200,80,160,80);
    //roof
    gp.lineTo(110,80);
    //windscreen
    gp.lineTo(90,100);
    //bonnet
    gp.lineTo(60,100);
    //front
    gp.lineTo(60,120);
*/
    //Draw the car.
    g2d.draw(gp);
    drawSimpleCoordinateSystem(1000,1000,g2d);
    
    try{
        TimeUnit.SECONDS.sleep(2);
    } catch (InterruptedException ex) {
          java.util.logging.Logger.getLogger(GeneralPathCar.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
      }
   
    g2d.clearRect(10,10,500,500);
    
    AffineTransform rotation = AffineTransform.getRotateInstance(20 , 200 , 250 );
    gp.transform(rotation);
    
    g2d.draw(rotation.createTransformedShape(gp));
   
 
    
        
      
        
        
        


    g2d.setStroke(new BasicStroke(1.0f));
    //Draw a coordinate system.
    drawSimpleCoordinateSystem(1000,1000,g2d);

  }



  /**
  * Draws a coordinate system (according to the window coordinates).
  *
  * @param xmax     x-coordinate to which the x-axis should extend.
  * @param ymax     y-coordinate to which the y-axis should extend.
  * @param g2d      Graphics2D object for drawing.
  */
  public static void drawSimpleCoordinateSystem(int xmax, int ymax,
                                                Graphics2D g2d)
  {
    int xOffset = 30;
    int yOffset = 50;
    int step = 20;
    String s;
    //Remember the actual font.
    Font fo = g2d.getFont();
    //Use a small font.
    g2d.setFont(new Font("sansserif",Font.PLAIN,9));
    //x-axis.
    g2d.drawLine(xOffset,yOffset,xmax,yOffset);
    //Marks and labels for the x-axis.
    for (int i=xOffset+step; i<=xmax; i=i+step)
    {
      g2d.drawLine(i,yOffset-2,i,yOffset+2);
      g2d.drawString(String.valueOf(i),i-7,yOffset-7);
    }

    //y-axis.
    g2d.drawLine(xOffset,yOffset,xOffset,ymax);

    //Marks and labels for the y-axis.
    s="  "; //for indention of numbers < 100
    for (int i=yOffset+step; i<=ymax; i=i+step)
    {
      g2d.drawLine(xOffset-2,i,xOffset+2,i);
      if (i>99){s="";}
      g2d.drawString(s+String.valueOf(i),xOffset-25,i+5);
    }

    //Reset to the original font.
    g2d.setFont(fo);
  }


   public static void main(String[] argv)
  {
    GeneralPathCar f = new GeneralPathCar();
    f.setTitle("GeneralPath example");
    f.setSize(1000,1000);
    f.setVisible(true);
  }
}
