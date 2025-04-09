void __fastcall GalleryEntity___ctor(GalleryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB145 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BB145 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall GalleryEntity__CreatePrimaryKey(GalleryEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Collections_Generic_List_GalleryResourceEntity__o *__fastcall GalleryEntity__GetEnableGalleryResourceEntityList(
        GalleryEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_49BB143 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_GalleryResourceMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    byte_49BB143 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GalleryResourceMaster___);
  if ( !Master_object )
    sub_1B4D1EC(0LL, v5);
  return GalleryResourceMaster__GetEnableGalleryResourceEntityListByGalleryId(
           (GalleryResourceMaster_o *)Master_object,
           this->fields.id,
           v6);
}


bool __fastcall GalleryEntity__IsEnableGallery(GalleryEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_GalleryResourceEntity__o *EnableGalleryResourceEntityList; // x0

  if ( (byte_49BB144 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_GalleryResourceEntity___, method);
    byte_49BB144 = 1;
  }
  EnableGalleryResourceEntityList = GalleryEntity__GetEnableGalleryResourceEntityList(this, method);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EnableGalleryResourceEntityList,
           (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_GalleryResourceEntity___);
}