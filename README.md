# Spletno mesto "Kuhinje Erjavec"

## Objavi stran v github pages

V repozitoriju narpavi "odklopljeno vejo" gh-pages:

    git checkout --orphan gh-pages

jo sprazni in komitaj:

   git rm -rf .
   git rm .gitignore
   git commit -a -m "Initial import"

Če želiš narediti "unpublish":

  git branch --delete gh-pages

Preberi več na: https://help.github.com/articles/creating-pages-with-the-automatic-generator

    git config --add remote.origin.push +refs/heads/master:refs/heads/gh-pages
    git push

Če hočeš napraviti gh-pages enak master-ju, preberi;

http://stackoverflow.com/questions/1705224/github-how-to-include-files-from-master-in-new-git-branch-gh-pages


## jQuery plugins

Site with 30 plugins for responsive design:

    http://www.2expertsdesign.com/graphics/30-jquery-plugins-to-help-with-responsive-layouts

Uporabi raje caroufredsel:

    http://caroufredsel.frebsite.nl/

## References

  http://www.lmdigital.si/narocniki/liko/
  http://www.kuhinje-erjavec.si/
  http://paulhammant.com/blog/github-as-a-cms-to-end-cmses.html
