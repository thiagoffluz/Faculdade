
import javax.swing.SwingUtilities;

public class Iniciar {

    public static void main(String[] args) {
        Tela tela = new Tela();
        tela.drawScreen();
        SwingUtilities.invokeLater(() -> new Tela());
    }
}
