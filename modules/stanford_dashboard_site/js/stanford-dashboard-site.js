jQuery(document).ready(function ($) {
  // For each views table row, see if there is a .pingdom-paused element
  $('.view-id-stanford_dashboard_site_by_user tr').each(function () {
    if ($(this).find('.pingdom-paused').length) {
      // If there is, change true to false in the a.pingdom-pause-callback href
      $(this).find('a.pingdom-pause-callback').each(function () {
        this.href = $(this).attr('href').replace("true", "false");
      });
      // And change the value from "Pause Monitoring" to "Unpause Monitoring"
        var unpause = Drupal.t("Unpause Monitoring");
      $(this).find('a.pingdom-pause-callback').text(unpause);
    }
  });
});

