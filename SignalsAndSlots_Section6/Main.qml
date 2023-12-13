import QtQuick
import QtQuick.Window
import QtQuick.Controls.Basic

Window {
    id: root

    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    signal mySignal(string message)

    onMySignal: (message) => {
                    console.log("Message received in signal handler: " + message)
                }

    Button {
        id: myButton

        anchors.centerIn: parent
        height: 50
        width: 100
        text: "Click me!"

        onClicked: {
            root.mySignal("Hello world!")
        }
    }
}
