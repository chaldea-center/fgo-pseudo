void __fastcall MapGimmickPathMaster___ctor(MapGimmickPathMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEE83 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string___ctor__, method);
    byte_49FEE83 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    474,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string___ctor__);
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

  if ( (byte_49FEE84 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__GetEntity__,
      *(_QWORD *)&mapGimmickId);
    byte_49FEE84 = 1;
  }
  PK = (Il2CppObject *)MapGimmickPathEntity__CreatePK(
                         mapGimmickId,
                         pathId,
                         commonReleaseId,
                         *(const MethodInfo **)&commonReleaseId);
  return (MapGimmickPathEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_30D6AF0 *)Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__GetEntity__);
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
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  Il2CppObject *Item; // x0
  MapGimmickPathEntity_o *v14; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_49FEE82 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapGimmickId);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6);
    sub_1B64A00(&DataManager_TypeInfo, v7);
    sub_1B64A00(&MapGimmickPathEntity_TypeInfo, v8);
    byte_49FEE82 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v12,
               (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v14 = (MapGimmickPathEntity_o *)Item;
        methodPtr_low = LOBYTE(MapGimmickPathEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (MapGimmickPathEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == MapGimmickPathEntity_TypeInfo
          && LODWORD(Item[1].klass) == mapGimmickId )
        {
          if ( !LODWORD(Item[1].monitor) )
            return v14;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
          if ( !list )
            break;
          if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)list, v14->fields.commonReleaseId, 0LL, 0, 0LL) )
            return v14;
        }
      }
      if ( v11 == ++v12 )
        return 0LL;
    }
LABEL_19:
    sub_1B64C5C(list, *(_QWORD *)&mapGimmickId);
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

  if ( (byte_49FEE85 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__TryGetEntity__, entity);
    byte_49FEE85 = 1;
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
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__TryGetEntity__);
}