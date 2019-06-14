
#include "{{PROJECT_NAME}}.hpp"

namespace Options = boost::program_options;

int main(int argc, char *argv[])
{
    Options::options_description desc("Program Options");
    desc.add_options()
        ("help", "Display this help menu and exit.")
        ("version", "Display program version information and exit.")
    ;

    Options::variables_map vm;
    Options::store(Options::parse_command_line(argc, argv, desc), vm);
    Options::notify(vm);

    if (vm.count("help")) {
        std::cout << desc << std::endl;

        return EXIT_SUCCESS;
    }

    if (vm.count("version")) {
        std::cout << "<Program Version Info>" << std::endl;

        return EXIT_SUCCESS;
    }

    std::cout << "<Program Execution...>" << std::endl;

    return EXIT_SUCCESS;
}

