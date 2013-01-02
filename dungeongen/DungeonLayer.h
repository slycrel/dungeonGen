//
//  HelloWorldLayer.h
//  dungeongen
//
//  Created by Jeremy on 12/28/12.
//  Copyright Jeremy 2012. All rights reserved.
//


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "CCPanZoomController.h"
#import "TMXGenerator.h"
#import "SFMT.h"

#define randomNum	gen_rand32	//arc4random

#define MapTileType	short


#define kWidthKey			@"width"
#define kHeightKey			@"height"
#define kDirectionKey		@"direction"
#define kRoomMinSizeKey		@"roomMinSize"
#define kRoomMaxSizeKey		@"roomMaxSize"
#define kRoomDensityKey		@"roomDensity"
#define kCorridorType		@"corridorType"
#define kRemoveDeadEnds		@"removeDeadEnds"


#define zerobits			0x0000
#define wallbit				0x1000
#define doorbit				0x2000
#define visitedbit			0x4000
#define exitbit				0x8000
#define roombit				0x0100
#define newDoorBit			0x0200
#define special5			0x0400
#define special6			0x0800
// room for 12 more...


// corridor types
typedef enum
{
	randomType,			// totally random directions every time
	bentType,			// 50% straight
	straightType,		// 95% straight
} CorridorType;

// room density
typedef enum
{
	noRooms,			// **NOTE: noRooms does bad things with removal of dead ends!
	sparseRooms,
	someRooms,
	averageRooms,
	lotsOfRooms,
	veryRoomy,
} RoomDensityType;


// HelloWorldLayer
@interface DungeonLayer : CCLayer <TMXGeneratorDelegate>
{
	CCPanZoomController *_controller;
}

@property int width;
@property int height;
@property int roomMinSize;
@property int roomMaxSize;
@property int direction;	// a little hack never hurt anyone...  right?
@property BOOL removeDeadEnds;
@property CorridorType corridorType;
@property RoomDensityType roomDensity;

@property MapTileType* mapData;
@property (nonatomic, retain) CCTMXTiledMap* map;

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
