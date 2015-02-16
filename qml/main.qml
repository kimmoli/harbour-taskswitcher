import QtQuick 2.1
import Sailfish.Silica 1.0
import harbour.taskswitcher 1.0

Item
{
    id: root

    width: Screen.width
    height: Screen.height

    Taskswitcher
    {
        id: taskswitcher
    }

    Rectangle
    {
        anchors.centerIn: root
        color: "green"
        width: 200
        height: 200

        Image
        {
            id: siika
            anchors.centerIn: parent
            source: "/usr/share/icons/hicolor/86x86/apps/harbour-siika.png"
        }

        MouseArea
        {
            anchors.fill: siika

            onDoubleClicked: Qt.quit()

            onClicked: taskswitcher.launchApplication("/usr/share/applications/harbour-siika.desktop")
        }
    }

}
