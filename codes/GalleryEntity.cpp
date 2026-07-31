void GalleryEntity___ctor(GalleryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938AB7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938AB7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t GalleryEntity__CreatePrimaryKey(GalleryEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Collections_Generic_List_GalleryResourceEntity__o *GalleryEntity__GetEnableGalleryResourceEntityList(
        GalleryEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_5938AB5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GalleryResourceMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938AB5 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GalleryResourceMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  return GalleryResourceMaster__GetEnableGalleryResourceEntityListByGalleryId(
           (GalleryResourceMaster_o *)Master_object,
           this->fields.id,
           v5);
}


bool GalleryEntity__IsEnableGallery(GalleryEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_GalleryResourceEntity__o *EnableGalleryResourceEntityList; // x0

  if ( (byte_5938AB6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_GalleryResourceEntity___);
    byte_5938AB6 = 1;
  }
  EnableGalleryResourceEntityList = GalleryEntity__GetEnableGalleryResourceEntityList(this, method);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EnableGalleryResourceEntityList,
           (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_GalleryResourceEntity___);
}