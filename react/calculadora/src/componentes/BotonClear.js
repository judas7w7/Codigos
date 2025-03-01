import React from "react";
import '../hojas-de-stilo/BotonClear.css';

const BotonClear = (props) => (
    <div className='boton-clear' onClick={props.manerjarClear} >
        {props.children}
    </div>
) 

export default BotonClear;