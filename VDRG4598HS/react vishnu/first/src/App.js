// ######################       19 Nov 22       ##############################
import React, { createContext } from 'react'
// import Third_context from './components/context/19Nov-Context-provider-consumer';
// import Use_context from './components/context/19Nov-UseContext'

// ########################     22  Nov  22     ####################################################
// import AppUseState from './components/22Nov-1st-UseState-inc-decr';
// #########################      26 NOV  22      ##################################################
import Inline from './components/26Nov22-inline-Styling';
import InternalCss from './components/26Nov22-internal-css';
import ExternalCss from './components/26Nov22-ExternalCss';
import 'bootstrap/dist/css/bootstrap.min.css'
import ChildProptypes from './components/26Nov22-Prototype';
// import Third_context from './components/contex/Third-usecontext';
// import ChildA from './components/ChildA';

// 2 to 8 Nov code 

// import Child from './components/diff_type-of-return';
// import { Child1,Child2 } from './components/diff_type-of-return';
// import First, { Second,Third } from './components/First';
// import ChildA from './components/child';
// import First from './components/First';
// import UpdatevalueFunc from './components/UpdateValue';

// import InputTypeFields from './components/InputAllTypeFields-Uncontrolled';
// import Appinputfield from './components/Input_field-number';
// import EmpData from './components/Input-controlled-type';
// import Language from './components/Language';
// import Lang from './components/LanguageTag';
// import { Data } from './components/Data';
// 2 to 8 Nov code 
// import ChildProps from './props component/PropsChild';
// import ChildProps1 from './props component/PropsChild';
// import AppUsestate from './components/UseState';
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
  // ////////////////////////////   15 NOV 22   ///////////////////////////////////////////////
  //   const App=()=>{
  //     return(
  //       <>
  //         {/* <Language/> */}
  //         {
  //           Data.map(function(v)
  //           {
  //             return <Lang name={v.name} fees={v.fees} duration={v.duration} img={v.img} />
  //           })
  //         }
  //         {
  //           <Lang/>
  //         }
  //       </>
  //     )
  // }
  // //////////////////////////     19   NOV  22     ///////////////////////////////////////////////////////////////////////////////
  // let Name;
  // let Course;
  // const App=()=>
  // {
  //   Name=createContext();
  //   Course=createContext();
  //   return (
  //     <>
  //       <h1>App Running...</h1>
  //       <Name.Provider value="progmming Machine">
  //       <Course.Provider value='We are coders '>
  //       <Third_context/>
  //       <Use_context/>
  //       </Course.Provider>
  //       </Name.Provider>
  //     </>
  //   )
  // }
  // ################     22  NOV   22    ####################################################
  const App=()=>{
    let nm='ajay'
    return (
      <>
        {/* <AppUseState/> */}
        <Inline/>
        <InternalCss/>
        <ExternalCss/>
        <ChildProptypes name={nm} mob={64895226552} addresses={['indore','ujjain']} />
      </>
    )
  }
export default App;
// ###############          19 Nov 22       #######################
// export {Name,Course}