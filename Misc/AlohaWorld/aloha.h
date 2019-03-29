#pragma once

#include <iostream>
#include <string>

/**
 * @class       Aloha
 *
 * @brief       A set of helper functions for C++ newbie
 *
 * @author      Cyd
 * @date        2019/3/3
 */

class Aloha {
public:

  /**
   * @fn        static void Aloha::pause(std::string hints = "Press any key to continue.")
   *
   * @brief     Pauses the program. Continues when the user presses any key. Used only in console applications
   *
   * @author    Cyd
   * @date      2019/3/3
   *
   * @param     hints   (Optional) The hints.
   *
   * pause() is generally used in main() function before the return statement.
   * It utilizes standard input facilities to wait user's input.
   * Once the user hits the keyboard,  pause will terminate.
   * pause() accepts one parameter which is a message to the user to tell what to do.
   * If no arguments are provided, pause will output "Press any key to continue."
   */
  static void pause(const std::string& hints = "Press any key to continue.") {
    // Pause the console windows when program terminates
    std::streamsize bufSize = std::cin.rdbuf()->in_avail();
    if (bufSize >= 1) {
      // extract and discard 1 character (CR) that remain in the input buffer
      std::cin.ignore(bufSize);
    }
    std::cout << "\n" << hints;
    std::cin.get();    // wait until the user hit the keyboard
  }
};