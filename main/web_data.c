/****************************************************************
 * Includes
 ****************************************************************/
#include "web_data.h"

/****************************************************************
 * Defines, consts
 ****************************************************************/
const char* basicPage =	"<body>                                                                                                                                                  \
							<div>                                                                                                                                               \
								<input type=\"range\" min=\"0\" max=\"255\" value=\"128\" id=\"red\" style=\"background:#FF0000;\">                                                         \
								<input type=\"range\" min=\"0\" max=\"255\" value=\"128\" id=\"green\" style=\"background:#00FF00;\">                                                       \
								<input type=\"range\" min=\"0\" max=\"255\" value=\"128\" id=\"blue\" style=\"background:#0000FF;\">                                                        \
							</div>                                                                                                                                              \
							<script>                                                                                                                                            \
								var slider_red = document.getElementById(\"red\");                                                                                                \
								var slider_green = document.getElementById(\"green\");                                                                                            \
								var slider_blue = document.getElementById(\"blue\");                                                                                              \
								                                                                                                                                                \
								function updateColours() {                                                                                                                      \
									var xmlHttp = new XMLHttpRequest();                                                                                                         \
									xmlHttp.open(\"GET\", \"write?all-\" + slider_red.value + \"-\" + slider_green.value + \"-\" + slider_blue.value, true);        \
									                                                                                                                                            \
									xmlHttp.send(null);                                                                                                                         \
								}                                                                                                                                               \
								                                                                                                                                                \
								slider_red.onchange = updateColours;                                                                                                            \
								slider_green.onchange = updateColours;                                                                                                          \
								slider_blue.onchange = updateColours;                                                                                                           \
							</script>                                                                                                                                           \
						</body>";


