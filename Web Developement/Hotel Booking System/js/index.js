
/*
  Developer Info

  Name : Dipak Kumal
  Address : Rapti-2 Lalmatiya Dang
  facebook : dipak.kumal.992.com
  Github : Dipak1203.github.io
  Instagram : dipakkumal2


*/






    //  This code for sliders
     
     
     
     
    var swiper = new Swiper(".mySwiper", {
        spaceBetween: 30,
        effect: "fade",
        loop: true,
        autoplay: {
            delay: 3000,
            disableOnInteraction: false
        }
    });



    // This script is testinomials
    var swiperTest = new Swiper(".swiper-testinomials", {
      effect: "coverflow",
      grabCursor: true,
      centeredSlides: true,
      slidesPerView: "3",
      loop: true,
      coverflowEffect: {
          rotate: 50,
          stretch: 0,
          depth: 100,
          modifier: 1,
          slideShadows: false
      },
      breakpoints: {
          320: {
              slidesPerView: 1,
          },
          640: {
              slidesPerView: 1,
          },
          768: {
              slidesPerView: 2,
          },
          1024: {
              slidesPerView: 3,
          }

      },
      pagination: {
          el: ".swiper-pagination",
      },

  });