boost_dep = dependency('boost')
boost_filesystem_dep = dependency('boost', modules : ['filesystem', 'system'])
mylib = library('mylib', sources : ['mylib.hpp', 'mylib.cpp'],
                dependencies : [boost_dep, boost_filesystem_dep])
mylib_dep = declare_dependency(dependencies: boost_dep,
                               include_directories : include_directories('.'), link_with : mylib)
