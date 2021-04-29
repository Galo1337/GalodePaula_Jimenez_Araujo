const { Client } = require('pg');

const client = new Client({
    user: 'postgres',
    host: 'localhost',
    password: '7437galo8217',
    port: 5432,
    database:"credentials",	
});

client.connect();

var var_username1 = 'admin';
var var_password1 = 'admin';

const query = `

select * from "Access_Table" where username = 'admin' and password = 'admin';

`;

// var_password1 es la variable que tiene que entrar por teclado de javascript y var_username1 es lo mismo, tiene que entrar por teclado si ambos estan en la lista de access_table
// entonces se tiene que ingresar a la pagina, de lo contrario no ingresa a nada. Si el valor de access_table[n].role = 'admin' entonces tiene que entrar como administador,
// si  access_table[n].role = 'physician' entonces entra como doctor. 

client.query(query)
    .then(res => {
        console.log('You logged in successfully as an admin'); 
//Esto ejecuta una funcion en javascript para entrar a la pagina de admin 
    })
    .catch(err => {
		console.log('Your username and password do not match');
        console.error(err);
    })
    .finally(() => {
        client.end();
    });