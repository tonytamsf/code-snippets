#!/usr/bin/perl -w
use strict;

my @int = (4,7,2,2,5,3,5,7,7,3,4,5);
my %seen = ();

print "array is ", join(",", @int),"\n";
for (my $i = 0; $i <= $#int; $i++) {
   if (!defined($seen{$int[$i]})) {
      $seen{$int[$i]} = 1;
   } else {
      $seen{$int[$i]}++;
   }
}

print "odd count is :\n";
foreach my $key (keys(%seen)) {
  if ($seen{$key} && ($seen{$key} % 2) == 1) {
    print $key, " = ", $seen{$key},"\n";
  }
}
