//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreServices/_LSQueryResult.h>

__attribute__((visibility("hidden")))
@interface _LSQueryResultWithPropertyList : _LSQueryResult
{
    id _propertyList;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) id propertyList; // @synthesize propertyList=_propertyList;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)propertyListWithClass:(Class)arg1 valuesOfClass:(Class)arg2;
- (id)propertyListWithClass:(Class)arg1;
- (id)initWithPropertyList:(id)arg1;

@end

