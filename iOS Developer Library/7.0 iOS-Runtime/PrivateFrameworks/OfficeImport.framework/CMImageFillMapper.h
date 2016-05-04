/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADFill, OADOrientedBounds;

@interface CMImageFillMapper : CMMapper {
    OADOrientedBounds *mBounds;
    OADFill *mFill;
}

- (id)blipAtIndex:(unsigned int)arg1;
- (id)convertMetafileToPdf:(id)arg1 state:(id)arg2;
- (id)initWithOadFill:(id)arg1 bounds:(id)arg2 parent:(id)arg3;
- (BOOL)isCropped;
- (id)mainSubBlip;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)mapImageFill:(id)arg1 withState:(id)arg2;
- (void)mapImageFillAt:(id)arg1 toStyle:(id)arg2 withState:(id)arg3;
- (void)mapNonImageFillAt:(id)arg1 toStyle:(id)arg2 withState:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })uncroppedBox;

@end