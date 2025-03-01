import React from 'react';
import '../stylesheets/testimonio.css';
function Testimonio(props){
  return (
    <div className='contenedor-testimonio'>
      <img
        className='imagen-testimonio'
        src={require(`../imagenes/ima${props.imagen}.jpg`)}
        alt='foto pablo' />
      <div className='contenedor-texto-testimonio'>
        <p className='nombre-testimonio'>
          <b>{props.nombre}</b> en {props.pais}</p>
        <p className='cargo-testimonio'>{props.cargo} en <b>{props.empresa}</b></p>
        <p className='texto-testimonio'>{props.testimonio}</p>
      </div>
    </div>
  );

}

export default Testimonio;  