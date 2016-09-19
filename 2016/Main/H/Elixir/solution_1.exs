vowels? = fn c -> Enum.member?(["a", "e", "i", "o", "u"], c) end
palindrome? = fn list ->
  reversed = list |> Enum.reverse
  list == reversed
end

laugh = IO.read(:line) |> String.trim

if laugh
  |> String.graphemes
  |> Enum.filter(vowels?)
  |> palindrome?.()
do
  IO.puts "S"
else
  IO.puts "N"
end

