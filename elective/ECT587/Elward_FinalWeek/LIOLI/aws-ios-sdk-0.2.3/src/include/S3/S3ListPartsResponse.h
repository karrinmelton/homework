/*
 * Copyright 2010-2011 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */


#import <Foundation/Foundation.h>
#import "S3Response.h"
#import "S3ListPartsResult.h"
#import "S3ListPartsResultUnmarshaller.h"

/** Contains the response from a listParts operation.
 *
 * \ingroup S3
 */
@interface S3ListPartsResponse:S3Response {
    S3ListPartsResult *listPartsResult;
}

@property (nonatomic, retain) S3ListPartsResult *listPartsResult;

@end