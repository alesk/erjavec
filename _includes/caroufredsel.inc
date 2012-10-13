<link href='{{site.url}}/css/caroufredsel.css' rel='stylesheet' type='text/css' />
<!--<script src="http://code.jquery.com/jquery-latest.js" type="text/javascript"></script>-->
<script src="{{site.url}}/js/jquery-1.8.1.min.js" type="text/javascript"></script>
<script src="{{site.url}}/js/jquery.carouFredSel-6.0.0-packed.js" type="text/javascript" ></script>
<script>
$(document).ready(function() {
    var settings = {
      direction:"left",
      items: {
        visible: 3,
        width:460,
        start: -1
      },
      circular: true,
      infinite: true,
      responsive: true,
      height: 250,
      width:960,
      auto 	: true,
      pauseonHover: "immediate",
      duration:500,
      scroll: {
        items: 1,
        duration:800,
        easing: "swing"
      }
    };

$("#slider").carouFredSel(settings);
$(".clickable").live("click", function() {
    window.location = $(this).attr('data-url');
});
});
</script>
