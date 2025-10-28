
import javax.swing.*;
import java.awt.*;
import java.awt.geom.GeneralPath;

public class GeneralPathCar extends JPanel {

    private double tamanhoAmos;
    private double alturaRib;
    private double angulo;
    private double distCentro;
    private double distPrimeiro;

    public GeneralPathCar(double tamanhoAmos, double alturaRib, double angulo, double distCentro, double distPrimeiro) {
        this.tamanhoAmos = tamanhoAmos;
        this.alturaRib = alturaRib;
        this.angulo = angulo;
        this.distCentro = distCentro;
        this.distPrimeiro = distPrimeiro;
        setPreferredSize(new Dimension(500, 500));
        setBackground(Color.WHITE);
    }

    public void atualizarValores(double tamanhoAmos, double alturaRib, double angulo, double distCentro, double distPrimeiro) {
        this.tamanhoAmos = tamanhoAmos;
        this.alturaRib = alturaRib;
        this.angulo = angulo;
        this.distCentro = distCentro;
        this.distPrimeiro = distPrimeiro;
        repaint();
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        desenharRiblet((Graphics2D) g);
    }

    private void desenharRiblet(Graphics2D g2d) {
        g2d.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        BasicStroke bs = new BasicStroke(3.0f);
        g2d.setStroke(bs);
        GeneralPath gp = new GeneralPath();

        gp.moveTo(30, 470);
        gp.lineTo(tamanhoAmos, 470);

        double lateral = alturaRib / Math.sin(angulo);
        double base = Math.abs(lateral) / 2;
        double centro;

        gp.moveTo(distPrimeiro, 470);
        gp.lineTo(gp.getCurrentPoint().getX() + base, 470);
        gp.lineTo(gp.getCurrentPoint().getX() - (base / 2), 470 - alturaRib);
        centro = (int) gp.getCurrentPoint().getX();
        gp.lineTo(gp.getCurrentPoint().getX() - (base / 2), gp.getCurrentPoint().getY() + alturaRib);

        for (int aux = 0; aux <= tamanhoAmos; aux++) {
            gp.moveTo(aux, 500);
            if (aux == (centro + distCentro)) {
                gp.moveTo(gp.getCurrentPoint().getX() - (base / 2), 470);
                gp.lineTo(gp.getCurrentPoint().getX() + base, 470);
                gp.lineTo(gp.getCurrentPoint().getX() - (base / 2), 470 - alturaRib);
                centro = (int) (gp.getCurrentPoint().getX());
                gp.lineTo(gp.getCurrentPoint().getX() - (base / 2), gp.getCurrentPoint().getY() + alturaRib);
            }
        }
        g2d.draw(gp);

        g2d.setColor(new Color(0, 0, 0));
        g2d.setStroke(new BasicStroke(1.0f));

        drawSimpleCoordinateSystem(1500, 1000, g2d);

    }

    public static void drawSimpleCoordinateSystem(int x, int y, Graphics2D g2d) {
        int xOffset = 30;
        int yOffset = 50;
        int step = 20;
        String s;
        Font fo = g2d.getFont();
        g2d.setFont(new Font("sansserif", Font.PLAIN, 9));
        g2d.drawLine(xOffset, yOffset, x, yOffset);
        for (int i = xOffset + step; i <= x; i = i + step) {
            g2d.drawLine(i, yOffset - 2, i, yOffset + 2);
            g2d.drawString(String.valueOf(i), i - 7, yOffset - 7);
        }

        g2d.drawLine(xOffset, yOffset, xOffset, y);

        s = "  ";
        for (int i = yOffset + step; i <= y; i = i + step) {
            g2d.drawLine(xOffset - 2, i, xOffset + 2, i);
            if (i > 99) {
                s = "";
            }
            g2d.drawString(s + String.valueOf(i), xOffset - 25, i + 5);
        }

        g2d.setFont(fo);
    }

}
