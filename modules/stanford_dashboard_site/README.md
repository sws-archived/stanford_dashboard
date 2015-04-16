#[Stanford Dashboard Site](https://github.com/SU-SWS/stanford_Dashboard)
##### Version: 7.x-1.0-alpha

Maintainers: [jbickar](https://github.com/jbickar), [cjwest](https://github.com/cjwest)    
[Changelog.txt](CHANGELOG.txt)


**[Stanford Dashboard Site](modules/stanford_dashboard_site)**
A content type and collection of default views for use with the dashboard. 

* Views *
Manage Dashboard Site
Provides a bulk view for managing and editing site information.

Stanford Dashboard Site: by user
A view that displays site information in a dasboard style. This has two displays:
1. A page display for a typical user at dashboard/sites. This shows only the sites associated with the currently logged in user. 
2. A page display for an administrator at dashboard/sites/admin. This shows all the sites for users with the administrator role.

Stanford Dashboard Site: at a glance
This view has six block displays which summarize site status information for both the current user and the admin. For each audience the blocks are Up, Paused, and Down.

Stanford Dashboard Site: Production sites
This view provides a list of all production sites. This is an entity reference display for use on the node edit form for the Site content type. It allows the user to select only production sites, and is used to put sites into groups or "families."
 
Installation
---

Install this module like any other module. [See Drupal Documentation](https://drupal.org/documentation/install/modules-themes/modules-7)

Configuration
---

Nothing special needed.

Troubleshooting
---

If you are experiencing issues with this module try reverting the feature first. If you are still experiencing issues try posting an issue on the GitHub issues page.

Contribution / Collaboration
---

You are welcome to contribute functionality, bug fixes, or documentation to this module. If you would like to suggest a fix or new functionality you may add a new issue to the GitHub issue queue or you may fork this repository and submit a pull request. For more help please see [GitHub's article on fork, branch, and pull requests](https://help.github.com/articles/using-pull-requests)
