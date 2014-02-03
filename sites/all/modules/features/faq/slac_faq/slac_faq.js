// Javascript document
(function ($, Drupal) {
  "use strict";
  Drupal.behaviors.slac_faq = {};
  Drupal.behaviors.slac_faq.attach = function (context, settings) {
    $('.view-id-faq .views-field-field-slac-faq-answer').hide().parent().parent().addClass('inactive');
    var $title = $('.view-id-faq .views-field-title');
    $title.click(function (event) {
      $(this).parent().parent().toggleClass('inactive');
      $(this).parent().find('.views-field-field-slac-faq-answer').slideToggle("fast");
      event.stopPropagation();
    });
  };
}(this.jQuery, this.Drupal));