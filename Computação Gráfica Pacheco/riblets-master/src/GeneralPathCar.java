import java.awt.*;
import java.awt.geom.*;



/**
* An example for the use of a GeneralPath to draw a car.
*
* @author Frank Klawonn
* Last change 07.01.2005
*/
public class GeneralPathCar extends Frame
{
    private double originX = 40;
    private double originY = 180;
    private double tamAmostra;
    private double alturaRiblet;
    private double anguloRiblet;
    private double distCentros;
    private double distInicio;
  //Constructor
  GeneralPathCar(double tamAmostra, double alturaRiblet, double anguloRiblet, double distCentros, double distInicio)
  {
      this.tamAmostra = tamAmostra;
      this.alturaRiblet = alturaRiblet;
      this.anguloRiblet = anguloRiblet;
      this.distCentros = distCentros;
      this.distInicio = distInicio;
      
    //Enables the closing of the window.
    addWindowListener(new MyFinishWindow());
  }
  
  @Override
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
    

    //Start at the lower front of the car.
    gp.moveTo(originX,originY); 
//    //front underbody
//    //front wheel
    gp.lineTo(originX + distInicio , originY - alturaRiblet);
    //gp.quadTo(originX + distInicio,140,100,120);
//    //middle underbody
//    gp.lineTo(130,120);
//    //rear wheel
//    gp.quadTo(140,140,150,120);
//    //rear underbody
//    gp.lineTo(170,120);
//    //rear
//    gp.lineTo(170,110);
//    
//    gp.lineTo(120,110);
//    
//    gp.lineTo(120,80);
//    
//    gp.lineTo(80,80);
//    
//    gp.lineTo(60,100);
//    
//    gp.lineTo(60,120);
//    
//    gp.moveTo(130, 100);
//    
//    gp.lineTo(130,80);
//    
//    gp.lineTo(300,80);
//    
//    gp.lineTo(300,120);
//    
//    gp.lineTo(280,120);
//    
//    gp.quadTo(270,140,260,120);
//    
//    gp.lineTo(260,120);
//    
//    gp.lineTo(180,120);
//    
//    gp.lineTo(180,100);
//    
//    gp.lineTo(130,100);
//    
//    gp.moveTo(140, 100);
//    
//    gp.lineTo(140,110);
//    
//    gp.moveTo(150, 100);
//    
//    gp.lineTo(150,110);
//    
//    rotation.setToRotation(Math.PI,180,100);
//
//    //Draw the car.
//    g2d.draw(rotation.createTransformedShape(gp));
    g2d.draw(gp);

    g2d.setStroke(new BasicStroke(1.0f));
    //Draw a coordinate system.
    drawSimpleCoordinateSystem(400,-350,g2d);

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
    int yOffset = 200;
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
    for (int i=yOffset; i>=ymax; i=i-step)
    {
      g2d.drawLine(xOffset-2,i,xOffset+2,i);
      if (i>99){s="";}
      
      g2d.drawString(s+String.valueOf(i),xOffset-25,i+5);
    }

    //Reset to the original font.
    g2d.setFont(fo);
  }

}
