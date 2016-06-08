//
//  productCell.h
//  Prueba
//
//  Created by Oscar on 6/8/16.
//  Copyright © 2016 Oscar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface productCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titulo;
@property (weak, nonatomic) IBOutlet UILabel *ubicacion;
@property (weak, nonatomic) IBOutlet UILabel *precio;
@property (weak, nonatomic) IBOutlet UIImageView *imagen;

@end
