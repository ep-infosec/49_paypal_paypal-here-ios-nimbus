//
// Copyright 2013 Max Metral
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <UIKit/UIKit.h>

@class NICSSRuleset;
@class NIDOM;

@interface UIImageView (NIStyleable)

/**
 * Applies the given rule set to this image view.
 *
 * This method is exposed primarily for subclasses to use when implementing the
 * applyStyleWithRuleSet: method from NIStyleable. Since some of the view
 * styles (e.g. positioning) may rely on some label elements (like text), this is called
 * before the view styling is done.
 */
- (void)applyImageViewStyleBeforeViewWithRuleSet:(NICSSRuleset *)ruleSet inDOM: (NIDOM*) dom;

@end
