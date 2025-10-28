
import javax.swing.*;
import java.awt.*;

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

    Color bgColor = new Color(60, 63, 65);
    Color fgColor = new Color(187, 187, 187);
    Color btnColor = new Color(75, 110, 175);
    Color btnTextColor = new Color(255, 255, 255);
    Color textFieldBgColor = new Color(45, 45, 48);
    Color textFieldFgColor = new Color(255, 255, 255);

    double tamanhoAmosValue;
    double alturaRibValue;
    double anguloValue;
    double distCentroValue;
    double distPrimeiroValue;

    JButton buttonDraw = new JButton("Desenhar");
    GeneralPathCar desenhoRiblet = new GeneralPathCar(0, 0, 0, 0, 0);

    public void drawScreen() {
        frame.setTitle("Riblet Thiago");
        frame.setLayout(new BorderLayout());

        titleLabel.setFont(new Font("Arial", Font.BOLD, 18));
        titleLabel.setHorizontalAlignment(JLabel.CENTER);
        titleLabel.setOpaque(true);
        titleLabel.setBackground(btnColor);
        titleLabel.setForeground(btnTextColor);
        titleLabel.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));
        frame.add(titleLabel, BorderLayout.NORTH);

        panel.setBackground(bgColor);
        frame.add(panel, BorderLayout.WEST);

        GridBagConstraints gbc = new GridBagConstraints();
        gbc.insets = new Insets(10, 10, 10, 10);
        gbc.fill = GridBagConstraints.HORIZONTAL;

        addComponent(panel, labelTamanhoAmos, 0, 0, gbc);
        addComponent(panel, textFieldTamanhoAmos, 1, 0, gbc);
        addComponent(panel, labelAlturaRib, 0, 1, gbc);
        addComponent(panel, textFieldAlturaRib, 1, 1, gbc);
        addComponent(panel, labelAngulo, 0, 2, gbc);
        addComponent(panel, textFieldAngulo, 1, 2, gbc);
        addComponent(panel, labelDistCentro, 0, 3, gbc);
        addComponent(panel, textFieldDistCentro, 1, 3, gbc);
        addComponent(panel, labelDistPrimeiro, 0, 4, gbc);
        addComponent(panel, textFieldDistPrimeiro, 1, 4, gbc);

        buttonDraw.setBackground(btnColor);
        buttonDraw.setForeground(btnTextColor);
        buttonDraw.setFocusPainted(false);
        gbc.gridx = 0;
        gbc.gridy = 5;
        gbc.gridwidth = 2;
        gbc.anchor = GridBagConstraints.CENTER;
        panel.add(buttonDraw, gbc);

        customizeTextField(textFieldTamanhoAmos);
        customizeTextField(textFieldAlturaRib);
        customizeTextField(textFieldAngulo);
        customizeTextField(textFieldDistCentro);
        customizeTextField(textFieldDistPrimeiro);

        frame.add(desenhoRiblet, BorderLayout.CENTER);

        frame.pack();
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);

        buttonDraw.addActionListener((java.awt.event.ActionEvent evt) -> {
            processaTexto();
            desenhoRiblet.atualizarValores(tamanhoAmosValue, alturaRibValue, anguloValue, distCentroValue, distPrimeiroValue);
        });

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    private void addComponent(JPanel panel, JComponent component, int x, int y, GridBagConstraints gbc) {
        gbc.gridx = x;
        gbc.gridy = y;
        component.setForeground(fgColor);
        panel.add(component, gbc);
    }

    private void customizeTextField(JTextField textField) {
        textField.setBackground(textFieldBgColor);
        textField.setForeground(textFieldFgColor);
        textField.setCaretColor(textFieldFgColor);
        textField.setBorder(BorderFactory.createLineBorder(fgColor));
    }

    public void processaTexto() {
        try {
            tamanhoAmosValue = Double.parseDouble(this.textFieldTamanhoAmos.getText());
            alturaRibValue = Double.parseDouble(this.textFieldAlturaRib.getText());
            anguloValue = Double.parseDouble(this.textFieldAngulo.getText());
            distCentroValue = Double.parseDouble(this.textFieldDistCentro.getText());
            distPrimeiroValue = Double.parseDouble(this.textFieldDistPrimeiro.getText());
        } catch (NumberFormatException e) {
            JOptionPane.showMessageDialog(null, "Todos os campos devem ser preenchidos com números.");
        }
    }
}
