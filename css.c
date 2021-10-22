#include <gtk/gtk.h>

char *css=
"  @define-color BACKGROUND rgb(10%,10%,10%);\n"
"  @define-color OFF_WHITE rgb(90%,90%,90%);\n"
"  @define-color BOX_ON rgb(62%,47%,69%);\n"
"  @define-color BOX_OFF rgb(20%,20%,20%);\n"
"  @define-color TEXT_A rgb(92%,61%,50%);\n"
"  @define-color TEXT_B rgb(64%,80%,82%);\n"
"  @define-color TEXT_C rgb(93%,62%,50%);\n"
"  @define-color WARNING rgb(85%,27%,27%);\n"
"  @define-color DARK_LINES rgb(30%,30%,30%);\n"
"  @define-color DARK_TEXT rgb(70%,70%,70%);\n"
"  @define-color INFO_ON rgb(15%,58%,60%);\n"
"  @define-color INFO_OFF rgb(20%,20%,20%);\n"
"  @define-color BLACK rgb(0%,0%,0%);\n"
"  #receiver-window {\n"
"    background-image: none;\n"
"    background-color: @BACKGROUND;\n"
//"    color: @OFF_WHITE;\n"
"    color: @BLACK;\n"
"    }\n"
"  #vfo-a-text {\n"
"    font-family: Noto Sans;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    font-family: Noto Sans;\n"
"    color: @TEXT_B;\n"
"    }\n"
"  #frequency-a-text {\n"
"    font-family: Noto Mono;\n"
"    font-size: 28px;\n"
"    color: @TEXT_B;\n"
"    }\n"
"  #vfo-b-text {\n"
"    font-family: Noto Sans;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    color: @TEXT_C;\n"
"    }\n"
"  #frequency-b-text {\n"
"    font-family: Noto Mono;\n"
"    font-size: 21px;\n"
"    color: @TEXT_C;\n"
"    }\n"
"  #vfo-button {\n"
"    border-radius: 5px;\n"
"    border-style: none;\n"
"    border-width: 1px;\n"
"    padding-top: 0px;\n"
"    padding-right: 0px;\n"
"    padding-bottom: 0px;\n"
"    padding-left: 0px;\n"
"    font-family: Noto Sans;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    margin-top: 0px;\n"
"    margin-bottom: 0px;\n"
"    min-height: 0px;\n"
"    background-image: none;\n"
"    background-color: @BOX_OFF;\n"
"    color: @DARK_TEXT;\n"
"    box-shadow: none;\n"
"    }\n"
"  #vfo-toggle {\n"
"    border-radius: 5px;\n"
"    border-style: none;\n"
"    border-width: 1px;\n"
"    padding-top: 0px;\n"
"    padding-right: 3px;\n"
"    padding-bottom: 0px;\n"
"    padding-left: 3px;\n"
"    font-family: Noto Sans;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    margin-top: 0px;\n"
"    margin-bottom: 0px;\n"
"    min-height: 0px;\n"
"    background-image: none;\n"
"    background-color: @BOX_OFF;\n"
"    color: @DARK_TEXT;\n"
"    box-shadow: none;\n"
"    }\n"
"  #vfo-mode-filter-button {\n"
"    border-radius: 5px;\n"
"    border-style: none;\n"
"    border-width: 1px;\n"
"    padding-top: 0px;\n"
"    padding-right: 0px;\n"
"    padding-bottom: 0px;\n"
"    padding-left: 0px;\n"
"    font-family: Noto Sans;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    margin-top: 0px;\n"
"    margin-bottom: 0px;\n"
"    min-height: 0px;\n"
"    background-image: none;\n"
"    background-color: @BOX_ON;\n"
"    color: @OFF_WHITE;\n"
"    box-shadow: none;\n"
"    }\n"
"  #vfo-toggle:checked {\n"
"    border-radius: 5px;\n"
"    border-style: none;\n"
"    border-width: 1px;\n"
"    padding-top: 0px;\n"
"    padding-right: 3px;\n"
"    padding-bottom: 0px;\n"
"    padding-left: 3px;\n"
"    font-family: Noto Sans;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    margin-top: 0px;\n"
"    margin-bottom: 0px;\n"
"    min-height: 0px;\n"
"    background-image: none;\n"
"    background-color: @BOX_ON;\n"
"    color: @OFF_WHITE;\n"
"    box-shadow: none;\n"
"    }\n"
"  .label {\n"
"    border-width: 0px;\n"
"    padding-top: 0px;\n"
"    padding-right: 0px;\n"
"    padding-bottom: 0px;\n"
"    padding-left: 0px;\n"
"    font-size: small;\n"
"    margin-top: 0px;\n"
"    margin-bottom: 0px;\n"
"    }\n"
"  #warning-label {\n"
"    font-family: Noto Sans;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    color: @WARNING;\n"
"    }\n"
"  #info-button {\n"
"    border-radius: 5px;\n"
"    border-style: none;\n"
"    border-width: 1px;\n"
"    padding-top: 0px;\n"
"    padding-right: 0px;\n"
"    padding-bottom: 0px;\n"
"    padding-left: 0px;\n"
"    font-size: small;\n"
"    margin-top: 0px;\n"
"    margin-bottom: 0px;\n"
"    min-height: 0px;\n"
"    background-image: none;\n"
"    background-color: @BOX_OFF;\n"
"    color: @OFF_WHITE;\n"
"    box-shadow: none;\n"
"    }\n"
"  #rit-value {\n"
"    color: @OFF_WHITE;\n"
"    }\n"
"  #xit-value {\n"
"    color: @OFF_WHITE;\n"
"    }\n"
"  #afgain-text {\n"
"    font-family: Noto Sans;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    background-image: none;\n"
"    background-color: @BACKGROUND;\n"
"    color: @OFF_WHITE;\n"
"    }\n"
"  #afgain-scale trough {\n"
"    color: transparent;\n"
"    background-color: transparent;\n"
"    border-color: transparent;\n"
"     box-shadow: none;\n"
"    }\n"
"  #afgain-scale trough block.filled {\n"
"    border-color: @TEXT_B;\n"
"    }\n"
"  #agcgain-text {\n"
"    font-family: Noto Sans;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    background-image: none;\n"
"    background-color: @BACKGROUND;\n"
"    color: @OFF_WHITE;\n"
"    }\n"
"  #agcgain-scale trough {\n"
"    color: transparent;\n"
"    background-color: transparent;\n"
"    border-color: transparent;\n"
"    box-shadow: none;\n"
"    }\n"
"  #agcgain-scale trough block.filled  {\n"
"    background-color: @TEXT_C;\n"
"    border-color: @OFF_WHITE;\n"
"  }\n"
"  #info-warning {\n"
"    border-radius: 5px;\n"
"    border-style: none;\n"
"    border-width: 1px;\n"
"    padding-top: 0px;\n"
"    padding-right: 3px;\n"
"    padding-bottom: 0px;\n"
"    padding-left: 3px;\n"
"    font-family: Noto Sans;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    margin-top: 0px;\n"
"    margin-bottom: 0px;\n"
"    min-height: 0px;\n"
"    background-image: none;\n"
"    background-color: @BOX_OFF;\n"
"    color: @BACKGROUND;\n"
"    box-shadow: none;\n"
"    }\n"
"  #info-warning:checked {\n"
"    border-radius: 5px;\n"
"    border-style: none;\n"
"    border-width: 1px;\n"
"    padding-top: 0px;\n"
"    padding-right: 3px;\n"
"    padding-bottom: 0px;\n"
"    padding-left: 3px;\n"
"    font-family: Noto Sans;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    margin-top: 0px;\n"
"    margin-bottom: 0px;\n"
"    min-height: 0px;\n"
"    background-image: none;\n"
"    background-color: @WARNING;\n"
"    color: @BACKGROUND;\n"
"    box-shadow: none;\n"
"    }\n"
"  #info-button {\n"
"    border-radius: 5px;\n"
"    border-style: none;\n"
"    border-width: 1px;\n"
"    padding-top: 0px;\n"
"    padding-right: 3px;\n"
"    padding-bottom: 0px;\n"
"    padding-left: 3px;\n"
"    font-family: Noto Sans;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    margin-top: 0px;\n"
"    margin-bottom: 0px;\n"
"    min-height: 0px;\n"
"    background-image: none;\n"
"    background-color: @INFO_OFF;\n"
"    color: @BACKGROUND;\n"
"    box-shadow: none;\n"
"    }\n"
"  #info-button:checked {\n"
"    border-radius: 5px;\n"
"    border-style: none;\n"
"    border-width: 1px;\n"
"    padding-top: 0px;\n"
"    padding-right: 3px;\n"
"    padding-bottom: 0px;\n"
"    padding-left: 3px;\n"
"    font-family: Noto Sans;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    margin-top: 0px;\n"
"    margin-bottom: 0px;\n"
"    min-height: 0px;\n"
"    background-image: none;\n"
"    background-color: @INFO_ON;\n"
"    color: @INFO_TRUE;\n"
"    box-shadow: none;\n"
"    }\n"
"  #transmit-warning {\n"
"    border-radius: 5px;\n"
"    border-style: none;\n"
"    border-width: 1px;\n"
"    padding-top: 5px;\n"
"    padding-right: 5px;\n"
"    padding-bottom: 5px;\n"
"    padding-left: 5px;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    font-family: Noto Sans;\n"
"    font-size: small;\n"
"    margin-top: 0px;\n"
"    margin-bottom: 0px;\n"
"    min-height: 0px;\n"
"    background-image: none;\n"
"    background-color: @BOX_OFF;\n"
"    color: @DARK_TEXT;\n"
"    box-shadow: none;\n"
"    }\n"
"  #transmit-warning:checked {\n"
"    border-radius: 5px;\n"
"    border-style: none;\n"
"    border-width: 1px;\n"
"    padding-top: 5px;\n"
"    padding-right: 5px;\n"
"    padding-bottom: 5px;\n"
"    padding-left: 5px;\n"
"    font-family: Noto Sans;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    margin-top: 0px;\n"
"    margin-bottom: 0px;\n"
"    min-height: 0px;\n"
"    background-image: none;\n"
"    background-color: @WARNING;\n"
"    color: @INFO_TRUE;\n"
"    box-shadow: none;\n"
"    }\n"
;

void load_css() {
  GtkCssProvider *provider;
  GdkDisplay *display;
  GdkScreen *screen;

  g_print("%s\n",__FUNCTION__);
  provider = gtk_css_provider_new ();
  display = gdk_display_get_default ();
  screen = gdk_display_get_default_screen (display);
  gtk_style_context_add_provider_for_screen (screen,
                                             GTK_STYLE_PROVIDER(provider),
                                             GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

  gtk_css_provider_load_from_data(provider, css, -1, NULL);
  g_object_unref (provider);
}
