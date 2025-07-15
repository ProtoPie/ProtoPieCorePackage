// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "ProtoPieCore",
    platforms: [
        .iOS(.v17)
    ],
    products: [
        .library(
            name: "ProtoPieCore",
            targets: ["ProtoPieCore"]
        ),
        .library(
            name: "ProtoPieCoreStatic",
            targets: ["ProtoPieCoreStatic"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "ProtoPieCore",
            path: "./ProtoPieCore.xcframework"
        ),
        .binaryTarget(
            name: "ProtoPieCoreStatic",
            path: "./ProtoPieCoreStatic.xcframework"
        ),
    ]
)
