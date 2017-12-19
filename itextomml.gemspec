Gem::Specification.new do |gem|
  gem.name        = 'itextomml'
  gem.version     = '1.5.6'
  gem.date        = '2017-12-19'
  gem.summary     = "Ruby bindings for itex2MML"
  gem.description = "Ruby bindings for itex2MML."
  gem.authors     = ["Jacques Distler"]
  gem.email       = "distler@golem.ph.utexas.edu"
  gem.homepage    = "https://rubygems.org/gems/itextomml"
  gem.licenses    = ['GPL', 'MPL', 'LGPL']

  gem.extensions = %w[ext/extconf.rb]

  gem.required_ruby_version = '>= 2.0.0'
  gem.require_paths = ['lib']

  gem.files         = `git ls-files`.split("\n").reject {|f| f =~ /^test/}
  gem.test_files    = `git ls-files -- {test,spec,features}/*`.split("\n")

end
