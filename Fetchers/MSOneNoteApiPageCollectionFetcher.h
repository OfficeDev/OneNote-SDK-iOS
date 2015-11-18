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


#ifndef MSONENOTEAPIPAGECOLLECTIONFETCHER_H
#define MSONENOTEAPIPAGECOLLECTIONFETCHER_H

@class MSOneNoteApiPageFetcher;

#import "core/MSOrcCollectionFetcher.h"
#import "api/api.h"
#import "core/core.h"
#import "MSOneNoteApiModels.h"

/** MSOneNoteApiPageCollectionFetcher
 *
 */
@interface MSOneNoteApiPageCollectionFetcher : MSOrcMultipartCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)readWithCallback:(void (^)(NSArray *, MSOrcError *))callback;

- (MSOneNoteApiPageFetcher *)getById: (id) identifier;
- (void)add:(MSOneNoteApiPage *)entity callback:(void (^)(MSOneNoteApiPage *, MSOrcError *))callback;

- (MSOneNoteApiPageCollectionFetcher *)select:(NSString *)params;
- (MSOneNoteApiPageCollectionFetcher *)filter:(NSString *)params;
- (MSOneNoteApiPageCollectionFetcher *)search:(NSString *)params;
- (MSOneNoteApiPageCollectionFetcher *)top:(int)value;
- (MSOneNoteApiPageCollectionFetcher *)skip:(int)value;
- (MSOneNoteApiPageCollectionFetcher *)expand:(NSString *)value;
- (MSOneNoteApiPageCollectionFetcher *)orderBy:(NSString *)params;
- (MSOneNoteApiPageCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOneNoteApiPageCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif
