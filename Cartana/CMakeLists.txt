# CMakeList.txt : CMake project for Cartana, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Cartana "Cartana.cpp" "Cartana.h" "src/Core/Core.cpp" "src/Core/Core.h" "src/Models/Commands/Command/Command.cpp" "src/Models/Commands/Command/Command.h"  "src/Models/Commands/CommandResult/CommandResult.cpp" "src/Models/Commands/CommandResult/CommandResult.h" "src/Models/Commands/CommandResultType/CommandResultType.h" "src/Models/Log/Log.cpp" "src/Models/Log/Log.h" "src/Models/Commands/CommandHandler/CommandHandler.cpp" "src/Models/Commands/CommandHandler/CommandHandler.h" "src/Models/Commands/Command/Command.h" "src/Hardware/Hardware.cpp" "src/Hardware/Hardware.h" "src/models/Commands/ValidCommands/ValidCommands.h" "src/models/Commands/ValidCommands/ValidCommands.cpp" "src/models/Commands/InvalidCommand/InvalidCommand.h" "src/models/Commands/InvalidCommand/InvalidCommand.cpp" "src/Models/Exceptions/CommandException/CommandException.h"  "src/Models/Exceptions/Exception.h" "src/Models/Exceptions/Exception.cpp" "src/Hardware/Hardware.cpp" "src/Hardware/Hardware.h" "src/Models/Commands/CommandActions/CommandActions.h" "src/Models/Commands/CommandActions/CommandActions.cpp" "src/Hardware/Engine/Engine.h" "src/Hardware/Engine/Engine.cpp")

# TODO: Add tests and install targets if needed.
