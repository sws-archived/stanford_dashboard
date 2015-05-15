/**
 * Pause / Unpause toggle.
 */

Drupal.behaviors.stanford_dashboard_site = {
  attach: function(context, settings) {
  (function ($) {

    $('.view-id-stanford_dashboard_site_by_user tr', context).each(function () {
      if ($(this).find('.pingdom-paused').length) {

        // If there is, change true to false in the a.pingdom-pause-callback href
        $(this).find('a.pingdom-pause-callback').each(function () {
          this.href = this.href.replace("true", "false");
        });

        // And change the value from "Pause Monitoring" to "Unpause Monitoring"
        $(this).find('a.pingdom-pause-callback').text("Unpause Monitoring");

      }
    });

  })(jQuery);

  }
};
