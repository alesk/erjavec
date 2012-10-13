<link href='css/caroufredsel.css' rel='stylesheet' type='text/css' />
<!--<script src="http://code.jquery.com/jquery-latest.js" type="text/javascript"></script>-->
<script src="js/jquery-1.8.1.min.js" type="text/javascript"></script>
<script type="text/javascript" src="js/jquery.carouFredSel-6.0.0-packed.js"></script>
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
      height: 256,
      width:960,
      auto 	: true,
      duration:1000,
      pauseonHover: "immediate",
      scroll: {
        items: 1,
        easing: "linear"
      }
    };

$("#slider").carouFredSel(settings);
$(".clickable").live("click", function() {
    window.location = $(this).attr('data-url');
});
});
</script>
