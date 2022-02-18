let c1 = 0, c2 = 0, c5 = 0, c10 = 0;

let b20 = 0, b50 = 0, b100 = 0, b200 = 0, b500 = 0, b1k = 0;

let total = 0;

function coin1() {
    alert("Moneda de $1 Agregada!!");
    c1++;
}

function coin2() {
    alert("Moneda de $2 Agregada!!");
    c2++;
}

function coin5() {
    alert("Moneda de $5 Agregada!!");
    c5++;
}

function coin10() {
    alert("Moneda de $10 Agregada!!");
    c10++;
}

function coinCount() {
    alert("Monedas de $1: " + c1);
    alert("Monedas de $2: " + c2);
    alert("Monedas de $5: " + c5);
    alert("Monedas de $10: " + c10);
}

function bill20() {
    alert("Billete de $20 Agregada!!");
    b20++;
}

function bill50() {
    alert("Billete de $50 Agregada!!");
    b50++;
}

function bill100() {
    alert("Billete de $100 Agregada!!");
    b100++;
}

function bill200() {
    alert("Billete de $200 Agregada!!");
    b200++;
}

function bill500() {
    alert("Billete de $500 Agregada!!");
    b500++;
}

function bill1k() {
    alert("Billete de $1000 Agregada!!");
    b1k++;
}

function billCount() {
    alert("Billetes de $20: " + b20);
    alert("Billetes de $50: " + b50);
    alert("Billetes de $100: " + b100);
    alert("Billetes de $200: " + b200);
    alert("Billetes de $500: " + b500);
    alert("Billetes de $1000: " + b1k);
}

function totalDinero(){
    total = (c1 * 1) + (c2 * 2) + (c5 * 5) + (c10 * 10) + (b20 * 20) + (b50 * 50) + (b100 * 100) + (b200 * 200) + (b500 * 500) + (b1k * 1000);
    alert("Total de dinero ahorrado: $ " + total);
}

function destroy(){
    total = 0;
    c1 = 0;
    c2 = 0;
    c5 = 0;
    c10 = 0;
    b20 = 0;
    b50 = 0;
    b100 = 0;
    b200 = 0;
    b500 = 0;
    b1k = 0;
    alert("Alcancia Vacia!");
}