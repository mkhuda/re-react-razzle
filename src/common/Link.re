let component = ReasonReact.statelessComponent("Link");

let make = (~href, ~className="", children) => {
  ...component,
  render: self =>
    ReactDOMRe.createElementVariadic(
      "a",
      ~props=
      ReactDOMRe.objToDOMProps({
        "className": className,
        "href": href,
        "onClick":
          self.handle((event, _self) => {
            event->ReactEvent.Mouse.preventDefault;
            ReasonReact.Router.push(href);
          })
      }),
      children,
    )
};
