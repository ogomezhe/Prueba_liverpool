//
//  ProductObject.m
//  Prueba
//
//  Created by Oscar on 6/8/16.
//  Copyright © 2016 Oscar. All rights reserved.
//

#import "ProductObject.h"

@implementation ProductObject


-(instancetype)initWithId:titulo_j:(NSString *)titulo precio_j:(NSString*  )precio ubicacion_j:(NSString *)ubicacion{
    
    self = [super init];
    if(self){
        self.tituloA = titulo;
        self.precioA = precio;
        self.ubicacionA = ubicacion;
    }
    return self;
}

@end
