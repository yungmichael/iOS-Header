//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDCodableCompanionUserNotificationConfiguration : PBCodable <NSCopying>
{
    int _notificationType;
    struct {
        unsigned int notificationType:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsNotificationType:(id)arg1;
- (id)notificationTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasNotificationType;
@property(nonatomic) int notificationType; // @synthesize notificationType=_notificationType;

@end

