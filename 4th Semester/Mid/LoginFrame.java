package Mid;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class LoginFrame extends JFrame implements ActionListener {
    // Initialize components
    JLabel lblUsername, lblPassword;
    JTextField txtUsername;
    JPasswordField txtPassword;
    JButton btnLogin;

    public LoginFrame() {
        // Set frame properties
        setTitle("User Login");
        setSize(300, 200);
        setLayout(new GridLayout(3, 2));

        // Create and add components
        lblUsername = new JLabel("Username:");
        add(lblUsername);

        txtUsername = new JTextField();
        add(txtUsername);

        lblPassword = new JLabel("Password:");
        add(lblPassword);

        txtPassword = new JPasswordField();
        add(txtPassword);

        btnLogin = new JButton("Login");
        btnLogin.addActionListener(this);
        add(btnLogin);

        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        // Validate user credentials
        String username = txtUsername.getText();
        String password = new String(txtPassword.getPassword());

        // Check if username and password are correct (e.g., by querying a database)
        boolean isValidUser = true;  // Change this to reflect actual validation logic

        if (isValidUser) {
            // Redirect to main application screen
//            MainFrame mainFrame = new MainFrame();
            setVisible(false);
        } else {
            // Display error message
            JOptionPane.showMessageDialog(this, "Invalid username or password", "Login Error", JOptionPane.ERROR_MESSAGE);
        }
    }

    public static void main(String[] args) {
        LoginFrame loginFrame = new LoginFrame();
    }
}

