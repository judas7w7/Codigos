import React, { useState }from "react";
import TareaFormulario from "./TareaFormulario";
import Tarea from "./Tarea";
import '../hojas-de-estilo/ListaDeTareas.css';


//<> fragmentos -> para que se pueda utilizar la estructura en html 
//map metodo para tomar las tareas y pasar una por una para realizar lo que se especifique
function ListaDeTareas () {

    const [tareas, setTareas] =useState([]);

    const agregarTarea = tarea => {
        if (tarea.texto.trim()) {
            tarea.texto = tarea.texto.trim();
            const tareasActualizadas = [tarea, ...tareas];
            setTareas(tareasActualizadas);
        }
    }

    const eliminarTarea = id => {
        const tareasActualizadas = tareas.filter(tarea => tarea.id !==id);
        setTareas(tareasActualizadas);
    }

    const completarTarea = id => {
        const tareasActualizadas = tareas.map(tarea =>{
            if(tarea.id == id) {
                tarea.completada= !tarea.completada;
            }
            return tarea;
        });
        setTareas(tareasActualizadas);
    }

    return (
        <>
            <TareaFormulario onSubmit={agregarTarea} />
            <div className="tareas-lista-contenedor">
                {
                    tareas.map((tarea) => 
                        <Tarea 
                            key={tarea.id}
                            id={tarea.id}
                            texto={tarea.texto}
                            completada={tarea.completada} 
                            eliminarTarea={eliminarTarea}
                            completarTarea={completarTarea}/>
                    )
                }
            </div>
        </>
    )
}

export default ListaDeTareas;