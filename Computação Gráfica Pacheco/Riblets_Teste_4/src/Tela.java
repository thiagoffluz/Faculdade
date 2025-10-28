import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

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

    JButton buttonDraw = new JButton("Desenhar");

    public Tela() {
        drawScreen();
    }

    public void drawScreen() {
        frame.setTitle("penis cu bunda ahahah");
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

        buttonDraw.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                processaTexto();
            }
        });
    }

    private void processaTexto() {
        try {
            double tamanhoAmosValue = Double.parseDouble(textFieldTamanhoAmos.getText());
            double alturaRibValue = Double.parseDouble(textFieldAlturaRib.getText());
            double anguloValue = Double.parseDouble(textFieldAngulo.getText());
            double distCentroValue = Double.parseDouble(textFieldDistCentro.getText());
            double distPrimeiroValue = Double.parseDouble(textFieldDistPrimeiro.getText());
            
            GeneralPathCar f = new GeneralPathCar(tamanhoAmosValue, alturaRibValue, anguloValue, distCentroValue, distPrimeiroValue);
            f.setTitle("GeneralPath example");
            f.setSize(250,200);
            f.setVisible(true);

        } catch (NumberFormatException e) {
            JOptionPane.showMessageDialog(frame, "Por favor, insira valores válidos.", "Erro de entrada", JOptionPane.ERROR_MESSAGE);
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new Tela();
            }
        });
    }
}