import './App.css';
import Testimonio from './componentes/testimonio'

function App() {
  return (
    <div className='App'>
      <div className='contenedor-principal'>
        <h1> Esto es lo que dice los alumnos de freecodecamp</h1>
        <Testimonio 
          nombre='Emma Smith'
          pais='Cali'
          imagen='2'
          cargo='Ingeniera de Sistemas'
          empresa='Amazon'
          testimonio='This is the text of Emma Smith your test'
        />
        <Testimonio 
          nombre='Pablo perez'
          pais='Bogota'
          imagen='1'
          cargo='Ingeniero de software'
          empresa='Facebook'
          testimonio='This is the text of pablo and your test'
        />
        <Testimonio 
          nombre='Sara Castro'
          pais='Sevilla'
          imagen='3'
          cargo='Desarolladora web'
          empresa='Teams'
          testimonio='This is the text of Sara Castro and your test'
        />
        
      </div>
    </div>
  );
}

export default App;
