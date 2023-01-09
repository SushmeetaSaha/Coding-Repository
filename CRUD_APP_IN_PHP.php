<?php
$servername = 'localhost';
$username = 'root';
$password = '';
$database = "crud";
$conn = mysqli_connect($servername, $username, $password,$database);
$search = false;
$query = "";
if($_SERVER['REQUEST_METHOD'] == "POST"){
  if(isset($_POST['note_name']) and isset($_POST['desc'])){
    $name = $_POST['note_name'];
    $desc = $_POST['desc'];
    $sql = "INSERT INTO `information` (`sno`, `noteName`, `description`, `time`) VALUES (NULL, '$name', '$desc', CURRENT_TIMESTAMP);";
    $result = mysqli_query($conn, $sql);
  }
  if(isset($_POST['search'])){
    $search = true;
    $query = $_POST["search"];
  }
}
?>
<!doctype html>
<html lang="en">

<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <title>CRUD APP</title>
  <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/css/bootstrap.min.css" rel="stylesheet"
    integrity="sha384-GLhlTQ8iRABdZLl6O3oVMWSktQOp6b7In1Zl3/Jr59b6EGGoI1aFkw7cmDA6j6gD" crossorigin="anonymous">
  <style>
    * {
      margin: 0px;
      padding: 0px;
    }

    .box {
      position: absolute;
      height: 390px;
      width: 600px;
      margin: auto;
      border: 2px solid #e0c9c9;
      padding: 20px;
      border-radius: 32px;
      background: white;
      top: 60px;
      right: 30%;
    }

    .btn1 {
      background: white;
      font-size: 20px;
      cursor: pointer;
      padding: 5px;
      font-family: cursive;
    }

    .close {
      right: 30px;
      position: absolute;
      margin-top: 26px;
    }

    .none {
      display: none;
    }

    .visible {
      display: block;
    }

    .input[type="text"] {
      width: 540px;
      height: 35px;
    }

    .textarea[type="text"] {
      width: 540px;
      height: 200px;
    }
  </style>
</head>

<body>
  <?php
  $print = false;
  $index = NULL;
  if($_SERVER['REQUEST_METHOD'] == 'POST'){
    if(isset($_POST['close'])){
        $sql = "UPDATE `information` SET `noteName` = '".$_POST['newName']."', `description` = '".$_POST['newDescription']."' WHERE `information`.`sno` = ".$_POST["close"].";";
        $result = mysqli_query($conn,$sql);
      $print = false;
    }
    if(isset($_POST['delete'])){
      $sql = "DELETE FROM `information` WHERE `information`.`sno` = ". $_POST['delete'];
      $result = mysqli_query($conn,$sql);
    }
  }
  ?>
  <div>
    <form action="./project_1.php" method="post">
      <!-- <button class="btn1" type="submit" name="open">Open modal box</button> -->
      <div style="display:none; position:relative;" id="world">
        <div class="box">
          <h1>Edit Name</h1>
          <input type="text" class="input" name="newName">
          <h1>Description</h1>
          <textarea type="text" name="newDescription" id="newDescription" style="display:block;" rows="6" col="7"
            class="textarea"></textarea>
          <button type="submit" name="close" id="close" value="" class="close btn1">Close</button>
    </form>
  </div>
  </div>
  </div>
  <nav class="navbar navbar-expand-lg bg-body-tertiary">
    <div class="container-fluid">
      <a class="navbar-brand" href="#">Navbar</a>
      <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent"
        aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
      </button>
      <div class="collapse navbar-collapse" id="navbarSupportedContent">
        <ul class="navbar-nav me-auto mb-2 mb-lg-0">
          <li class="nav-item">
            <a class="nav-link active" aria-current="page" href="#">Home</a>
          </li>
          <li class="nav-item">
            <a class="nav-link active" href="#">About</a>
          </li>
        </ul>
        <form class="d-flex" role="search" method="post">
          <input class="form-control me-2" name="search" type="search" placeholder="Search" aria-label="Search">
          <button class="btn btn-outline-success" type="submit">Search</button>
        </form>
      </div>
    </div>
  </nav>
  <div class="container my-3">
    <form action="project_1.php" method="post">
      <div class="mb-3">
        <h4 for="exampleFormControlInput1" class="form-label">Note name</h1>
          <input type="text" class="form-control" name="note_name" id="note_name" placeholder="Note">
      </div>
      <div class="mb-3">
        <h4 for="exampleFormControlTextarea1" class="form-label">Description of the note</h4>
        <textarea class="form-control" rows="3" placeholder="Description" name="desc" id="desc"></textarea>
        <button type="submit" class="btn btn-primary my-3">Add Note</button>
      </div>
    </form>
    <h4>Your Notes</h4>
    <table class="table">
      <thead>
        <tr>
          <th scope="col">S no</th>
          <th scope="col">Note Name</th>
          <th scope="col">Description</th>
          <th scope="col">Time</th>
          <th scope="col">Edit</th>
          <th scope="col">Delete</th>
        </tr>
      </thead>
      <tbody>
        <form action="./project_1.php" method="post">
          <?php
        if($search == false){
          $sql = "SELECT * FROM information";
        $result = mysqli_query($conn, $sql);
      }
      else {
        $sql = "SELECT * FROM `information` WHERE `noteName` = '".$query."';";
        $result = mysqli_query($conn, $sql);
      }
      $numOfRows = mysqli_num_rows($result);
        if($numOfRows > 0){
            for ($i=0; $i < $numOfRows; $i++) { 
              $hello = mysqli_fetch_assoc($result);
              echo "<tr>";
              echo "<th scope='row'>" . $hello["sno"]. "</th>";
              echo "<td scope='row'>" . $hello["noteName"]. "</td>";
              echo "<td scope='row'>" . $hello["description"]. "</td>";
              echo "<td scope='row'>" . $hello["time"]. "</td>";
              echo "<td><button type='button' name='open' id=" . $hello['sno'] ." class='btn btn-info edit'>Edit</button</td>";
              echo "<td><button type='submit' name='delete' value=" .$hello['sno']." class='btn btn-dark'>Delete</button</td>";
              echo "</tr>";
            }
        }
        ?>
        </form>
      </tbody>
    </table>
  </div>
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/js/bootstrap.bundle.min.js"
    integrity="sha384-w76AqPfDkMBDXo30jS1Sgez6pr3x5MlQ1ZAGC+nuZB+EYdgRZgiwxhTBTkF7CXvN"
    crossorigin="anonymous"></script>
</body>

</html>
<script>
  console.log("hello world");
  let edit = document.getElementsByClassName("edit");
  let world = document.getElementById("world");
  let close = document.getElementById("close");
  for (let index = 0; index < edit.length; index++) {
    edit[index].addEventListener("click", function () {
      world.style.display = "block";
      close.setAttribute("value", edit[index].id);
      console.log(close);
    })
  }
</script>
