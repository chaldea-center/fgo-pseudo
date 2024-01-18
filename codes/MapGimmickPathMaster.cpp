void __fastcall MapGimmickPathMaster___ctor(MapGimmickPathMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41858AC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string___ctor__, method);
    byte_41858AC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    471,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string___ctor__);
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

  if ( (byte_41858AD & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__GetEntity__,
      *(_QWORD *)&mapGimmickId);
    byte_41858AD = 1;
  }
  PK = MapGimmickPathEntity__CreatePK(mapGimmickId, pathId, commonReleaseId, *(const MethodInfo **)&commonReleaseId);
  return (MapGimmickPathEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_24E4520 *)Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  MapGimmickPathEntity_o *v14; // x23
  __int64 v15; // x10

  if ( (byte_41858AB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapGimmickId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&MapGimmickPathEntity_TypeInfo, v8);
    byte_41858AB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v12,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v14 = (MapGimmickPathEntity_o *)Item;
        v15 = *(&MapGimmickPathEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (MapGimmickPathEntity_c *)Item->klass->_2.typeHierarchy[v15 - 1] == MapGimmickPathEntity_TypeInfo
          && LODWORD(Item[1].klass) == mapGimmickId )
        {
          if ( !LODWORD(Item[1].monitor) )
            return v14;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
          if ( !list )
            break;
          if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)list, v14->fields.commonReleaseId, 0LL, 0, 0LL) )
            return v14;
        }
      }
      if ( ++v12 >= v11 )
        return 0LL;
    }
LABEL_20:
    sub_B2C434(list, *(_QWORD *)&mapGimmickId);
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

  if ( (byte_41858AE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__TryGetEntity__, entity);
    byte_41858AE = 1;
  }
  PK = MapGimmickPathEntity__CreatePK(mapGimmickId, pathId, commonReleaseId, *(const MethodInfo **)&pathId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_MapGimmickPathMaster__MapGimmickPathEntity__string__TryGetEntity__);
}