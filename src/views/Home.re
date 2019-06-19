module Styles = {
  /* Open the Css module, so we can access the style properties below without prefixing them with Css. */
  open Css;

  let main = style([
    backgroundColor(white)
  ]);
};
let text = ReasonReact.string;

let component = ReasonReact.statelessComponent("Home");

/* underscore before names indicate unused variables. We name them for clarity */
let make = _children => {
  ...component,
  render: _self =>
    <p className="App-intro">
      <code> {text("src/App.re")} </code>
      {text(". When you make edits, both the server and browser will hot reload.")}
    </p>,
};
