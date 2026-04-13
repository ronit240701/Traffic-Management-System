let signals = [];

function addSignal() {
    let id = document.getElementById("signalId").value;
    let green = document.getElementById("greenTime").value;
    let red = document.getElementById("redTime").value;

    signals.push({ id, green, red });

    document.getElementById("output").innerHTML += 
        `<p>Added Signal ${id}</p>`;
}

function runSimulation() {
    let output = "<h2>Simulation Start</h2>";

    signals.forEach(s => {
        output += `<p>Signal ${s.id}: GREEN for ${s.green}s, RED for ${s.red}s</p>`;
    });

    output += "<h2>Simulation End</h2>";

    document.getElementById("output").innerHTML = output;
}
