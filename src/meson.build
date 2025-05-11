hlapi_src = files(
    'hlapi.cpp',
    'interface.cpp',
    'main.cpp',
)

hlapi_public = include_directories(['public/'])

hlapi_lib = library(
    'hlapi',
    hlapi_src,
    include_directories: [hlapi_public],
)

hlapi_dep = declare_dependency(
    link_with: [hlapi_lib],
    include_directories: [hlapi_public],
)
