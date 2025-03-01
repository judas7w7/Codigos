import './App.css';
import freecodecampLogo from './imagenes/freecodecamp-logo.png';
import ListaDeTareas from './componentes/ListaDeTareas';

function App() {
  return (
    <div className="aplicacion-tareas">
      <div className='freecodecamp-logo-contenedor'>
        <img
          src={freecodecampLogo}
          className='freecodecamp-logo' >
        </img>
      </div>
      <div className='tareas-lista-principal' >
        <h1>Mis tareas</h1>
        <ListaDeTareas />
      </div>
    </div>
  );
}

export default App;
