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



#ifndef MSONENOTEAPIMYORGANIZATIONFETCHER_H
#define MSONENOTEAPIMYORGANIZATIONFETCHER_H

#import "MSOneNoteApiModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSOneNoteApiSiteCollection_CollectionFetcher;
@class MSOneNoteApiGroupCollectionFetcher;
@class MSOneNoteApiSiteCollection_CollectionFetcher;
@class MSOneNoteApiGroupCollectionFetcher;
@class MSOneNoteApiSiteCollection_Fetcher;
@class MSOneNoteApiGroupFetcher;
@class MSOneNoteApiMyOrganizationOperations;


/** MSOneNoteApiMyOrganizationFetcher
 *
 */
@interface MSOneNoteApiMyOrganizationFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSOneNoteApiMyOrganizationOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSOneNoteApiMyOrganization *, MSOrcError *))callback;
- (void)update:(MSOneNoteApiMyOrganization *)MyOrganization callback:(void (^)(MSOneNoteApiMyOrganization *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSOneNoteApiMyOrganizationFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOneNoteApiMyOrganizationFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSOneNoteApiMyOrganizationFetcher *)select:(NSString *)params;
- (MSOneNoteApiMyOrganizationFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=siteCollections) MSOneNoteApiSiteCollection_CollectionFetcher *siteCollections;

- (MSOneNoteApiSiteCollection_Fetcher *)siteCollectionsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=groups) MSOneNoteApiGroupCollectionFetcher *groups;

- (MSOneNoteApiGroupFetcher *)groupsById:(id)identifier;


@end

#endif
