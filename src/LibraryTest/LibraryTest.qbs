import qbs 1.0

CppApplication {
    name: "TTD"

    Depends {
        name: "Qt"
        submodules: [
            "testlib"
        ]
    }

    Depends {
        name: "queryable"
    }

    cpp.includePaths: [
        "../Library/"
    ]

    Group {
        name: "Test Definition"
        files: [
            "tdd.cpp",
            "tdd.h",
            "tst_tdd.cpp",
        ]
    }
}
