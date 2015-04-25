#[Stanford Dashboard](https://github.com/SU-SWS/stanford_Dashboard)
##### Version: 7.x-1.0-alpha

Maintainers: [jbickar](https://github.com/jbickar), [cjwest](https://github.com/cjwest)
[Changelog.txt](CHANGELOG.txt)

Drupal Features module for providing site owners with a view of their sites' status. Contains a content type for the dashboard which supplies information about the dashboard status and account information, and a content type for site information, and a few default dashboard views.


Sub Modules
---

**[Stanford Dashboard Site](modules/stanford_dashboard_site)**
A content type and collection of default views for use with the dashboard. 


Installation
---

Install this module like any other module. [See Drupal Documentation](https://drupal.org/documentation/install/modules-themes/modules-7)

Configuration
---

Steps neede to configure include:
create terms for site type and status taxonomies,
since view display sites acording to the order of the terms, adjust order of these terms in the vocabulary
update contextual filters in views with term IDs.
Create content: production sites establish the site "families," and these nodes must exist to be able to group development and production sites.

Troubleshooting
---

If you are experiencing issues with this module try reverting the feature first. If you are still experiencing issues try posting an issue on the GitHub issues page.

Contribution / Collaboration
---

You are welcome to contribute functionality, bug fixes, or documentation to this module. If you would like to suggest a fix or new functionality you may add a new issue to the GitHub issue queue or you may fork this repository and submit a pull request. For more help please see [GitHub's article on fork, branch, and pull requests](https://help.github.com/articles/using-pull-requests)
