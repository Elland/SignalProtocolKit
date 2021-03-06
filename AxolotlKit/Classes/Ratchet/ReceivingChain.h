//
//  ReceivingChain.h
//  AxolotlKit
//
//  Created by Frederic Jacobs on 02/09/14.
//  Copyright (c) 2014 Frederic Jacobs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Chain.h"
#import <Curve25519/Curve25519-header.h>

@interface ReceivingChain : NSObject <Chain, NSSecureCoding>

- (instancetype)initWithChainKey:(ChainKey*)chainKey senderRatchetKey:(NSData*)senderRatchet;

@property NSMutableArray *messageKeysList;
@property NSData *senderRatchetKey;

@end
