/*
 * KSSheetView.h
 *
 * Copyright 2011 Davide De Rosa
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#import <UIKit/UIKit.h>
#import "ARCHelper.h"

@protocol KSSheetViewDelegate;

@interface KSSheetView : UIView {
    CGColorRef paperColor;
    CGColorRef lineColor;
}

@property (nonatomic, assign) NSUInteger cellSize;
@property (nonatomic, assign) CGPoint offset;
@property (nonatomic, assign) CGFloat lineWidth;

// derived from cellSize
@property (nonatomic, readonly) NSUInteger gridWidth;
@property (nonatomic, readonly) NSUInteger gridHeight;

// for custom drawing
@property (nonatomic, ah_weak) id<KSSheetViewDelegate> delegate;

@end

@protocol KSSheetViewDelegate

- (void) drawInSheet:(KSSheetView *)sheetView inContext:(CGContextRef)context inRect:(CGRect)rect;

@end
