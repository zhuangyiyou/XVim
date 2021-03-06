//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode-7GM.app/Contents/Developer/Platforms/MacOSX.platform/Developer/Library/PrivateFrameworks/GPUToolsDesktopFoundation.framework/Versions/A/GPUToolsDesktopFoundation
// UUID: E46BFC03-CA86-3720-89C1-C57C41E8AD84
//
//                           Arch: x86_64
//                Current version: 0.0.0
//          Compatibility version: 0.0.0
//                 Source version: 18013.0.0.0.0
//       Minimum Mac OS X version: 10.10.0
//                    SDK version: 10.11.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSNetServiceDelegate <NSObject>

@optional
- (void)netService:(NSNetService *)arg1 didAcceptConnectionWithInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3;
- (void)netService:(NSNetService *)arg1 didUpdateTXTRecordData:(NSData *)arg2;
- (void)netServiceDidStop:(NSNetService *)arg1;
- (void)netService:(NSNetService *)arg1 didNotResolve:(NSDictionary *)arg2;
- (void)netServiceDidResolveAddress:(NSNetService *)arg1;
- (void)netServiceWillResolve:(NSNetService *)arg1;
- (void)netService:(NSNetService *)arg1 didNotPublish:(NSDictionary *)arg2;
- (void)netServiceDidPublish:(NSNetService *)arg1;
- (void)netServiceWillPublish:(NSNetService *)arg1;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(Protocol *)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (BOOL)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

__attribute__((visibility("hidden")))
@interface DYBaseDesktopLaunchStrategy : DYGuestAppLaunchStrategy
{
}

- (void)registerInferiorPid:(int)arg1;

@end

__attribute__((visibility("hidden")))
@interface DYDesktopApp : DYGuestApp
{
}

- (id)init;

@end

__attribute__((visibility("hidden")))
@interface DYDesktopControlStrategy : DYGuestAppControlStrategy
{
}

- (void)terminate;
- (void)resume;

@end

__attribute__((visibility("hidden")))
@interface DYDesktopDeferredLaunchStrategy : DYBaseDesktopLaunchStrategy
{
}

- (id)performLaunch:(id)arg1 connectFuture:(id)arg2;

@end

@interface DYDesktopDevice : DYDevice
{
    struct dispatch_queue_s *_queue;
    struct dispatch_queue_s *_requestsQueue;
    DYDesktopDeviceTransport *_appServiceTransport;
    struct dispatch_queue_s *_appServiceTransportQueue;
    BOOL _gputoolsServiceAvailable;
    NSError *_gputoolsServiceAvailabilityError;
    NSNetService *_service;
    NSString *_connectionAddress;
}

+ (id)replayerAppIdentifier;
+ (Class)controlStrategyClass;
+ (Class)deferredLaunchStrategyClass;
+ (Class)launchStrategyClass;
+ (void)initialize;
@property(retain, nonatomic) NSString *connectionAddress; // @synthesize connectionAddress=_connectionAddress;
@property(readonly, nonatomic) __weak NSNetService *service; // @synthesize service=_service;
- (id)gputoolsServiceAvailabilityError;
- (BOOL)gputoolsServiceAvailable;
- (void).cxx_destruct;
- (id)streamArchiveAtURL:(id)arg1 destinationName:(id)arg2;
- (id)iconDataForApplicationIdentifiers:(id)arg1;
- (id)refreshDeviceProperties;
- (id)_checkGPUToolsServiceAvailability;
- (id)connect;
- (id)desktopReplayerGuestApp;
- (id)_guestAppWithIdentifier:(id)arg1;
- (id)applications;
- (id)guestAppWithDictionary:(id)arg1;
- (void)cancelTransport;
- (id)resolveNetService;
- (id)createTransport;
@property(readonly, nonatomic) BOOL connected;
- (id)description;
- (id)initWithDeviceConnectionInfo:(id)arg1;
- (id)initWithNetService:(id)arg1;
- (id)init;

@end

@interface DYDesktopDeviceManager : NSObject
{
    NSMapTable *_deviceMap;
    NSMapTable *_observersMap;
    struct dispatch_semaphore_s *_semaphore;
}

+ (id)sharedDesktopDeviceManager;
- (void).cxx_destruct;
- (id)deviceForIdentifier:(id)arg1;
- (id)deviceForNetService:(id)arg1;
- (void)cancelTransportForDeviceWithConnectionInfo:(id)arg1;
- (id)deviceForConnectionInfo:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)notifyOnQueue:(struct dispatch_queue_s *)arg1 handler:(CDUnknownBlockType)arg2;
- (id)connectedDevices;
- (id)_connectedDevicesInner;
- (id)allDevices;
- (id)init;
- (id)_localhostConnectionInfo;
- (void)_setupDevice:(id)arg1 andBroadcast:(BOOL)arg2;
- (void)_broadcastEvent:(int)arg1 device:(id)arg2;

@end

__attribute__((visibility("hidden")))
@interface DYDesktopDeviceTransport : DYBaseSocketTransport <NSNetServiceDelegate>
{
    DYFuture *_future;
    NSString *_localUnixSocketPath;
    NSString *_localUnixSocketFolderPath;
    GPUDDServiceConnection *_lockdownService;
    DYDesktopDevice *_device;
}

@property(readonly, nonatomic) DYDesktopDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)connect;
- (void)closeLockdownSession;
- (void)invalidate;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)_resolve;
- (id)_connectToLocalAgent;
- (id)_connectToLockdownAgentWith:(id)arg1 andUserName:(id)arg2;
- (void)_launchLocalAgent:(id)arg1;
- (id)_listenUnixSocket;
- (id)_connectToTCPSocketUsingHost:(id)arg1 withPort:(id)arg2;
- (long long)_write:(const void *)arg1 size:(unsigned long long)arg2;
- (id)_connectToUnixSocket;
@property(readonly, copy) NSString *description;
- (id)initWithDesktopDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

__attribute__((visibility("hidden")))
@interface DYDesktopLaunchStrategy : DYBaseDesktopLaunchStrategy
{
}

- (id)performLaunch:(id)arg1 connectFuture:(id)arg2;

@end

__attribute__((visibility("hidden")))
@interface DYDesktopSupportError : NSError
{
}

- (id)localizedDescription;

@end

