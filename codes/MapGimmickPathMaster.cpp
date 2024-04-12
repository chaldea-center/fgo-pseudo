void __fastcall MapGimmickPathMaster___ctor(MapGimmickPathMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B3047 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string___ctor__);
    byte_42B3047 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    472,
    (const MethodInfo_23E268C *)Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickPathEntity_o *__fastcall MapGimmickPathMaster__GetEntity(
        MapGimmickPathMaster_o *this,
        int32_t mapGimmickId,
        int32_t pathId,
        int32_t commonReleaseId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B3048 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__GetEntity__);
    byte_42B3048 = 1;
  }
  PK = MapGimmickPathEntity__CreatePK(mapGimmickId, pathId, commonReleaseId, *(const MethodInfo **)&commonReleaseId);
  return (MapGimmickPathEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23E2728 *)Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickPathEntity_o *__fastcall MapGimmickPathMaster__GetMapGimmickPathEntity(
        MapGimmickPathMaster_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  MapGimmickPathEntity_o *v10; // x23
  __int64 v11; // x10

  if ( (byte_42B3046 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&MapGimmickPathEntity_TypeInfo);
    byte_42B3046 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v8,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v10 = (MapGimmickPathEntity_o *)Item;
        v11 = *(&MapGimmickPathEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (MapGimmickPathEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == MapGimmickPathEntity_TypeInfo
          && LODWORD(Item[1].klass) == mapGimmickId )
        {
          if ( !LODWORD(Item[1].monitor) )
            return v10;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
          if ( !list )
            break;
          if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)list, v10->fields.commonReleaseId, 0LL, 0, 0LL) )
            return v10;
        }
      }
      if ( ++v8 >= v7 )
        return 0LL;
    }
LABEL_20:
    sub_B52A5C(list, *(_QWORD *)&mapGimmickId);
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
  System_String_o *PK; // x2

  if ( (byte_42B3049 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__TryGetEntity__);
    byte_42B3049 = 1;
  }
  PK = MapGimmickPathEntity__CreatePK(mapGimmickId, pathId, commonReleaseId, *(const MethodInfo **)&pathId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__TryGetEntity__);
}