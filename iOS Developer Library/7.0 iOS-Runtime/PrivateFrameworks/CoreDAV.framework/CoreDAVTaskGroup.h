/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <CoreDAVAccountInfoProvider>, <CoreDAVTaskGroupDelegate>, <CoreDAVTaskManager>, NSError, NSMutableSet, NSString;

@interface CoreDAVTaskGroup : NSObject <CoreDAVSubmittable> {
    <CoreDAVAccountInfoProvider> *_accountInfoProvider;
    id _completionBlock;
    id _context;
    <CoreDAVTaskGroupDelegate> *_delegate;
    NSError *_error;
    BOOL _isCancelling;
    BOOL _isFinished;
    BOOL _isTearingDown;
    NSMutableSet *_outstandingTasks;
    id _progressBlock;
    <CoreDAVTaskManager> *_taskManager;
    double _timeoutInterval;
}

@property <CoreDAVAccountInfoProvider> * accountInfoProvider;
@property(copy) id completionBlock;
@property(retain) id context;
@property(copy,readonly) NSString * debugDescription;
@property <CoreDAVTaskGroupDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) NSError * error;
@property(readonly) unsigned int hash;
@property(readonly) NSMutableSet * outstandingTasks;
@property(copy) id progressBlock;
@property(readonly) Class superclass;
@property <CoreDAVTaskManager> * taskManager;
@property double timeoutInterval;

- (void)_tearDownAllTasks;
- (id)accountInfoProvider;
- (void)bailWithError:(id)arg1;
- (void)cancelTaskGroup;
- (id)completionBlock;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (void)finishCoreDAVTaskGroupWithError:(id)arg1 delegateCallbackBlock:(id)arg2;
- (void)finishCoreDAVTaskGroupWithError:(id)arg1;
- (void)finishEarlyWithError:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)outstandingTasks;
- (id)progressBlock;
- (void)setAccountInfoProvider:(id)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setProgressBlock:(id)arg1;
- (void)setTaskManager:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)startTaskGroup;
- (void)submitWithTaskManager:(id)arg1;
- (void)syncAway;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)taskManager;
- (double)timeoutInterval;

@end