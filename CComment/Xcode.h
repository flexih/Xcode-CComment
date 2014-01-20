//
//  Xcode.h
//  CComment
//
//  Created by flexih on 14-1-17.
//  Copyright (c) 2014 flexih. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface Xcode : NSObject

+ (id)currentEditor;
+ (NSTextView *)textView;
+ (void)replaceCharactersInRange:(NSRange)range withString:(NSString *)aString;
//+ (void)setupKeyBinding;

@end
