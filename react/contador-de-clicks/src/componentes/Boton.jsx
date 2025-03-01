import React from 'react';
import '../stylesheets/Boton.css';

function Boton({ texto, esBotonDeClic, manejarClic}) {
  return(
      <button
        className={ esBotonDeClic ? 'Boton-clic' : 'boton-reiniciar' }
        onClick={manejarClic}>
        {texto}
      </button>
  )
}

export default Boton;