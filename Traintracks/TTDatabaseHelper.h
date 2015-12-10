//
//  TTDatabaseHelper.h
//

@interface TTDatabaseHelper : NSObject

+ (TTDatabaseHelper*)getDatabaseHelper;
- (BOOL)createTables;
- (BOOL)dropTables;
- (BOOL)resetDB:(BOOL) deleteDB;
- (BOOL)deleteDB;

- (BOOL)addEvent:(NSString*) event;
- (BOOL)addIdentify:(NSString*) identify;
- (NSMutableArray*)getEvents:(long long) upToId limit:(long long) limit;
- (NSMutableArray*)getIdentifys:(long long) upToId limit:(long long) limit;
- (int)getEventCount;
- (int)getIdentifyCount;
- (int)getTotalEventCount;
- (BOOL)removeEvents:(long long) maxId;
- (BOOL)removeIdentifys:(long long) maxIdentifyId;
- (BOOL)removeEvent:(long long) eventId;
- (BOOL)removeIdentify:(long long) identifyId;
- (long long)getNthEventId:(long long) n;
- (long long)getNthIdentifyId:(long long) n;

- (BOOL)insertOrReplaceKeyValue:(NSString*) key value:(NSString*) value;
- (BOOL)insertOrReplaceKeyLongValue:(NSString*) key value:(NSNumber*) value;
- (NSString*)getValue:(NSString*) key;
- (NSNumber*)getLongValue:(NSString*) key;

@end
