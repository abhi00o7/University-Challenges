<html>
    <title>
        Sharda University
    </title>
    <body>
        <center>
            <img src="logo.jpg"  /><br /><br /><br /><br /><br />
            <h1>
                <?php
                    $pass=$_POST["pass"];
                    $rpass=1234;
                    $name=$_POST["ID"];
                    if ($pass==$rpass) {
                        echo "Welcome<br>";
                        echo "$name ,you've been Logged in successfully";
                        # code...
                    }
                    else {
                        echo "Wrong username or password.<br><br>";
                        echo "Please try again.";
                    }
                 ?>
            </h1>
        </center>
    </body>
</html>
