void __fastcall MapGimmickPathMaster___ctor(MapGimmickPathMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B4C3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string___ctor__);
    byte_4A5B4C3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    474,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickPathEntity_o *__fastcall MapGimmickPathMaster__GetEntity(
        MapGimmickPathMaster_o *this,
        int32_t mapGimmickId,
        int32_t pathId,
        int32_t commonReleaseId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B4C4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__GetEntity__);
    byte_4A5B4C4 = 1;
  }
  PK = (Il2CppObject *)MapGimmickPathEntity__CreatePK(
                         mapGimmickId,
                         pathId,
                         commonReleaseId,
                         *(const MethodInfo **)&commonReleaseId);
  return (MapGimmickPathEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_311DC8C *)Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickPathEntity_o *__fastcall MapGimmickPathMaster__GetMapGimmickPathEntity(
        MapGimmickPathMaster_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  MapGimmickPathEntity_o *v10; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B4C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&MapGimmickPathEntity_TypeInfo);
    byte_4A5B4C2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v8,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v10 = (MapGimmickPathEntity_o *)Item;
        methodPtr_low = LOBYTE(MapGimmickPathEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (MapGimmickPathEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == MapGimmickPathEntity_TypeInfo
          && LODWORD(Item[1].klass) == mapGimmickId )
        {
          if ( !LODWORD(Item[1].monitor) )
            return v10;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
          if ( !list )
            break;
          if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)list, v10->fields.commonReleaseId, 0LL, 0, 0LL) )
            return v10;
        }
      }
      if ( v7 == ++v8 )
        return 0LL;
    }
LABEL_19:
    sub_1B8880C(list, *(_QWORD *)&mapGimmickId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapGimmickPathMaster__TryGetEntity(
        MapGimmickPathMaster_o *this,
        MapGimmickPathEntity_o **entity,
        int32_t mapGimmickId,
        int32_t pathId,
        int32_t commonReleaseId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B4C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__TryGetEntity__);
    byte_4A5B4C5 = 1;
  }
  PK = (Il2CppObject *)MapGimmickPathEntity__CreatePK(
                         mapGimmickId,
                         pathId,
                         commonReleaseId,
                         *(const MethodInfo **)&pathId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__TryGetEntity__);
}