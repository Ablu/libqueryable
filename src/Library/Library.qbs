import qbs 1.0

DynamicLibrary {
    name: "queryable"

    Depends {
        name: "cpp"
    }

    Group {
        name: "Sources"
        files: [
            "libqueryable_global.h",
            "queryable.cpp",
            "queryable.h",
        ]
    }
}
