void __fastcall WarGroupMaster___ctor(WarGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FA94E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string___ctor__, method);
    byte_40FA94E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    350,
    (const MethodInfo_266F73C *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarGroupMaster__CanUseContinueItem(
        WarGroupMaster_o *this,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x10
  unsigned __int64 max_length; // x8
  unsigned __int64 v21; // x9

  if ( (byte_40FA94F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&warId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B16FFC(&WarGroupEntity_TypeInfo, v12);
    byte_40FA94F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B170D4();
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    v15 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v15 )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v15,
             v14,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v19 = *(&WarGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
        && (WarGroupEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == WarGroupEntity_TypeInfo )
      {
        if ( !targetIds )
          goto LABEL_20;
        max_length = targetIds->max_length;
        if ( (__int64)(max_length << 32) >= 1 )
          break;
      }
    }
LABEL_19:
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_20;
  }
  v21 = 0LL;
  while ( 1 )
  {
    if ( v21 >= max_length )
    {
      sub_B17100(Item, v17, v18);
      sub_B170A0();
    }
    if ( LODWORD(Item[1].klass) == targetIds->m_Items[v21 + 1]
      && HIDWORD(Item[1].klass) == warId
      && LODWORD(Item[1].monitor) == questAfterClear
      && HIDWORD(Item[1].monitor) == questType )
    {
      return 1;
    }
    if ( (__int64)++v21 >= (int)max_length )
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
WarGroupEntity_o *__fastcall WarGroupMaster__GetEntity(
        WarGroupMaster_o *this,
        int32_t id,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FA94C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_40FA94C = 1;
  }
  PK = WarGroupEntity__CreatePK(id, warId, questAfterClear, questType, *(const MethodInfo **)&questType);
  return DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
           PK,
           (const MethodInfo_266F7D8 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarGroupMaster__HasEntity(
        WarGroupMaster_o *this,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v6; // x8
  DataMasterBase_o *v11; // x23
  unsigned __int64 v12; // x24
  System_String_o *PK; // x0

  if ( !targetIds )
    sub_B170D4();
  v6 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v6 < 1 )
    return 0;
  v11 = (DataMasterBase_o *)this;
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v6 )
    {
      sub_B17100(this, *(_QWORD *)&warId, *(_QWORD *)&questAfterClear);
      sub_B170A0();
    }
    PK = WarGroupEntity__CreatePK(
           targetIds->m_Items[v12 + 1],
           warId,
           questAfterClear,
           questType,
           (const MethodInfo *)targetIds);
    this = (WarGroupMaster_o *)DataMasterBase__isEntityExistsFromId_27549084(v11, PK, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    LODWORD(v6) = targetIds->max_length;
    if ( (__int64)++v12 >= (int)v6 )
      return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarGroupMaster__TryGetEntity(
        WarGroupMaster_o *this,
        WarGroupEntity_o **entity,
        int32_t id,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FA94D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__TryGetEntity__, entity);
    byte_40FA94D = 1;
  }
  PK = WarGroupEntity__CreatePK(id, warId, questAfterClear, questType, *(const MethodInfo **)&questAfterClear);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__TryGetEntity__);
}