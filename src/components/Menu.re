let text = ReasonReact.string;

let component = ReasonReact.statelessComponent("Menu");

let make = _children => {
    ...component,
    render: _self => {
        <p>
            <Link href="/home"> {text("home")} </Link>
        </p>
    },
};