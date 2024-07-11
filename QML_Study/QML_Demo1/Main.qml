import QtQuick
import QtQuick.Controls

Window {
    width: 400
    height: 300
    visible: true
    title: qsTr("My QML")
    color: "black"
    // signal mySign()
    // 程序相较于屏幕左上角的距离
    // x: 50
    // y: 50

    minimumWidth: 400
    minimumHeight: 300
    maximumWidth: 800
    maximumHeight: 600

    // 程序透明度
    // opacity: 0.5

    // onMySign: {

    // }

    onWidthChanged: {
        console.log("width:", width )
    }
    onHeightChanged: {
        console.log("height:", height)
    }

    Button {
        id: btn1
        x: 100
        width: 50
        height: 50
        focus: true
        objectName: "btn1"
        background: Rectangle {
            border.color: btn1.focus ? "blue" : "black"
        }
        onClicked: {
            console.log("btn1 click")
        }
        Keys.onRightPressed: {
            btn2.focus = true
        }
    }

    Button {
        id: btn2
        width: 50
        height: 50
        objectName: "btn2"
        background: Rectangle {
            border.color: btn2.focus ? "blue" : "black"
        }
        onClicked: {
            console.log("btn2 click")
        }
        Keys.onLeftPressed: {
            btn1.focus = true
        }
    }

    onActiveFocusItemChanged: {
        console.log("active focus item change", activeFocusItem)
    }



}
