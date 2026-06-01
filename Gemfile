source "https://rubygems.org"

gem "github-pages", group: :jekyll_plugins

gem "tzinfo-data"
gem "wdm", "~> 0.1.0" if Gem.win_platform?

# Ruby 3.4+ removed these from the default gem set; declare them
# explicitly so Jekyll 3.x can still `require` them on modern Rubies
# (e.g. Netlify's build image).
gem "csv"
gem "base64"
gem "bigdecimal"
gem "logger"
gem "ostruct"

# If you have any plugins, put them here!
group :jekyll_plugins do
  gem "jekyll-paginate"
  gem "jekyll-sitemap"
  gem "jekyll-gist"
  gem "jekyll-feed"
  gem "jemoji"
  gem "jekyll-include-cache"
  gem "jekyll-algolia"
end
