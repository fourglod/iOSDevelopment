/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng;

@interface GEORPCorrectedCoordinate : PBCodable <NSCopying> {
    GEOLatLng *_correctedCoordinate;
    GEOLatLng *_originalCoordinate;
}

@property(retain) GEOLatLng * correctedCoordinate;
@property(readonly) BOOL hasCorrectedCoordinate;
@property(readonly) BOOL hasOriginalCoordinate;
@property(retain) GEOLatLng * originalCoordinate;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedCoordinate;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCorrectedCoordinate;
- (BOOL)hasOriginalCoordinate;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originalCoordinate;
- (BOOL)readFrom:(id)arg1;
- (void)setCorrectedCoordinate:(id)arg1;
- (void)setOriginalCoordinate:(id)arg1;
- (void)writeTo:(id)arg1;

@end
