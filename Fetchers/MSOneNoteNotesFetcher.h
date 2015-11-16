/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#ifndef MSONENOTENOTESFETCHER_H
#define MSONENOTENOTESFETCHER_H

#import "MSOneNoteModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSOneNoteNotebookCollectionFetcher;
@class MSOneNoteSectionCollectionFetcher;
@class MSOneNoteSectionGroupCollectionFetcher;
@class MSOneNotePageCollectionFetcher;
@class MSOneNoteResourceCollectionFetcher;
@class MSOneNoteOperationCollectionFetcher;
@class MSOneNoteNotebookCollectionFetcher;
@class MSOneNoteSectionCollectionFetcher;
@class MSOneNoteSectionGroupCollectionFetcher;
@class MSOneNotePageCollectionFetcher;
@class MSOneNoteResourceCollectionFetcher;
@class MSOneNoteOperationCollectionFetcher;
@class MSOneNoteNotebookFetcher;
@class MSOneNoteSectionFetcher;
@class MSOneNoteSectionGroupFetcher;
@class MSOneNotePageFetcher;
@class MSOneNoteResourceFetcher;
@class MSOneNoteOperationFetcher;
@class MSOneNoteNotesOperations;


/** MSOneNoteNotesFetcher
 *
 */
@interface MSOneNoteNotesFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSOneNoteNotesOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSOneNoteNotes *, MSOrcError *))callback;
- (void)update:(MSOneNoteNotes *)Notes callback:(void (^)(MSOneNoteNotes *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSOneNoteNotesFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOneNoteNotesFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSOneNoteNotesFetcher *)select:(NSString *)params;
- (MSOneNoteNotesFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=notebooks) MSOneNoteNotebookCollectionFetcher *notebooks;

- (MSOneNoteNotebookFetcher *)notebooksById:(id)identifier;

@property (strong, nonatomic, readonly, getter=sections) MSOneNoteSectionCollectionFetcher *sections;

- (MSOneNoteSectionFetcher *)sectionsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=sectionGroups) MSOneNoteSectionGroupCollectionFetcher *sectionGroups;

- (MSOneNoteSectionGroupFetcher *)sectionGroupsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=pages) MSOneNotePageCollectionFetcher *pages;

- (MSOneNotePageFetcher *)pagesById:(id)identifier;

@property (strong, nonatomic, readonly, getter=resources) MSOneNoteResourceCollectionFetcher *resources;

- (MSOneNoteResourceFetcher *)resourcesById:(id)identifier;

@property (strong, nonatomic, readonly, getter=_operations) MSOneNoteOperationCollectionFetcher *_operations;

- (MSOneNoteOperationFetcher *)_operationsById:(id)identifier;


@end

#endif