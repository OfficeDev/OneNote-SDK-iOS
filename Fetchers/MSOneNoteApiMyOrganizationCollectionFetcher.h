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


#ifndef MSONENOTEAPIMYORGANIZATIONCOLLECTIONFETCHER_H
#define MSONENOTEAPIMYORGANIZATIONCOLLECTIONFETCHER_H

@class MSOneNoteApiMyOrganizationFetcher;

#import "core/MSOrcCollectionFetcher.h"
#import "api/api.h"
#import "core/core.h"
#import "MSOneNoteApiModels.h"

/** MSOneNoteApiMyOrganizationCollectionFetcher
 *
 */
@interface MSOneNoteApiMyOrganizationCollectionFetcher : MSOrcCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)readWithCallback:(void (^)(NSArray *, MSOrcError *))callback;

- (MSOneNoteApiMyOrganizationFetcher *)getById: (id) identifier;
- (void)add:(MSOneNoteApiMyOrganization *)entity callback:(void (^)(MSOneNoteApiMyOrganization *, MSOrcError *))callback;

- (MSOneNoteApiMyOrganizationCollectionFetcher *)select:(NSString *)params;
- (MSOneNoteApiMyOrganizationCollectionFetcher *)filter:(NSString *)params;
- (MSOneNoteApiMyOrganizationCollectionFetcher *)search:(NSString *)params;
- (MSOneNoteApiMyOrganizationCollectionFetcher *)top:(int)value;
- (MSOneNoteApiMyOrganizationCollectionFetcher *)skip:(int)value;
- (MSOneNoteApiMyOrganizationCollectionFetcher *)expand:(NSString *)value;
- (MSOneNoteApiMyOrganizationCollectionFetcher *)orderBy:(NSString *)params;
- (MSOneNoteApiMyOrganizationCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOneNoteApiMyOrganizationCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif
