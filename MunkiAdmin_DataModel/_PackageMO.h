// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to PackageMO.h instead.

#import <CoreData/CoreData.h>


@class ReceiptMO;
@class ApplicationMO;
@class CatalogInfoMO;
@class CatalogMO;
@class InstallsItemMO;
@class PackageInfoMO;











@class NSObject;

@class NSObject;



@interface PackageMOID : NSManagedObjectID {}
@end

@interface _PackageMO : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (PackageMOID*)objectID;



@property (nonatomic, retain) NSNumber *munki_autoremove;

@property BOOL munki_autoremoveValue;
- (BOOL)munki_autoremoveValue;
- (void)setMunki_autoremoveValue:(BOOL)value_;

//- (BOOL)validateMunki_autoremove:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSString *munki_receipts;

//- (BOOL)validateMunki_receipts:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSString *munki_description;

//- (BOOL)validateMunki_description:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSString *munki_name;

//- (BOOL)validateMunki_name:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSString *munki_minimum_os_version;

//- (BOOL)validateMunki_minimum_os_version:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSString *munki_version;

//- (BOOL)validateMunki_version:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSString *munki_uninstall_method;

//- (BOOL)validateMunki_uninstall_method:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSNumber *munki_uninstallable;

@property BOOL munki_uninstallableValue;
- (BOOL)munki_uninstallableValue;
- (void)setMunki_uninstallableValue:(BOOL)value_;

//- (BOOL)validateMunki_uninstallable:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSString *munki_display_name;

//- (BOOL)validateMunki_display_name:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSString *munki_installer_type;

//- (BOOL)validateMunki_installer_type:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSObject *packageURL;

//- (BOOL)validatePackageURL:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSNumber *munki_installer_item_size;

@property long long munki_installer_item_sizeValue;
- (long long)munki_installer_item_sizeValue;
- (void)setMunki_installer_item_sizeValue:(long long)value_;

//- (BOOL)validateMunki_installer_item_size:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSObject *packageInfoURL;

//- (BOOL)validatePackageInfoURL:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSNumber *munki_installed_size;

@property long long munki_installed_sizeValue;
- (long long)munki_installed_sizeValue;
- (void)setMunki_installed_sizeValue:(long long)value_;

//- (BOOL)validateMunki_installed_size:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSString *munki_installer_item_location;

//- (BOOL)validateMunki_installer_item_location:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSSet* receipts;
- (NSMutableSet*)receiptsSet;



@property (nonatomic, retain) ApplicationMO* parentApplication;
//- (BOOL)validateParentApplication:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSSet* catalogInfos;
- (NSMutableSet*)catalogInfosSet;



@property (nonatomic, retain) NSSet* catalogs;
- (NSMutableSet*)catalogsSet;



@property (nonatomic, retain) NSSet* installsItems;
- (NSMutableSet*)installsItemsSet;



@property (nonatomic, retain) NSSet* packageInfos;
- (NSMutableSet*)packageInfosSet;



@end

@interface _PackageMO (CoreDataGeneratedAccessors)

- (void)addReceipts:(NSSet*)value_;
- (void)removeReceipts:(NSSet*)value_;
- (void)addReceiptsObject:(ReceiptMO*)value_;
- (void)removeReceiptsObject:(ReceiptMO*)value_;

- (void)addCatalogInfos:(NSSet*)value_;
- (void)removeCatalogInfos:(NSSet*)value_;
- (void)addCatalogInfosObject:(CatalogInfoMO*)value_;
- (void)removeCatalogInfosObject:(CatalogInfoMO*)value_;

- (void)addCatalogs:(NSSet*)value_;
- (void)removeCatalogs:(NSSet*)value_;
- (void)addCatalogsObject:(CatalogMO*)value_;
- (void)removeCatalogsObject:(CatalogMO*)value_;

- (void)addInstallsItems:(NSSet*)value_;
- (void)removeInstallsItems:(NSSet*)value_;
- (void)addInstallsItemsObject:(InstallsItemMO*)value_;
- (void)removeInstallsItemsObject:(InstallsItemMO*)value_;

- (void)addPackageInfos:(NSSet*)value_;
- (void)removePackageInfos:(NSSet*)value_;
- (void)addPackageInfosObject:(PackageInfoMO*)value_;
- (void)removePackageInfosObject:(PackageInfoMO*)value_;

@end

@interface _PackageMO (CoreDataGeneratedPrimitiveAccessors)

- (NSNumber*)primitiveMunki_autoremove;
- (void)setPrimitiveMunki_autoremove:(NSNumber*)value;

- (BOOL)primitiveMunki_autoremoveValue;
- (void)setPrimitiveMunki_autoremoveValue:(BOOL)value_;


- (NSString*)primitiveMunki_receipts;
- (void)setPrimitiveMunki_receipts:(NSString*)value;


- (NSString*)primitiveMunki_description;
- (void)setPrimitiveMunki_description:(NSString*)value;


- (NSString*)primitiveMunki_name;
- (void)setPrimitiveMunki_name:(NSString*)value;


- (NSString*)primitiveMunki_minimum_os_version;
- (void)setPrimitiveMunki_minimum_os_version:(NSString*)value;


- (NSString*)primitiveMunki_version;
- (void)setPrimitiveMunki_version:(NSString*)value;


- (NSString*)primitiveMunki_uninstall_method;
- (void)setPrimitiveMunki_uninstall_method:(NSString*)value;


- (NSNumber*)primitiveMunki_uninstallable;
- (void)setPrimitiveMunki_uninstallable:(NSNumber*)value;

- (BOOL)primitiveMunki_uninstallableValue;
- (void)setPrimitiveMunki_uninstallableValue:(BOOL)value_;


- (NSString*)primitiveMunki_display_name;
- (void)setPrimitiveMunki_display_name:(NSString*)value;


- (NSString*)primitiveMunki_installer_type;
- (void)setPrimitiveMunki_installer_type:(NSString*)value;


- (NSObject*)primitivePackageURL;
- (void)setPrimitivePackageURL:(NSObject*)value;


- (NSNumber*)primitiveMunki_installer_item_size;
- (void)setPrimitiveMunki_installer_item_size:(NSNumber*)value;

- (long long)primitiveMunki_installer_item_sizeValue;
- (void)setPrimitiveMunki_installer_item_sizeValue:(long long)value_;


- (NSObject*)primitivePackageInfoURL;
- (void)setPrimitivePackageInfoURL:(NSObject*)value;


- (NSNumber*)primitiveMunki_installed_size;
- (void)setPrimitiveMunki_installed_size:(NSNumber*)value;

- (long long)primitiveMunki_installed_sizeValue;
- (void)setPrimitiveMunki_installed_sizeValue:(long long)value_;


- (NSString*)primitiveMunki_installer_item_location;
- (void)setPrimitiveMunki_installer_item_location:(NSString*)value;




- (NSMutableSet*)primitiveReceipts;
- (void)setPrimitiveReceipts:(NSMutableSet*)value;



- (ApplicationMO*)primitiveParentApplication;
- (void)setPrimitiveParentApplication:(ApplicationMO*)value;



- (NSMutableSet*)primitiveCatalogInfos;
- (void)setPrimitiveCatalogInfos:(NSMutableSet*)value;



- (NSMutableSet*)primitiveCatalogs;
- (void)setPrimitiveCatalogs:(NSMutableSet*)value;



- (NSMutableSet*)primitiveInstallsItems;
- (void)setPrimitiveInstallsItems:(NSMutableSet*)value;



- (NSMutableSet*)primitivePackageInfos;
- (void)setPrimitivePackageInfos:(NSMutableSet*)value;


@end
