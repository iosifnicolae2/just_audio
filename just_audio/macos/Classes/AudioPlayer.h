#import <FlutterMacOS/FlutterMacOS.h>
#import <AVFoundation/AVFoundation.h>

@interface AudioPlayer : NSObject<AVPlayerItemMetadataOutputPushDelegate>

@property (readonly, nonatomic) AVQueuePlayer *player;
@property (readonly, nonatomic) float speed;

- (instancetype)initWithRegistrar:(NSObject<FlutterPluginRegistrar> *)registrar playerId:(NSString*)idParam loadConfiguration:(NSDictionary *)loadConfiguration;
- (void)dispose;

@end

enum ProcessingState {
	none,
	loading,
	buffering,
	ready,
	completed,
	playing,
	stopped,
	paused
};

enum LoopMode {
	loopOff,
	loopOne,
	loopAll
};
