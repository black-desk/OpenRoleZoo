project('seetaface-orz', 'cpp',
  default_options:[
    'cpp_std=c++11',
  ]
)

sources = []

subdir('src')
subdir('include/orz')

orz = library('seetaface-orz', sources,
  version:'1.0.0',
  include_directories: include_directories('include'),
  dependencies: dependency('threads'),
  install: true
)

pkg = import('pkgconfig')
pkg.generate(orz, subdirs: ['seeta'])
