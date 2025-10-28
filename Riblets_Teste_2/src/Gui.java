/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
import java.awt.*;
import javax.swing.*;
import static javax.swing.JOptionPane.showMessageDialog;

/**
 *
 * @author gdantas
 */
public class Gui extends JFrame {

    JFrame frame = new JFrame();
    JPanel panel = new JPanel();

    JLabel labelTamAmostra = new JLabel();
    JLabel labelAlturaRiblet = new JLabel();
    JLabel labelAnguloRiblet = new JLabel();
    JLabel labelDistCentros = new JLabel();
    JLabel labelDistInicio = new JLabel();

    JTextField textFieldTamAmostra = new JTextField(5);
    JTextField textFieldAlturaRiblet = new JTextField(5);
    JTextField textFieldAnguloRiblet = new JTextField(5);
    JTextField textFieldDistCentros = new JTextField(5);
    JTextField textFieldDistInicio = new JTextField(5);

    double tamAmostraValue;
    double alturaRibletValue;
    double anguloRibletValue;
    double distCentrosValue;
    double distInicioValue;

    JButton buttonDraw = new JButton("Gerar");

    public void drawScreen() {
        panel.setLayout(new BoxLayout(panel, BoxLayout.PAGE_AXIS));

        frame.add(panel);

        labelTamAmostra.setText("Tamanho da amostra");

        labelAlturaRiblet.setText("Altura do riblet");

        labelAnguloRiblet.setText("Ângulo do riblet");

        labelDistCentros.setText("Distância entre centros");

        labelDistInicio.setText("Distância do início");

        panel.add(labelTamAmostra);
        panel.add(textFieldTamAmostra);

        panel.add(labelAlturaRiblet);
        panel.add(textFieldAlturaRiblet);

        panel.add(labelAnguloRiblet);
        panel.add(textFieldAnguloRiblet);

        panel.add(labelDistCentros);
        panel.add(textFieldDistCentros);

        panel.add(labelDistInicio);
        panel.add(textFieldDistInicio);

        panel.add(buttonDraw);

        frame.setSize(300, 200);
        frame.pack();

        frame.setVisible(true);

        buttonDraw.addActionListener((java.awt.event.ActionEvent evt) -> {
            processaTexto();
        });

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }

    public void processaTexto() {

        try {
            tamAmostraValue = Double.parseDouble(this.textFieldTamAmostra.getText());
            alturaRibletValue = Double.parseDouble(this.textFieldAlturaRiblet.getText());
            anguloRibletValue = Double.parseDouble(this.textFieldAnguloRiblet.getText());
            distCentrosValue = Double.parseDouble(this.textFieldDistCentros.getText());
            distInicioValue = Double.parseDouble(this.textFieldDistInicio.getText());

            GeneralPathCar f = new GeneralPathCar(tamAmostraValue, alturaRibletValue, anguloRibletValue, distCentrosValue, distInicioValue);
            f.setTitle("GeneralPath example");
            f.setSize(250,200);
            f.setVisible(true);

        } catch (NumberFormatException e) {
            showMessageDialog(null, "Todos os campos devem ser preenchidos com números.");
        }

    }
}
