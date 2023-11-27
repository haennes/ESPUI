const char HTML_INDEX[] PROGMEM = R"=====(
<!DOCTYPE html><html> <head><meta charset=utf-8><title>Control</title><meta name=viewport content="width=device-width, initial-scale=1"><link rel="shortcut icon" href=data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAAABGdBTUEAALGPC/xhBQAAACBjSFJNAAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAAPFBMVEUAAACA1VWR21qQ2liR3FqR3FqS3VuR3VqR3VuR3VqO21mS21uS3FqS3FqS21uJ2GKQ21qR3FuR3FoAAAB/3Gu7AAAAEnRSTlMABoA3kPBwz8i5Kzioxg4NVcU3uEJHAAAAAWJLR0QAiAUdSAAAAAlwSFlzAAAN1wAADdcBQiibeAAAAAd0SU1FB+EFEhcEM+HpYwQAAABYSURBVBjThY/JDsAgCESt4lpX/v9jLQZJ6qF9t3khAyj1xXUKbQ4BVowDwqOYgExkkW4iY6lPaF06RqM8YItOuRbMaz6xjbsusDAW/drplBg47jP696cXE8bPA1eUDeK2AAAAJXRFWHRkYXRlOmNyZWF0ZQAyMDE3LTA1LTE4VDIzOjA0OjUxKzAyOjAwxE59ewAAACV0RVh0ZGF0ZTptb2RpZnkAMjAxNy0wNS0xOFQyMzowNDo1MSswMjowMLUTxccAAAAZdEVYdFNvZnR3YXJlAHd3dy5pbmtzY2FwZS5vcmeb7jwaAAAAAElFTkSuQmCC><link rel=stylesheet href=/css/normalize.css><link rel=stylesheet href=/css/style.css><script src=/js/zepto.min.js></script><script src=/js/slider.js></script><script src=/js/graph.js></script><script src=/js/controls.js></script><script src=/js/tabbedcontent.js></script></head> <body onload=javascript:start();> <div> <h4> <div id=mainHeader>Control</div> <span id=conStatus class=label>Offline</span> </h4> </div> <hr> <div class=container> <div id=row class="row u-full-width"></div> <ul id=tabsnav class="navigation navigation-tabs u-full-width"></ul> <div id=tabscontent class="tabscontent u-full-width"></div> </div> </body> </html> 
)=====";

const uint8_t HTML_INDEX_GZIP[916] PROGMEM = { 31,139,8,0,58,75,100,101,2,255,133,148,235,115,162,58,20,192,255,21,174,159,238,157,221,22,95,181,237,174,56,19,20,108,85,68,64,240,241,45,64,42,193,240,40,9,162,254,245,155,128,157,238,157,189,211,235,12,201,201,57,191,243,200,17,206,240,175,137,57,94,239,86,154,20,177,132,140,134,245,42,13,35,4,195,209,48,65,12,74,65,4,11,138,152,82,178,183,187,167,209,144,97,70,208,104,156,165,172,200,200,80,110,142,13,153,194,4,41,39,140,170,60,43,152,20,112,4,165,76,105,85,56,100,145,18,162,19,14,208,93,125,248,46,225,20,51,12,201,29,13,32,65,74,167,53,26,18,156,30,165,2,17,165,69,35,238,30,148,76,194,60,68,75,138,10,244,166,132,144,193,31,56,129,7,36,231,233,225,167,15,41,26,244,191,99,79,53,237,170,61,159,30,50,192,127,75,199,141,52,247,192,37,85,28,129,53,6,134,216,179,133,245,188,22,130,58,13,213,181,171,1,176,152,174,198,242,57,82,45,174,28,171,177,163,207,150,220,58,152,113,223,195,43,87,174,68,188,49,24,240,53,20,158,102,46,162,14,18,190,232,189,113,80,18,237,73,196,91,233,170,225,105,110,205,118,188,141,221,237,188,91,93,130,237,158,254,46,30,167,231,149,118,207,227,114,179,155,221,78,226,116,59,165,83,219,248,195,229,89,119,58,183,184,31,231,57,163,139,188,170,220,155,150,143,34,190,150,218,206,154,24,64,205,64,239,184,82,171,235,19,126,152,95,113,118,62,244,151,94,224,246,74,109,246,82,223,116,51,91,216,109,11,96,224,134,78,173,32,149,163,147,171,232,73,167,2,96,18,6,170,133,177,143,106,91,216,118,220,142,174,126,211,116,45,10,52,227,219,75,190,171,68,35,212,157,227,218,170,167,198,235,104,39,207,38,20,28,198,154,195,250,36,223,202,167,231,120,97,237,103,131,119,253,153,245,142,17,184,196,157,243,214,157,251,86,95,245,178,106,82,189,155,187,131,118,62,30,55,125,188,27,144,21,212,219,3,251,221,120,218,189,50,179,180,125,3,94,7,231,216,167,37,157,128,141,28,22,57,81,15,253,199,120,53,120,30,4,91,237,201,95,129,14,114,39,104,222,21,213,205,182,182,190,121,177,143,187,173,77,204,100,121,217,111,244,246,222,2,23,99,162,245,22,107,208,89,172,181,190,55,121,189,154,49,104,155,177,123,158,95,193,133,203,213,89,123,120,70,149,248,43,188,182,237,69,237,253,148,251,173,115,230,119,237,124,159,30,129,17,131,243,242,210,174,150,78,251,108,234,214,197,184,102,213,114,146,117,12,135,86,70,156,85,198,194,93,159,131,64,148,176,15,53,111,23,234,203,211,62,181,123,187,237,140,128,151,176,23,94,30,114,63,97,215,93,87,175,246,206,195,41,72,144,255,24,87,176,110,169,70,244,245,209,41,173,100,60,254,237,77,166,236,66,16,141,16,98,205,75,44,7,148,202,105,86,36,144,224,43,186,231,167,255,131,107,101,3,210,160,192,57,147,104,17,40,114,76,229,43,202,89,118,159,224,244,62,230,70,185,177,254,65,81,130,67,84,124,137,28,10,152,71,95,18,65,243,173,211,47,33,6,125,31,133,183,111,254,223,164,92,15,19,105,232,103,225,69,202,82,146,193,80,137,225,9,54,246,31,148,193,130,253,253,207,79,78,132,248,36,102,79,191,17,37,28,42,9,196,233,11,119,71,197,231,200,105,40,154,195,84,16,60,165,195,32,43,169,20,16,72,169,66,160,143,200,200,124,123,227,157,69,188,8,142,113,90,174,131,222,92,163,226,150,160,241,16,69,243,52,168,248,76,91,100,213,205,216,18,98,121,247,86,18,210,204,46,62,170,110,97,74,34,80,126,113,154,194,143,88,45,46,226,3,100,56,75,165,79,241,78,64,127,68,41,201,103,66,1,220,154,247,17,233,119,213,127,23,240,177,137,198,214,119,172,103,247,47,103,53,186,226,210,5,0,0 };
