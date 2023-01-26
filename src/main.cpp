#include <gtkmm.h>
#include <string>

int main(int argc, char *argv[])
{
    auto app =
        Gtk::Application::create(argc, argv,
                                 "org.noahpaladino.simple-gtk-prompt");

    std::string prompt = "";
    if (argc > 1)
        prompt = argv[1];

    Gtk::Window w;
    {
        Gtk::MessageDialog dialog(w, "Message dialog", false, Gtk::MESSAGE_OTHER, Gtk::BUTTONS_OK);
        dialog.set_title("");
        dialog.set_message(prompt.c_str());
        dialog.run();
    }

    return 0;
}