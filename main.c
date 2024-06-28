// src/core/main.c
#include "init/initialize.c"
#include "scheduler/scheduler.c"
#include "services/service_manager.c"
#include "ui/ui_manager.c"

int main() {
    initialize_system();
    start_scheduler();
    start_services();
    initialize_ui();
    run_event_loop();
    return 0;
}
