//
//	AppDelegate.h
//	Cakebrew – The Homebrew GUI App for OS X 
//
//	Created by Vincent Saluzzo on 06/12/11.
//	Copyright (c) 2014 Bruno Philipe. All rights reserved.
//
//	This program is free software: you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Cocoa/Cocoa.h>

extern NSString *const kBP_HOMEBREW_PATH;
extern NSString *const kBP_HOMEBREW_PATH_KEY;
extern NSString *const kBP_HOMEBREW_PROXY_KEY;
extern NSString *const kBP_HOMEBREW_PROXY_ENABLE_KEY;
extern NSString *const kBP_HOMEBREW_WEBSITE;

extern NSString *const kBP_EXCEPTION_HOMEBREW_NOT_INSTALLED;

extern NSString *const kBP_NOTIFICATION_FORMULAS_CHANGED;
extern NSString *const kBP_NOTIFICATION_LOCK_WINDOW;
extern NSString *const kBP_NOTIFICATION_UNLOCK_WINDOW;
extern NSString *const kBP_NOTIFICATION_SEARCH_UPDATED;

extern NSString *const kBP_FORMULA_OPTION_COMMAND;
extern NSString *const kBP_FORMULA_OPTION_DESCRIPTION;

@interface BPAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (getter=isRunningBackgroundTask) BOOL runningBackgroundTask;

- (NSURL*)urlForApplicationSupportFolder;
- (NSURL*)urlForApplicationCachesFolder;

- (IBAction)openWebsite:(id)sender;
- (IBAction)showPreferencesWindow:(id)sender;

- (void)displayBackgroundWarning;

@end
