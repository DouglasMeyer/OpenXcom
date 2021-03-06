/*
 * Copyright 2010-2013 OpenXcom Developers.
 *
 * This file is part of OpenXcom.
 *
 * OpenXcom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenXcom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenXcom.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef OPENXCOM_OPTIONS_H
#define OPENXCOM_OPTIONS_H

#include <string>
#include <vector>

namespace OpenXcom
{

/**
 * Enumeration for the battlescape scrolling types.
 */
enum ScrollType { SCROLL_TRIGGER, SCROLL_AUTO, SCROLL_DRAG };

/**
 * Enumeration for the keyboard modes.
 */
enum KeyboardType { KEYBOARD_ON, KEYBOARD_VIRTUAL, KEYBOARD_OFF };

/**
 * Enumeration for the savegame sorting modes.
 */
enum SaveSort { SORT_NAME_ASC, SORT_NAME_DESC, SORT_DATE_ASC, SORT_DATE_DESC };

/**
 * Container for all the various global game options
 * and customizable settings.
 */
namespace Options
{
	/// Restores default options.
	void createDefault();
	/// Initializes the options settings.
	bool init(int argc, char** args);
	/// Loads options from YAML.
	void load(const std::string &filename = "options");
	/// Saves options to YAML.
	void save(const std::string &filename = "options");
	/// Gets the game's data folder.
	std::string getDataFolder();
	/// Sets the game's data folder.
	void setDataFolder(const std::string &folder);
	/// Gets the game's data list.
	std::vector<std::string> *getDataList();
	/// Gets the game's user folder.
	std::string getUserFolder();
	/// Sets the game's data, user and config folders.
	void setFolders();
	/// Update game options from config file and command line.
	void updateOptions();
	/// Gets a string option.
	std::string getString(const std::string& id);
	/// Gets an integer option.
	int getInt(const std::string& id);
	/// Gets a boolean option.
	bool getBool(const std::string& id);
	/// Sets a string option.
	void setString(const std::string& id, const std::string& value);
	/// Sets an integer option.
	void setInt(const std::string& id, int value);
	/// Sets a boolean option.
	void setBool(const std::string& id, bool value);
	/// Gets the list of rulesets to use.
	std::vector<std::string> getRulesets();
	/// Gets the list of rulesets to use.
	std::vector<std::string> getPurchaseExclusions();
}

}

#endif
