let set = new Set();

set.add(10);
set.add(67);
set.add("Roy");
set.add(true);
set.add(10);
set.add("JS");
set.add("Roy");

for (s of set) {
  console.log(s);
}
