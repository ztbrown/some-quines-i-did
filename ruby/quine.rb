t = %q{File.open("quine2.rb", "w") {|file| file.print("t = %q{#{t}} \n #{t}") }} 
File.open("quine2.rb", "w") { |file| file.print("t = %q{#{t}} \n #{t}") }
