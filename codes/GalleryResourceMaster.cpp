void __fastcall GalleryResourceMaster___ctor(GalleryResourceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB153 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string___ctor__, method);
    byte_49BB153 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    543,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_GalleryResourceEntity__o *__fastcall GalleryResourceMaster__GetEnableGalleryResourceEntityListByGalleryId(
        GalleryResourceMaster_o *this,
        int32_t galleryId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_49BB152 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___, *(_QWORD *)&galleryId);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_GalleryResourceEntity___, v5);
    sub_1B4CF90(&System_Func_GalleryResourceEntity__bool__TypeInfo, v6);
    sub_1B4CF90(
      &Method_GalleryResourceMaster___c__DisplayClass0_0__GetEnableGalleryResourceEntityListByGalleryId_b__0__,
      v7);
    sub_1B4CF90(&GalleryResourceMaster___c__DisplayClass0_0_TypeInfo, v8);
    byte_49BB152 = 1;
  }
  v9 = sub_1B4D1DC(GalleryResourceMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B4D1EC(v10, v11);
  *(_DWORD *)(v9 + 16) = galleryId;
  list = this->fields.list;
  v13 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_GalleryResourceEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_GalleryResourceMaster___c__DisplayClass0_0__GetEnableGalleryResourceEntityListByGalleryId_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
  return (System_Collections_Generic_List_GalleryResourceEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                       v14,
                                                                       (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
}


// local variable allocation has failed, the output may be wrong!
GalleryResourceEntity_o *__fastcall GalleryResourceMaster__GetEntity(
        GalleryResourceMaster_o *this,
        int32_t galleryId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BB154 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__GetEntity__,
      *(_QWORD *)&galleryId);
    byte_49BB154 = 1;
  }
  PK = (Il2CppObject *)GalleryResourceEntity__CreatePK(galleryId, idx, *(const MethodInfo **)&idx);
  return (GalleryResourceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31A2454 *)Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GalleryResourceMaster__TryGetEntity(
        GalleryResourceMaster_o *this,
        GalleryResourceEntity_o **entity,
        int32_t galleryId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BB155 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__TryGetEntity__, entity);
    byte_49BB155 = 1;
  }
  PK = (Il2CppObject *)GalleryResourceEntity__CreatePK(galleryId, idx, *(const MethodInfo **)&galleryId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__TryGetEntity__);
}


void __fastcall GalleryResourceMaster___c__DisplayClass0_0___ctor(
        GalleryResourceMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GalleryResourceMaster___c__DisplayClass0_0___GetEnableGalleryResourceEntityListByGalleryId_b__0(
        GalleryResourceMaster___c__DisplayClass0_0_o *this,
        GalleryResourceEntity_o *entity,
        const MethodInfo *method)
{
  GalleryResourceMaster___c__DisplayClass0_0_o *v4; // x20
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  v4 = this;
  if ( (byte_49BB156 & 1) == 0 )
  {
    this = (GalleryResourceMaster___c__DisplayClass0_0_o *)sub_1B4CF90(&CondType_TypeInfo, entity);
    byte_49BB156 = 1;
  }
  if ( !entity )
    sub_1B4D1EC(this, entity);
  if ( entity->fields.galleryId != v4->fields.galleryId )
    return 0;
  condType = entity->fields.condType;
  condId = entity->fields.condId;
  condNum = entity->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0LL, 0LL);
}