<html>
<body>
    <center>
        <img src="logo.jpg" /><br /><br /><br /><br /><br /><br /><br /><br />
        <h1>Welcome
        <?php
        echo $_GET["fname"];
        $_GET["fname"]
        ?>
        </h1>
        <form action="action.php" method="post">
        SystemID <input type="number" name="ID" /> <br><br>
        Password <input type="password" name="froll" /><br><br>
             <input type="Submit" />
         </form>
    </center>
</body>
</html>
