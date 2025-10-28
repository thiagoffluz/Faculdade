import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.geom.GeneralPath;

public class GeneralPathCar extends JFrame {

    private JTextField txtFldLargura;
    private JTextField txtFldAltura;
    private JTextField txtFldDistanciaEntreRiblets;
    private JTextField txtFldDistanciaPrimeiro;
    private JTextField txtFldTamanho;

    public GeneralPathCar() {
        // Configuração da interface gráfica
        setTitle("Riblet Drawing App");
        setLayout(new GridLayout(6, 2));

        // Campos de texto e seus rótulos
        add(new JLabel("Ângulo:"));
        txtFldLargura = new JTextField();
        add(txtFldLargura);

        add(new JLabel("Altura:"));
        txtFldAltura = new JTextField();
        add(txtFldAltura);

        add(new JLabel("Distância entre Riblets:"));
        txtFldDistanciaEntreRiblets = new JTextField();
        add(txtFldDistanciaEntreRiblets);

        add(new JLabel("Distância do Primeiro:"));
        txtFldDistanciaPrimeiro = new JTextField();
        add(txtFldDistanciaPrimeiro);

        add(new JLabel("Tamanho:"));
        txtFldTamanho = new JTextField();
        add(txtFldTamanho);

        JButton btnDesenhar = new JButton("Desenhar");
        btnDesenhar.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent evt) {
                btnDesenharActionPerformed(evt);
            }
        });
        add(btnDesenhar);

        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    private void btnDesenharActionPerformed(ActionEvent evt) {
        if (txtFldLargura.getText().trim().isEmpty() ||
            txtFldAltura.getText().trim().isEmpty() ||
            txtFldDistanciaEntreRiblets.getText().trim().isEmpty() ||
            txtFldDistanciaPrimeiro.getText().trim().isEmpty() ||
            txtFldTamanho.getText().trim().isEmpty()) {

            String[] opcoes = {"Fechar"};
            JOptionPane.showOptionDialog(null,
                "Por favor preencha todos os campos!", "Campos em branco",
                JOptionPane.DEFAULT_OPTION, JOptionPane.WARNING_MESSAGE, null, opcoes, opcoes[0]);
        } else {
            int tamanho = Integer.parseInt(txtFldTamanho.getText());
            int largura = Integer.parseInt(txtFldLargura.getText());
            int distanciaDR0 = Integer.parseInt(txtFldDistanciaPrimeiro.getText());
            if (tamanho < (distanciaDR0 + largura / 2)) {
                String[] opcoes = {"Fechar"};
                JOptionPane.showOptionDialog(null,
                    "O tamanho (T) deve ser maior que a soma entre: a distância do primeiro Riblet (DR0) e a metade da largura (L) do Riblet!",
                    "Erro tamanho T", JOptionPane.DEFAULT_OPTION, JOptionPane.WARNING_MESSAGE, null, opcoes, opcoes[0]);
                txtFldTamanho.setText("");
            } else {
                int distanciaRB = Integer.parseInt(txtFldDistanciaEntreRiblets.getText());
                if (distanciaRB <= largura / 2) {
                    String[] opcoes = {"Fechar"};
                    JOptionPane.showOptionDialog(null, "A distância entre os centros do Riblet (DR) deve ser maior que a largura (L) do Riblet!",
                        "Erro tamanho DR", JOptionPane.DEFAULT_OPTION, JOptionPane.WARNING_MESSAGE, null, opcoes, opcoes[0]);
                    txtFldDistanciaEntreRiblets.setText("");
                } else {
                    int altura = Integer.parseInt(txtFldAltura.getText());
                    double angulo = Math.toRadians(Double.parseDouble(txtFldLargura.getText()));

                    // Criar a janela de desenho com os parâmetros
                    JFrame frame = new JFrame("Desenho dos Riblets em 2D");
                    frame.setSize(800, 600);
                    frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
                    frame.add(new DrawingPanel(tamanho, altura, distanciaRB, distanciaDR0, angulo));
                    frame.setVisible(true);
                }
            }
        }
    }

    public static void main(String[] args) {
        new GeneralPathCar();
    }
}

class DrawingPanel extends JPanel {

    private int tamanhoAmos;
    private int alturaRib;
    private int distCentro;
    private int distPrimeiro;
    private double angulo;

    public DrawingPanel(int tamanhoAmos, int alturaRib, int distCentro, int distPrimeiro, double angulo) {
        this.tamanhoAmos = tamanhoAmos;
        this.alturaRib = alturaRib;
        this.distCentro = distCentro;
        this.distPrimeiro = distPrimeiro;
        this.angulo = angulo;
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        Graphics2D g2d = (Graphics2D) g;

        g2d.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);

        BasicStroke bs = new BasicStroke(3.0f);
        g2d.setStroke(bs);

        GeneralPath gp = new GeneralPath();

        // Linha da Base
        gp.moveTo(30, 500);
        gp.lineTo(tamanhoAmos, 500);

        double lateral = alturaRib / Math.sin(angulo);
        double base = Math.abs(lateral) / 2;
        double centro;

        gp.moveTo(distPrimeiro, 500);
        gp.lineTo(gp.getCurrentPoint().getX() + base, 500);
        gp.lineTo(gp.getCurrentPoint().getX() - (base / 2), 500 - alturaRib);
        centro = gp.getCurrentPoint().getX();
        gp.lineTo(gp.getCurrentPoint().getX() - (base / 2), gp.getCurrentPoint().getY() + alturaRib);

        for (int aux = 0; aux <= tamanhoAmos; aux++) {
            gp.moveTo(aux, 500);
            if (aux == (centro + distCentro)) {
                gp.moveTo(gp.getCurrentPoint().getX() - (base / 2), 500);
                gp.lineTo(gp.getCurrentPoint().getX() + base, 500);
                gp.lineTo(gp.getCurrentPoint().getX() - (base / 2), 500 - alturaRib);
                centro = gp.getCurrentPoint().getX();
                gp.lineTo(gp.getCurrentPoint().getX() - (base / 2), gp.getCurrentPoint().getY() + alturaRib);
            }
        }
        g2d.draw(gp);

        g2d.setColor(new Color(0, 0, 0));
        g2d.setStroke(new BasicStroke(1.0f));

        drawSimpleCoordinateSystem(1500, 1000, g2d);
    }

    private void drawSimpleCoordinateSystem(int width, int height, Graphics2D g2d) {
        g2d.drawLine(0, height / 2, width, height / 2);
        g2d.drawLine(width / 2, 0, width / 2, height);
    }
}
