function calcularVoltaje () {
    var resistencia = document.getElementById("resistencia").value;
    var corriente = document.getElementById("corriente").value;
    var voltaje = "error";
    if(corriente != 0){
        voltaje = Number(resistencia) / Number(corriente);
    }    
    document.getElementById("voltaje").value = voltaje;
}

function suma () {
    var resistencia = document.getElementById("resistencia").value;
    var corriente = document.getElementById("corriente").value;
    var res = Number(resistencia) + Number(corriente);
    document.getElementById("voltaje").value = res;
}

function resta () {
    var resistencia = document.getElementById("resistencia").value;
    var corriente = document.getElementById("corriente").value;
    var res = Number(resistencia) - Number(corriente);
    document.getElementById("voltaje").value = res;
}


function multiplicacion () {
    var resistencia = document.getElementById("resistencia").value;
    var corriente = document.getElementById("corriente").value;
    var res = Number(resistencia) * Number(corriente);
    document.getElementById("voltaje").value = res;
}

function Potencia () {
    var resistencia = document.getElementById("resistencia").value;
    var corriente = document.getElementById("corriente").value;
    var res =Math.pow(Number(resistencia),Number(corriente));
    document.getElementById("voltaje").value = res;
}