/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class <DADataclassLockWatcher>, NSMutableArray, NSMutableSet, NSString;

@interface DALocalDBGateKeeper : NSObject {
    <DADataclassLockWatcher> *_bookmarksLockHolder;
    NSMutableArray *_bookmarksWaiters;
    BOOL _claimedOwnershipOfBookmarks;
    BOOL _claimedOwnershipOfContacts;
    BOOL _claimedOwnershipOfEvents;
    BOOL _claimedOwnershipOfNotes;
    <DADataclassLockWatcher> *_contactsLockHolder;
    NSMutableArray *_contactsWaiters;
    <DADataclassLockWatcher> *_eventsLockHolder;
    NSMutableArray *_eventsWaiters;
    <DADataclassLockWatcher> *_notesLockHolder;
    NSMutableArray *_notesWaiters;
    NSString *_unitTestHackRunLoopMode;
    NSMutableSet *_waiterIDsExpectingBookmarksLock;
    NSMutableSet *_waiterIDsExpectingContactsLock;
    NSMutableSet *_waiterIDsExpectingEventsLock;
    NSMutableSet *_waiterIDsExpectingNotesLock;
}

@property(retain) <DADataclassLockWatcher> * bookmarksLockHolder;
@property(retain) NSMutableArray * bookmarksWaiters;
@property BOOL claimedOwnershipOfBookmarks;
@property BOOL claimedOwnershipOfContacts;
@property BOOL claimedOwnershipOfEvents;
@property BOOL claimedOwnershipOfNotes;
@property(retain) <DADataclassLockWatcher> * contactsLockHolder;
@property(retain) NSMutableArray * contactsWaiters;
@property(retain) <DADataclassLockWatcher> * eventsLockHolder;
@property(retain) NSMutableArray * eventsWaiters;
@property(retain) <DADataclassLockWatcher> * notesLockHolder;
@property(retain) NSMutableArray * notesWaiters;
@property(retain) NSString * unitTestHackRunLoopMode;
@property(retain) NSMutableSet * waiterIDsExpectingBookmarksLock;
@property(retain) NSMutableSet * waiterIDsExpectingContactsLock;
@property(retain) NSMutableSet * waiterIDsExpectingEventsLock;
@property(retain) NSMutableSet * waiterIDsExpectingNotesLock;

+ (id)sharedGateKeeper;

- (void).cxx_destruct;
- (void)_abortWaiterForWrappers:(id)arg1;
- (BOOL)_canWakenWaiter:(id)arg1;
- (void)_notifyWaitersForDataclasses:(id)arg1;
- (void)_registerWaiter:(id)arg1 forDataclassLocks:(int)arg2 preempt:(BOOL)arg3 completionHandler:(id)arg4;
- (void)_sendAllClearNotifications;
- (void)_setUnitTestHackRunLoopMode:(id)arg1;
- (id)bookmarksLockHolder;
- (id)bookmarksWaiters;
- (BOOL)claimedOwnershipOfBookmarks;
- (BOOL)claimedOwnershipOfContacts;
- (void)claimedOwnershipOfDataclasses:(int)arg1;
- (BOOL)claimedOwnershipOfEvents;
- (BOOL)claimedOwnershipOfNotes;
- (id)contactsLockHolder;
- (id)contactsWaiters;
- (void)dealloc;
- (id)eventsLockHolder;
- (id)eventsWaiters;
- (id)init;
- (id)notesLockHolder;
- (id)notesWaiters;
- (void)registerPreemptiveWaiter:(id)arg1 forDataclassLocks:(int)arg2 completionHandler:(id)arg3;
- (void)registerWaiter:(id)arg1 forDataclassLocks:(int)arg2 completionHandler:(id)arg3;
- (void)relinquishLocksForWaiter:(id)arg1 dataclasses:(int)arg2 moreComing:(BOOL)arg3;
- (void)setBookmarksLockHolder:(id)arg1;
- (void)setBookmarksWaiters:(id)arg1;
- (void)setClaimedOwnershipOfBookmarks:(BOOL)arg1;
- (void)setClaimedOwnershipOfContacts:(BOOL)arg1;
- (void)setClaimedOwnershipOfEvents:(BOOL)arg1;
- (void)setClaimedOwnershipOfNotes:(BOOL)arg1;
- (void)setContactsLockHolder:(id)arg1;
- (void)setContactsWaiters:(id)arg1;
- (void)setEventsLockHolder:(id)arg1;
- (void)setEventsWaiters:(id)arg1;
- (void)setNotesLockHolder:(id)arg1;
- (void)setNotesWaiters:(id)arg1;
- (void)setUnitTestHackRunLoopMode:(id)arg1;
- (void)setWaiterIDsExpectingBookmarksLock:(id)arg1;
- (void)setWaiterIDsExpectingContactsLock:(id)arg1;
- (void)setWaiterIDsExpectingEventsLock:(id)arg1;
- (void)setWaiterIDsExpectingNotesLock:(id)arg1;
- (id)stateString;
- (id)unitTestHackRunLoopMode;
- (void)unregisterWaiterForDataclassLocks:(id)arg1;
- (id)waiterIDsExpectingBookmarksLock;
- (id)waiterIDsExpectingContactsLock;
- (id)waiterIDsExpectingEventsLock;
- (id)waiterIDsExpectingNotesLock;

@end