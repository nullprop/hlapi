project(
    'hlapi',
    'cpp',
    default_options: [
    'cpp_std=c++23',
    'b_ndebug=if-release',
    'warning_level=3',
    ],
    meson_version: '>=1.1',
)

cpp = meson.get_compiler('cpp')
buildtype = get_option('buildtype')

compiler_args = [
  '-Wcast-align',
  '-Wconversion',
  '-Wdouble-promotion',
  '-Wduplicated-branches',
  '-Wduplicated-cond',
  '-Wformat=2',
  '-Wimplicit-fallthrough',
  '-Wlogical-op',
  '-Wmisleading-indentation',
  '-Wnon-virtual-dtor',
  '-Wnrvo',
  '-Wnull-dereference',
  '-Wold-style-cast',
  '-Woverloaded-virtual',
  '-Wshadow',
  '-Wsign-conversion',
  '-Wsuggest-override',
  '-Wunused',
  '-Wuseless-cast',

  '-m64',
]

linker_args = [
  '-m64',
]

add_project_arguments(cpp.get_supported_arguments(compiler_args), language: 'cpp')
add_project_link_arguments(cpp.get_supported_link_arguments(linker_args), language: 'cpp')

subdir('src')
subdir('examples')
