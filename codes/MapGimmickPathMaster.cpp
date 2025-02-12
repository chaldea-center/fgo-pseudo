void __fastcall MapGimmickPathMaster___ctor(MapGimmickPathMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7E3F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string___ctor__, method);
    byte_4BC7E3F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    478,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string___ctor__);
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

  if ( (byte_4BC7E40 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__GetEntity__,
      *(_QWORD *)&mapGimmickId);
    byte_4BC7E40 = 1;
  }
  PK = (Il2CppObject *)MapGimmickPathEntity__CreatePK(
                         mapGimmickId,
                         pathId,
                         commonReleaseId,
                         *(const MethodInfo **)&commonReleaseId);
  return (MapGimmickPathEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_324D130 *)Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickPathEntity_o *__fastcall MapGimmickPathMaster__GetMapGimmickPathEntity(
        MapGimmickPathMaster_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w21
  int32_t v11; // w22
  Il2CppObject *Item; // x0
  MapGimmickPathEntity_o *v13; // x23

  if ( (byte_4BC7E3E & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_MapGimmickPathEntity__get_Count__,
      *(_QWORD *)&mapGimmickId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_MapGimmickPathEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6);
    sub_1C1ABD4(&DataManager_TypeInfo, v7);
    byte_4BC7E3E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_MapGimmickPathEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v11,
               (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_MapGimmickPathEntity__get_Item__);
      if ( Item )
      {
        v13 = (MapGimmickPathEntity_o *)Item;
        if ( LODWORD(Item[1].klass) == mapGimmickId )
        {
          if ( !LODWORD(Item[1].monitor) )
            return v13;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
          if ( !list )
            break;
          if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)list, v13->fields.commonReleaseId, 0LL, 0, 0LL) )
            return v13;
        }
      }
      if ( v10 == ++v11 )
        return 0LL;
    }
LABEL_17:
    sub_1C1AE30(list, *(_QWORD *)&mapGimmickId);
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

  if ( (byte_4BC7E41 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__TryGetEntity__, entity);
    byte_4BC7E41 = 1;
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
           (const MethodInfo_324D17C *)Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__TryGetEntity__);
}