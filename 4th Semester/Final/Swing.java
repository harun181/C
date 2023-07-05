//Simple Java Swing example (with inheritance)

package Final;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

// Custom JFrame class that extends the Swing JFrame class
class NewFrame extends JFrame {

    public NewFrame() {
        // Set frame title
        super("My Frame");

        // Create a button
        JButton button = new JButton("Click Me!");

        // Add an action listener to the button
        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                System.out.println("Button clicked!");
            }
        });

        // Set layout manager for the content pane
        getContentPane().setLayout(new FlowLayout());

        // Add the button to the content pane
        getContentPane().add(button);

        // Set frame size, default close operation, and make it visible
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }
}

public class Swing {
    public static void main(String[] args) {
        // Create an instance of the custom frame
        NewFrame NewFrame = new NewFrame();
    }
}
