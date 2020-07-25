# Tesing react_on_rails gem in a Rails app

> Ruby version

`ruby --version`

ruby 2.7.1p83 (2020-03-31 revision a0c7c23c9c) [x86_64-linux]

`rails --version`

Rails 6.0.3.2

> System dependencies

> Configuration

`rails new test-react-on-rails --webpack=react`

`cd test-react-on-rails`

`echo 'gem "rspec-rails", group: [:development, :test]' >> Gemfile`

bundle install

commit your changes

`rails generate rspec:install`

`echo 'gem "react_on_rails", "~> 12.0", ">= 12.0.1"' >> Gemfile`

bundle install

stage and commit your changes

`rails generate react_on_rails:install`

> Database creation

> Database initialization

> How to run the test suite

> Services (job queues, cache servers, search engines, etc.)

> Deployment instructions