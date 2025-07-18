// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "ProtoPieCore",
    platforms: [
        .iOS(.v17)
    ],
    products: [
        .library(
            name: "ProtoPieCoreStatic",
            targets: ["ProtoPieCoreStatic"]
        ),
        .library(
            name: "ProtoPieCore",
            targets: ["ProtoPieCore"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "ProtoPieCoreStatic",
            path: "./ProtoPieCoreStatic.xcframework"
        ),
        .binaryTarget(
            name: "ProtoPieCore",
            path: "./ProtoPieCore.xcframework"
        ),
    ]
)
