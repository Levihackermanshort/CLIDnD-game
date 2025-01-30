function move(direction) {
    document.getElementById("log").innerHTML += "Moved " + direction + "<br>";
}

function attack() {
    document.getElementById("log").innerHTML += "Attacked Goblin!<br>";
}

function meditate() {
    document.getElementById("log").innerHTML += "Meditated. Health restored!<br>";
}

function upgrade() {
    document.getElementById("log").innerHTML += "Upgraded attack power!<br>";
}