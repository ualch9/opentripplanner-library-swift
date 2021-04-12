// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "OpenTripPlannerClientLibrary",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "OpenTripPlannerClientLibrary",
            targets: ["OpenTripPlannerClientLibrary"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "OpenTripPlannerClientLibrary",
            url: "https://github.com/ualch9/opentripplanner-library-swift/releases/download/0.6/OpenTripPlannerClientLibrary.xcframework.zip",
            checksum: "c7283cd4621f1e2a7b401254e584c5fc7ebf2dca81a25ce9e31039afd29dfd4a"
        ),
    ]
)
