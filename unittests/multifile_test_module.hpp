#include <chaiscript/chaiscript_basic.hpp>

class Multi_Test_Module {
public:
  static int get_module_value();

  Multi_Test_Module() noexcept;

  chaiscript::ModulePtr get_module();
};
