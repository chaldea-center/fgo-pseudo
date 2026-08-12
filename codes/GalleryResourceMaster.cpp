void GalleryResourceMaster___ctor(GalleryResourceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970C7B & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string___ctor__);
    byte_5970C7B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    545,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string___ctor__);
}


System_Collections_Generic_List_GalleryResourceEntity__o *GalleryResourceMaster__GetEnableGalleryResourceEntityListByGalleryId(
        GalleryResourceMaster_o *this,
        int32_t galleryId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_GalleryResourceEntity__bool__c *v9; // x0
  System_Func_object__bool__o *v10; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_5970C7A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    sub_2213A60(&System_Func_GalleryResourceEntity__bool__TypeInfo);
    sub_2213A60(&Method_GalleryResourceMaster___c__DisplayClass0_0__GetEnableGalleryResourceEntityListByGalleryId_b__0__);
    sub_2213A60(&GalleryResourceMaster___c__DisplayClass0_0_TypeInfo);
    byte_5970C7A = 1;
  }
  v5 = sub_2213CCC(GalleryResourceMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  list = this->fields.list;
  v9 = System_Func_GalleryResourceEntity__bool__TypeInfo;
  *(_DWORD *)(v5 + 16) = galleryId;
  v10 = (System_Func_object__bool__o *)sub_2213CCC(v9);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_GalleryResourceMaster___c__DisplayClass0_0__GetEnableGalleryResourceEntityListByGalleryId_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
  return (System_Collections_Generic_List_GalleryResourceEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                       v11,
                                                                       (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
}


// local variable allocation has failed, the output may be wrong!
GalleryResourceEntity_o *GalleryResourceMaster__GetEntity(
        GalleryResourceMaster_o *this,
        int32_t galleryId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970C7C & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__GetEntity__);
    byte_5970C7C = 1;
  }
  PK = (Il2CppObject *)GalleryResourceEntity__CreatePK(galleryId, idx, *(const MethodInfo **)&idx);
  return (GalleryResourceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3F157EC *)Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__GetEntity__);
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

  if ( (byte_5970C7D & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__TryGetEntity__);
    byte_5970C7D = 1;
  }
  PK = (Il2CppObject *)GalleryResourceEntity__CreatePK(galleryId, idx, *(const MethodInfo **)&galleryId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__TryGetEntity__);
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
  int32_t condType; // w20
  int32_t condId; // w21
  int64_t condNum; // x19

  v4 = this;
  if ( (byte_5970C7E & 1) == 0 )
  {
    this = (GalleryResourceMaster___c__DisplayClass0_0_o *)sub_2213A60(&CondType_TypeInfo);
    byte_5970C7E = 1;
  }
  if ( !entity )
    sub_2213CDC(this, entity);
  if ( entity->fields.galleryId != v4->fields.galleryId )
    return 0;
  condType = entity->fields.condType;
  condId = entity->fields.condId;
  condNum = entity->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, entity);
  return CondType__IsOpen(condType, condId, condNum, 0, 0, 0);
}