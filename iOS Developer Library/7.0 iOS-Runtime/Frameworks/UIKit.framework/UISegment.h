/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIView, _UIBadgeView, _UISegmentedControlAppearanceStorage;

@interface UISegment : UIImageView {
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        unsigned int style : 3; 
        unsigned int size : 2; 
        unsigned int selected : 1; 
        unsigned int highlighted : 1; 
        unsigned int showDivider : 1; 
        unsigned int hasImage : 1; 
        unsigned int position : 3; 
        unsigned int autosizeText : 1; 
        unsigned int isMomentary : 1; 
        unsigned int wasSelected : 1; 
        unsigned int needsBackgroundAndContentViewUpdate : 1; 
    _UISegmentedControlAppearanceStorage *_appearanceStorage;
    NSString *_badgeValue;
    _UIBadgeView *_badgeView;
    int _barStyle;
    } _contentOffset;
    UIView *_info;
    NSArray *_infoConstraints;
    id _objectValue;
    float _requestedScaleFactor;
    unsigned int _rightSegmentState;
    } _segmentFlags;
    float _width;
}

@property(setter=_setInfoConstraints:,copy) NSArray * _infoConstraints;
@property(copy) NSString * badgeValue;
@property(readonly) UIView * badgeView;
@property int controlSize;
@property(getter=isMomentary) BOOL momentary;
@property float requestedScaleFactor;
@property(getter=isSelected) BOOL selected;

+ (id)_backgroundImageWithStorage:(id)arg1 style:(int)arg2 mini:(BOOL)arg3 state:(unsigned int)arg4 position:(unsigned int)arg5 drawMode:(int*)arg6 defaultBlock:(id)arg7;

- (id)_attributedTextForState:(unsigned int)arg1 selected:(BOOL)arg2;
- (float)_barHeight;
- (void)_commonSegmentInit;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_currentOptionsStyleTextColor;
- (id)_currentOptionsStyleTextShadowColor;
- (id)_dividerImage;
- (id)_dividerImageIsCustom:(BOOL*)arg1;
- (void)_forceInfoDisplay;
- (BOOL)_hasSelectedColor;
- (float)_idealWidth;
- (id)_infoConstraints;
- (void)_invalidateInfoConstraints;
- (BOOL)_isInMiniBar;
- (struct CGSize { float x1; float x2; })_maximumTextSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_paddingInsets;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_positionInfo;
- (void)_positionInfoWithoutAnimation;
- (unsigned int)_segmentState;
- (void)_setEnabledAppearance:(BOOL)arg1;
- (void)_setInfoConstraints:(id)arg1;
- (BOOL)_shouldUsePadMomentaryAppearance;
- (id)_tintColorArchivingKey;
- (void)_updateBackgroundAndContentViews;
- (void)_updateBackgroundAndContentViewsIfNeeded;
- (void)_updateTextColors;
- (void)animateAdd:(BOOL)arg1;
- (void)animateRemoveForWidth:(float)arg1;
- (id)badgeValue;
- (id)badgeView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRect;
- (struct CGSize { float x1; float x2; })contentSize;
- (int)controlSize;
- (void)dealloc;
- (id)disabledTextColor;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)infoName;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1 style:(int)arg2 size:(int)arg3 barStyle:(int)arg4 tintColor:(id)arg5 appearanceStorage:(id)arg6 position:(unsigned int)arg7 autosizeText:(BOOL)arg8;
- (void)insertDividerView;
- (BOOL)isHighlighted;
- (BOOL)isMomentary;
- (BOOL)isSelected;
- (id)label;
- (void)layoutSubviews;
- (id)objectValue;
- (float)requestedScaleFactor;
- (void)setAutosizeText:(BOOL)arg1;
- (void)setBadgeValue:(id)arg1;
- (void)setBarStyle:(int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setControlSize:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setMomentary:(BOOL)arg1;
- (void)setNeedsBackgroundAndContentViewUpdate;
- (void)setObjectValue:(id)arg1;
- (void)setPosition:(unsigned int)arg1;
- (void)setRequestedScaleFactor:(float)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setShowDivider:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (void)setWasSelected:(BOOL)arg1;
- (BOOL)showDivider;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void)updateDividerViewForChangedSegment:(id)arg1;
- (void)updateForAppearance:(id)arg1 style:(int)arg2;
- (void)updateMasking;
- (BOOL)useBlockyMagnificationInClassic;
- (id)viewForBaselineLayout;

@end