#include <gtkmm.h>

class MyWindow : public Gtk::Window{
  public:
    MyWindow();
};

MyWindow::MyWindow(){
  set_title("First App");
  set_default_size(300, 200);
}

int main(int argc, char* argv[]){
  auto app = Gtk::Application::create("org.gtkmm.exaples.main");

  return app->make_window_and_run<MyWindow>(argc, argv);
}