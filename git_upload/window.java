import javax.swing.JFrame;

public class window {

	public window() {
		final int WIDTH = 300;
		final int HEIGHT = 300; 

		JFrame frame = new JFrame();
		frame.setSize(WIDTH, HEIGHT);
		frame.setTitle("JFrame");
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setVisible(true);
	}

	public static void main(String[] args) {
		new window();
	}
}