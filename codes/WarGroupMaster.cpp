void __fastcall WarGroupMaster___ctor(WarGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215697 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string___ctor__, method);
    byte_4215697 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    350,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string___ctor__);
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
  __int64 v15; // x10
  unsigned __int64 max_length; // x8
  unsigned __int64 v17; // x9
  __int64 v19; // x0

  if ( (byte_4215698 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&warId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B0D8A4(&WarGroupEntity_TypeInfo, v12);
    byte_4215698 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B0D97C(list);
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v14,
                                                                                         (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v15 = *(&WarGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (WarGroupEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == WarGroupEntity_TypeInfo )
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
  v17 = 0LL;
  while ( 1 )
  {
    if ( v17 >= max_length )
    {
      v19 = sub_B0D9A8(list);
      sub_B0D948(v19, 0LL);
    }
    if ( LODWORD(list->fields.items) == targetIds->m_Items[v17 + 1]
      && HIDWORD(list->fields.items) == warId
      && LODWORD(list->fields._syncRoot) == questAfterClear
      && HIDWORD(list->fields._syncRoot) == questType )
    {
      return 1;
    }
    if ( (__int64)++v17 >= (int)max_length )
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

  if ( (byte_4215695 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4215695 = 1;
  }
  PK = WarGroupEntity__CreatePK(id, warId, questAfterClear, questType, *(const MethodInfo **)&questType);
  return DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
           PK,
           (const MethodInfo_266A024 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__GetEntity__);
}


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
  __int64 v15; // x0

  if ( !targetIds )
    sub_B0D97C(this);
  v6 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v6 < 1 )
    return 0;
  v11 = (DataMasterBase_o *)this;
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v6 )
    {
      v15 = sub_B0D9A8(this);
      sub_B0D948(v15, 0LL);
    }
    PK = WarGroupEntity__CreatePK(
           targetIds->m_Items[v12 + 1],
           warId,
           questAfterClear,
           questType,
           (const MethodInfo *)targetIds);
    this = (WarGroupMaster_o *)DataMasterBase__isEntityExistsFromId_26352736(v11, PK, 0LL);
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

  if ( (byte_4215696 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__TryGetEntity__, entity);
    byte_4215696 = 1;
  }
  PK = WarGroupEntity__CreatePK(id, warId, questAfterClear, questType, *(const MethodInfo **)&questAfterClear);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__TryGetEntity__);
}