/*
 * gadgetd-introspection.h
 * Copyright (c) 2012-2014 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <glib.h>

/**
 * @brief Parses modules alias file from given path, search for usbfunc modules
 * @details Finds module aliases in format "usbfunc:<str>" and puts <str> into list.
 * @param [in] path Path to modules.alias file
 * @param [out] aliases Pointer to array containting result (allocated in function)
 * @return Error code if failed or GD_SUCCESS if succeed.
 **/
int gd_list_usbfunc_modules(char *path, gchar ***aliases);
