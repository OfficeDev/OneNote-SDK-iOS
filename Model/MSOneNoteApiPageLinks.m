/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Corporation. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#import "MSOneNoteApiModels.h"
#import "core/MSOrcObjectizer.h"


/** Implementation for MSOneNoteApiPageLinks
 *
 */
@implementation MSOneNoteApiPageLinks


@synthesize odataType = _odataType;

+ (NSDictionary *) $$$_$$$propertiesNamesMappings
{
    static NSDictionary *_$$$_$$$propertiesNamesMappings=nil; 

        if(_$$$_$$$propertiesNamesMappings==nil) {
    
        _$$$_$$$propertiesNamesMappings=[[NSDictionary alloc] initWithObjectsAndKeys:  @"oneNoteEmbedUrl", @"oneNoteEmbedUrl", @"oneNoteClientUrl", @"oneNoteClientUrl", @"oneNoteWebUrl", @"oneNoteWebUrl", nil];
        
    }
    
    return _$$$_$$$propertiesNamesMappings;
}


- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.OneNote.Api.PageLinks";

    }

	return self;
}


- (instancetype) initWithDictionary: (NSDictionary *) dic {
    if((self = [self init])) {
        if(dic!=nil) {
		_oneNoteEmbedUrl = (![dic objectForKey: @"oneNoteEmbedUrl"] || [ [dic objectForKey: @"oneNoteEmbedUrl"] isKindOfClass:[NSNull class]] )?_oneNoteEmbedUrl:[[MSOneNoteApiExternalLink alloc] initWithDictionary: [dic objectForKey: @"oneNoteEmbedUrl"]];
		_oneNoteClientUrl = (![dic objectForKey: @"oneNoteClientUrl"] || [ [dic objectForKey: @"oneNoteClientUrl"] isKindOfClass:[NSNull class]] )?_oneNoteClientUrl:[[MSOneNoteApiExternalLink alloc] initWithDictionary: [dic objectForKey: @"oneNoteClientUrl"]];
		_oneNoteWebUrl = (![dic objectForKey: @"oneNoteWebUrl"] || [ [dic objectForKey: @"oneNoteWebUrl"] isKindOfClass:[NSNull class]] )?_oneNoteWebUrl:[[MSOneNoteApiExternalLink alloc] initWithDictionary: [dic objectForKey: @"oneNoteWebUrl"]];
    }
    [self.updatedValues removeAllObjects];
    }
    
    return self;
}

- (NSDictionary *) toDictionary {
    
    NSMutableDictionary *dic=[[NSMutableDictionary alloc] init];

	{id curVal = [self.oneNoteEmbedUrl toDictionary];if (curVal!=nil) [dic setValue: curVal forKey: @"oneNoteEmbedUrl"];}
	{id curVal = [self.oneNoteClientUrl toDictionary];if (curVal!=nil) [dic setValue: curVal forKey: @"oneNoteClientUrl"];}
	{id curVal = [self.oneNoteWebUrl toDictionary];if (curVal!=nil) [dic setValue: curVal forKey: @"oneNoteWebUrl"];}
    [dic setValue: @"#Microsoft.OneNote.Api.PageLinks" forKey: @"@odata.type"];

    return dic;
}

- (NSDictionary *) toUpdatedValuesDictionary {
    
    NSMutableDictionary *dic=[[NSMutableDictionary alloc] init];

	{id curVal = self.oneNoteEmbedUrl;
    if([self.updatedValues containsObject:@"oneNoteEmbedUrl"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[curVal toDictionary] forKey: @"oneNoteEmbedUrl"];
            }
        else
    {
                
        NSDictionary *updatedDic=[curVal toUpdatedValuesDictionary];
        
            if(updatedDic!=nil && [updatedDic count]>0)
            {
                [dic setValue: [curVal toDictionary] forKey: @"oneNoteEmbedUrl"];
            }
        
            }}
	{id curVal = self.oneNoteClientUrl;
    if([self.updatedValues containsObject:@"oneNoteClientUrl"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[curVal toDictionary] forKey: @"oneNoteClientUrl"];
            }
        else
    {
                
        NSDictionary *updatedDic=[curVal toUpdatedValuesDictionary];
        
            if(updatedDic!=nil && [updatedDic count]>0)
            {
                [dic setValue: [curVal toDictionary] forKey: @"oneNoteClientUrl"];
            }
        
            }}
	{id curVal = self.oneNoteWebUrl;
    if([self.updatedValues containsObject:@"oneNoteWebUrl"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[curVal toDictionary] forKey: @"oneNoteWebUrl"];
            }
        else
    {
                
        NSDictionary *updatedDic=[curVal toUpdatedValuesDictionary];
        
            if(updatedDic!=nil && [updatedDic count]>0)
            {
                [dic setValue: [curVal toDictionary] forKey: @"oneNoteWebUrl"];
            }
        
            }}
    return dic;
}


/** Setter implementation for property oneNoteEmbedUrl
 *
 */
- (void) setOneNoteEmbedUrl: (MSOneNoteApiExternalLink *) value {
    _oneNoteEmbedUrl = value;
    [self valueChangedFor:@"oneNoteEmbedUrl"];
}
       
/** Setter implementation for property oneNoteClientUrl
 *
 */
- (void) setOneNoteClientUrl: (MSOneNoteApiExternalLink *) value {
    _oneNoteClientUrl = value;
    [self valueChangedFor:@"oneNoteClientUrl"];
}
       
/** Setter implementation for property oneNoteWebUrl
 *
 */
- (void) setOneNoteWebUrl: (MSOneNoteApiExternalLink *) value {
    _oneNoteWebUrl = value;
    [self valueChangedFor:@"oneNoteWebUrl"];
}
       

@end