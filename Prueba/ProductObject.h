//
//  ProductObject.h
//  Prueba
//
//  Created by Oscar on 6/8/16.
//  Copyright © 2016 Oscar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProductObject : NSObject

-(instancetype)initWithId:titulo_j:(NSString *)titulo precio_j:(NSString*  )precio ubicacion_:(NSString *)ubicacion;

@property (nonatomic,strong) NSString * tituloA;
@property (nonatomic,strong) NSString * precioA;
@property (nonatomic,strong) NSString *ubicacionA;
@end
