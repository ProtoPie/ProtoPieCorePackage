// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "ProtoPieCore",
    platforms: [
        .iOS(.v11)
    ],
    products: [
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
