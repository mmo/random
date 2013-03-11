//
//  RandomController.h
//  Random
//
//  Created by Miguel Moreira on 11.03.13.
//  Copyright (c) 2013 Miguel Moreira. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RandomController : NSObject {
    IBOutlet NSTextField *textField;
}
- (IBAction)seed:(id)sender;
- (IBAction)generate:(id)sender;
@end
