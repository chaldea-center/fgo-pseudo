void GalleryResourceMaster___ctor(GalleryResourceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEA83 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string___ctor__);
    byte_4CEEA83 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    543,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string___ctor__);
}


System_Collections_Generic_List_GalleryResourceEntity__o *GalleryResourceMaster__GetEnableGalleryResourceEntityListByGalleryId(
        GalleryResourceMaster_o *this,
        int32_t galleryId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4CEEA82 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    sub_1C7BAE8(&System_Func_GalleryResourceEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_GalleryResourceMaster___c__DisplayClass0_0__GetEnableGalleryResourceEntityListByGalleryId_b__0__);
    sub_1C7BAE8(&GalleryResourceMaster___c__DisplayClass0_0_TypeInfo);
    byte_4CEEA82 = 1;
  }
  v5 = sub_1C7BD34(GalleryResourceMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_DWORD *)(v5 + 16) = galleryId;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_GalleryResourceEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_GalleryResourceMaster___c__DisplayClass0_0__GetEnableGalleryResourceEntityListByGalleryId_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
  return (System_Collections_Generic_List_GalleryResourceEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                       v10,
                                                                       (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
}


// local variable allocation has failed, the output may be wrong!
GalleryResourceEntity_o *GalleryResourceMaster__GetEntity(
        GalleryResourceMaster_o *this,
        int32_t galleryId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEEA84 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__GetEntity__);
    byte_4CEEA84 = 1;
  }
  PK = (Il2CppObject *)GalleryResourceEntity__CreatePK(galleryId, idx, *(const MethodInfo **)&idx);
  return (GalleryResourceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3432DB4 *)Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool GalleryResourceMaster__TryGetEntity(
        GalleryResourceMaster_o *this,
        GalleryResourceEntity_o **entity,
        int32_t galleryId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEEA85 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__TryGetEntity__);
    byte_4CEEA85 = 1;
  }
  PK = (Il2CppObject *)GalleryResourceEntity__CreatePK(galleryId, idx, *(const MethodInfo **)&galleryId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__TryGetEntity__);
}


void GalleryResourceMaster___c__DisplayClass0_0___ctor(
        GalleryResourceMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GalleryResourceMaster___c__DisplayClass0_0___GetEnableGalleryResourceEntityListByGalleryId_b__0(
        GalleryResourceMaster___c__DisplayClass0_0_o *this,
        GalleryResourceEntity_o *entity,
        const MethodInfo *method)
{
  GalleryResourceMaster___c__DisplayClass0_0_o *v4; // x20
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  v4 = this;
  if ( (byte_4CEEA86 & 1) == 0 )
  {
    this = (GalleryResourceMaster___c__DisplayClass0_0_o *)sub_1C7BAE8(&CondType_TypeInfo);
    byte_4CEEA86 = 1;
  }
  if ( !entity )
    sub_1C7BD40(this, entity);
  if ( entity->fields.galleryId != v4->fields.galleryId )
    return 0;
  condType = entity->fields.condType;
  condId = entity->fields.condId;
  condNum = entity->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0, 0);
}