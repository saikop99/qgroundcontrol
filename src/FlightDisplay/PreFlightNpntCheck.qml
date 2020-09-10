import QtQuick 2.0
import QGroundControl           1.0
import QGroundControl.Controls  1.0
import QGroundControl.Vehicle   1.0

PreFlightCheckButton{
    name:                   qsTr("NPNT Artefact Upload")
    telemetryTextFailure:   qsTr("No NPNT Authorization Uploaded")
    telemetryFailure:       _npntAuthorized

    property bool _npntAuthorized: globals.activeVehicle ? globals.npntAuthStatus: false
}
