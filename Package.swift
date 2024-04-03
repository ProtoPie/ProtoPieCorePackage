// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "ProtoPieCore",
    platforms: [
        .iOS(.v17),
.watchOS(.v10)
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
