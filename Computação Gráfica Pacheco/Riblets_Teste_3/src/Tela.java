/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
import java.awt.*;
import javax.swing.*;
import static javax.swing.JOptionPane.showMessageDialog;

public class Tela extends JFrame {
    
    JFrame frame = new JFrame();
    JPanel panel = new JPanel(new GridBagLayout());
    JLabel titleLabel = new JLabel("Software para desenhar Riblets:");

    JLabel labelTamanhoAmos = new JLabel("Tamanho da amostra:");
    JLabel labelAlturaRib = new JLabel("Altura do riblet:");
    JLabel labelAngulo = new JLabel("Ângulo do riblet:");
    JLabel labelDistCentro = new JLabel("Distância entre centros:");
    JLabel labelDistPrimeiro = new JLabel("Distância do início:");

    JTextField textFieldTamanhoAmos = new JTextField(10);
    JTextField textFieldAlturaRib = new JTextField(10);
    JTextField textFieldAngulo = new JTextField(10);
    JTextField textFieldDistCentro = new JTextField(10);
    JTextField textFieldDistPrimeiro = new JTextField(10);

    double tamanhoAmosValue;
    double alturaRibValue;
    double anguloValue;
    double distCentroValue;
    double distPrimeiroValue;

    JButton buttonDraw = new JButton("Desenhar");
    
    public void drawScreen() {
        frame.setTitle("Riblets Thiago");
        frame.setLayout(new BorderLayout());

        titleLabel.setFont(new Font("Arial", Font.BOLD, 16));
        titleLabel.setHorizontalAlignment(JLabel.CENTER);
        frame.add(titleLabel, BorderLayout.NORTH);

        frame.add(panel, BorderLayout.CENTER);

        GridBagConstraints gbc = new GridBagConstraints();
        gbc.insets = new Insets(5, 5, 5, 5);
        gbc.fill = GridBagConstraints.HORIZONTAL;

        gbc.gridx = 0;
        gbc.gridy = 0;
        panel.add(labelTamanhoAmos, gbc);

        gbc.gridx = 1;
        gbc.gridy = 0;
        panel.add(textFieldTamanhoAmos, gbc);

        gbc.gridx = 0;
        gbc.gridy = 1;
        panel.add(labelAlturaRib, gbc);

        gbc.gridx = 1;
        gbc.gridy = 1;
        panel.add(textFieldAlturaRib, gbc);

        gbc.gridx = 0;
        gbc.gridy = 2;
        panel.add(labelAngulo, gbc);

        gbc.gridx = 1;
        gbc.gridy = 2;
        panel.add(textFieldAngulo, gbc);

        gbc.gridx = 0;
        gbc.gridy = 3;
        panel.add(labelDistCentro, gbc);

        gbc.gridx = 1;
        gbc.gridy = 3;
        panel.add(textFieldDistCentro, gbc);

        gbc.gridx = 0;
        gbc.gridy = 4;
        panel.add(labelDistPrimeiro, gbc);

        gbc.gridx = 1;
        gbc.gridy = 4;
        panel.add(textFieldDistPrimeiro, gbc);

        gbc.gridx = 0;
        gbc.gridy = 5;
        gbc.gridwidth = 2;
        gbc.anchor = GridBagConstraints.CENTER;
        panel.add(buttonDraw, gbc);

        frame.pack();
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);

        buttonDraw.addActionListener((java.awt.event.ActionEvent evt) -> {
            processaTexto();
        });

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }

    public void processaTexto() {

        try {
            tamanhoAmosValue = Double.parseDouble(this.textFieldTamanhoAmos.getText());
            alturaRibValue = Double.parseDouble(this.textFieldAlturaRib.getText());
            anguloValue = Double.parseDouble(this.textFieldAngulo.getText());
            distCentroValue = Double.parseDouble(this.textFieldDistCentro.getText());
            distPrimeiroValue = Double.parseDouble(this.textFieldDistPrimeiro.getText());

            GeneralPathCar f = new GeneralPathCar(tamanhoAmosValue, alturaRibValue, anguloValue, distCentroValue, distPrimeiroValue);
            f.setTitle("GeneralPath example");
            f.setSize(250,200);
            f.setVisible(true);

        } catch (NumberFormatException e) {
            showMessageDialog(null, "Todos os campos devem ser preenchidos com números.");
        }

    }
}
