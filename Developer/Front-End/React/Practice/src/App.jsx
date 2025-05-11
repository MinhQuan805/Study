import { useState, useEffect } from 'react'
import './App.css'

function App() {

  const [avatars, setAvatars] = useState([])
  
  useEffect(() => {
    return () => {
      avatars.forEach(avatar => URL.revokeObjectURL(avatar.preview))
    }
  }, [avatars])

  const upImage = (e) => {
    const file = e.target.files[0];

    file.preview = URL.createObjectURL(file);

    setAvatars([file, ...avatars]);
  }

  return (
    <>
      <div>
        <input type="file" onChange={upImage} />
      </div>
      
      {avatars.length > 0 && avatars.map((avatar, index) => (
        <img key={index} src={avatar.preview} alt="" />
      ))}
    </>
  )
}

export default App
