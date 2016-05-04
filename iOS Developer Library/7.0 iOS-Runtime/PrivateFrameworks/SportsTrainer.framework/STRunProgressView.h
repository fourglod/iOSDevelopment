/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class UIImage;

@interface STRunProgressView : UIView {
    UIImage *_filledProgressBar;
    BOOL _filledProgressBarIsVertical;
    float _progress;
    BOOL _reverseFilledGradient;
}

@property float progress;
@property BOOL reverseFilledGradient;

- (id)_flatGradientImageWithImage:(id)arg1 startColor:(id)arg2 startPoint:(struct CGPoint { float x1; float x2; })arg3 endColor:(id)arg4 endPoint:(struct CGPoint { float x1; float x2; })arg5;
- (id)_progressBarFilledImage;
- (id)_progressBarFilledImageVertical;
- (id)_progressBarImage;
- (id)_progressBarImageVertical;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)filledEndColor;
- (id)filledStartColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)progress;
- (BOOL)reverseFilledGradient;
- (void)setProgress:(float)arg1;
- (void)setReverseFilledGradient:(BOOL)arg1;

@end