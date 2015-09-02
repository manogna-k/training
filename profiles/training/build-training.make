api = "2"
core = "7.x"

projects[drupal][version] = "7.x"

; Include the definition of how to build Drupal core directly, including patches.
includes[] = "drupal-org.make"

; Download the Training install profile and recursively build all its dependencies.
;projects[training][version] = 7.x-1.x
projects[training][type] = "profile"
projects[training][download][type] = "git"
projects[training][download][url] = "http://git.drupal.org/project/training.git"
projects[training][download][branch] = "7.x-1.x"
