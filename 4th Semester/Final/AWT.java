// An example of Java AWT (with inheritance)

package Final;

import java.awt.*;
import java.awt.event.*;

// Custom Frame class that extends the AWT Frame class
class MyFrame extends Frame {

    public MyFrame() {
        // Set frame title
        super("My Frame");

        // Create a button
        Button button = new Button("Click Me!");

        // Add an action listener to the button
        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                System.out.println("Button clicked!");
            }
        });

        // Set layout manager for the frame
        setLayout(new FlowLayout());

        // Add the button to the frame
        add(button);

        // Set frame size and make it visible
        setSize(300, 200);
        setVisible(true);
    }
}

public class AWT {
    public static void main(String[] args) {
        // Create an instance of the custom frame
        MyFrame myFrame = new MyFrame();
    }
}
