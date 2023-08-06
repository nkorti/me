<!DOCTYPE html>
<html>
<head>
    <title>My Website</title>
    <link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
    <header>
        <h1>Welcome to My Website</h1>
    </header>

    <nav>
        <ul>
            <li><a href="#about">About</a></li>
            <li><a href="#services">Services</a></li>
            <li><a href="#contact">Contact</a></li>
        </ul>
    </nav>

    <section id="about">
        <h2>About Us</h2>
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed auctor, magna non congue hendrerit, augue augue bibendum dolor, at aliquet magna magna id est. Proin iaculis, magna eget fringilla varius, velit est malesuada velit, vel tempor velit mauris id nulla. Sed eget leo euismod, mollis orci sit amet, convallis ligula. Nullam id est id risus euismod egestas. Sed auctor, magna non congue hendrerit, augue augue bibendum dolor, at aliquet magna magna id est.</p>
    </section>

    <section id="services">
        <h2>Our Services</h2>
        <ul>
            <li>Service 1</li>
            <li>Service 2</li>
            <li>Service 3</li>
        </ul>
    </section>

    <section id="contact">
        <h2>Contact Us</h2>
        <p>Email: info@mywebsite.com</p>
        <p>Phone: 555-555-5555</p>
    </section>
    <form action="submit.php" method="post">
    <label for="name">Name:</label>
    <input type="text" id="name" name="name">

    <label for="email">Email:</label>
    <input type="email" id="email" name="email">

    <label for="message">Message:</label>
    <textarea id="message" name="message"></textarea>

    <input type="submit" value="Submit">
</form>

    <footer>
        <p>Copyright ©2022 My Website</p>
    </footer>
</body>
</html>
<?php
    // Connect to the database
    $host = "hostname";
    $username = "username";
    $password = "password";
    $dbname = "dbname";
    $conn = mysqli_connect($host, $username, $password, $dbname);

    // Check connection
    if (!$conn) {
        die("Connection failed: " . mysqli_connect_error());
    }

    // Get the form data
    $name = $_POST['name'];
    $email = $_POST['email'];
    $message = $_POST['message'];

    // Insert the data into the database
    $sql = "INSERT INTO messages (name, email, message) VALUES ('$name', '$email', '$message')";
    if (mysqli_query($conn, $sql)) {
        echo "New record created successfully";
    } else {
        echo "Error: " . $sql . "<br>" . mysqli_error($conn);
    }

    mysqli_close($conn);
?>
 