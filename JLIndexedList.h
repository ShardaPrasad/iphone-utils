//
//  JLIndexedList.h
//  Additions
//
//  Created by jlopez on 2/13/10.
//  Copyright 2010 JLA. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface JLIndexedList : NSObject {
@private
  NSArray *indexTitles;
  NSArray *sections;
  SEL labelSelector;
}

@property (nonatomic, readonly) NSArray *indexTitles;
@property (nonatomic, readonly) NSArray *sections;

+ (id)indexedListWithArray:(NSArray *)array labelSelector:(SEL)labelSelector index:(BOOL)flag;
+ (id)indexedListWithValues:(NSArray *)values header:(NSString *)header;

- (id)initWithArray:(NSArray *)array labelSelector:(SEL)labelSelector index:(BOOL)flag;
- (id)initWithValues:(NSArray *)values header:(NSString *)header;
- (NSString *)labelAtIndexPath:(NSIndexPath *)indexPath;
- (NSIndexPath *)indexPathForValue:(id)value;
- (id)valueAtIndexPath:(NSIndexPath *)indexPath;

@end
