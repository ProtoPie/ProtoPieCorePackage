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
            targets: [
        .binaryTarget(
            name: "ProtoPieCoreStatic",
            path: "./ProtoPieCoreStatic.xcframework"),"ProtoPieCoreStatic"]),
        .library(
            name: "ProtoPieCore",
            targets: ["ProtoPieCore"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "ProtoPieCore",
            path: "./ProtoPieCore.xcframework"
        ),
    ]
)
