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
            path: "./OpenTripPlannerClientLibrary.xcframework"
        ),
    ]
)
