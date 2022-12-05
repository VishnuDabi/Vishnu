import React from 'react'
// import ChildA from './components/ChildA';

// 2 to 8 Nov code 

// import Child from './components/diff_type-of-return';
// import { Child1,Child2 } from './components/diff_type-of-return';
// import First, { Second,Third } from './components/First';
// import ChildA from './components/child';
// import First from './components/First';
import UpdatevalueFunc from './components/UpdateValue';

import InputTypeFields from './components/InputAllTypeFields-Uncontrolled';
import Appinputfield from './components/Input_field-number';
import EmpData from './components/Input-controlled-type';
// 2 to 8 Nov code 
// import ChildProps from './props component/PropsChild';
// import ChildProps1 from './props component/PropsChild';
// const App = () => {
//   var n=5;
//     // 2 to 8 Nov code  
//   return (
//     <>
//       { <h1>App.js works</h1> }    
//       <Child/>
//       <First/>
//       <Second/>
//       <Third/>        
//       <ChildA/>
//       <Child1/>
//       <Child2/> 
//             {/* 8 to 8 Nov code          */}
//       <ChildProps name="programmers point" address="Indore | ujjain" />
//       <ChildProps1 name="programmers point" address="Indore | ujjain" />
      
//     </>
//    )
// } 
  // ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
  // const App=()=>
  // {
  //   return(
  //     <>
  //       <UpdatevalueFunc/>
  //       <Appinputfield/>
  //     </>
  //   )
  // }

  //   const App=()=>{
  //   return(
  //     <>
  //       <InputTypeFields/>
  //       <EmpData/>
  //     </>
  //   )
  // }
  // ///////////////////////////////////////////////////////////////////////////
    const App=()=>{
    return(
      <>
        <h1>App component is running...</h1>
        <div>
          <h1>Technology : Java</h1>
          <h2>Duration : 1 year</h2>
          <h2>Fees : 280000</h2>
          <img src='' height="150px" alt='Imges'/>
        </div>
        <div>
          <h1>Technology : Python</h1>
          <h2>Duration : 1 year</h2>
          <h2>Fees : 260000</h2>
          <img src='' height="150px" alt='Imges'/>
        </div>
        <div>
          <h1>Technology : Mern</h1>
          <h2>Duration : 10 Month</h2>
          <h2>Fees : 180000</h2>
          <img src='' height="150px" alt='Imges'/>
        </div>
        <div>
          <h1>Technology : React</h1>
          <h2>Duration : 8 Months</h2>
          <h2>Fees : 180000</h2>
          <img src='' height="150px" alt='Imges'/>
        </div>
        </>
    )
  }
export default App;