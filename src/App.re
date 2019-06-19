let text = ReasonReact.string;
let component = ReasonReact.statelessComponent("App");

/* underscore before names indicate unused variables. We name them for clarity */
let make = (~initialUrl, _children) => {
  ...component,
  render: _self =>
    <div className="App">
      <Menu />
      <Router initialUrl>
        ...{
            (url: ReasonReact.Router.url) =>
              switch (url.path) {
              | [] => <Home />
              | ["home"] => <Home />
              | _ => "404 not found" |> text
              }
          }
      </Router>
    </div>,
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps =>
    make(~initialUrl=Js.undefinedToOption(jsProps##initialUrl), [||])
  );
