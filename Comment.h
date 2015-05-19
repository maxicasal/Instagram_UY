
#import <Foundation/Foundation.h>
#import "InstagramUser.h"
#import "InstagramPhoto.h"
#import <Parse/Parse.h>

@interface Comment : PFObject <PFSubclassing>
@property NSString* title;
@property InstagramUser *owner;
@property NSDate *publishedDate;
@property InstagramPhoto *photo;

@end
