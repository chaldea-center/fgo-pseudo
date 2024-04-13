void __fastcall WarGroupMaster___ctor(WarGroupMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9388 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E9388 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    351,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string___ctor__);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v18; // w24
  __int64 v19; // x10
  unsigned __int64 max_length; // x8
  unsigned __int64 v21; // x9
  __int64 v23; // x0

  if ( (byte_42E9389 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      warId,
      questAfterClear,
      *(_QWORD *)&questType);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12, v13);
    sub_B5D5C4(&WarGroupEntity_TypeInfo, v14, v15, v16);
    byte_42E9389 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B5D69C(list, *(_QWORD *)&warId);
  v18 = 0;
  while ( 1 )
  {
    if ( v18 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v18,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v19 = *(&WarGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v19
        && (WarGroupEntity_c *)list->klass->_2.typeHierarchy[v19 - 1] == WarGroupEntity_TypeInfo )
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
    ++v18;
    if ( !list )
      goto LABEL_20;
  }
  v21 = 0LL;
  while ( 1 )
  {
    if ( v21 >= max_length )
    {
      v23 = sub_B5D6C8(list);
      sub_B5D668(v23, 0LL);
    }
    if ( LODWORD(list->fields.items) == targetIds->m_Items[v21 + 1]
      && HIDWORD(list->fields.items) == warId
      && LODWORD(list->fields._syncRoot) == questAfterClear
      && HIDWORD(list->fields._syncRoot) == questType )
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

  if ( (byte_42E9386 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__GetEntity__,
      id,
      warId,
      *(_QWORD *)&questAfterClear);
    byte_42E9386 = 1;
  }
  PK = WarGroupEntity__CreatePK(id, warId, questAfterClear, questType, *(const MethodInfo **)&questType);
  return (WarGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_23FB260 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__GetEntity__);
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
    sub_B5D69C(this, warId);
  v6 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v6 < 1 )
    return 0;
  v11 = (DataMasterBase_o *)this;
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v6 )
    {
      v15 = sub_B5D6C8(this);
      sub_B5D668(v15, 0LL);
    }
    PK = WarGroupEntity__CreatePK(
           targetIds->m_Items[v12 + 1],
           warId,
           questAfterClear,
           questType,
           (const MethodInfo *)targetIds);
    this = (WarGroupMaster_o *)DataMasterBase__isEntityExistsFromId_24493920(v11, PK, 0LL);
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

  if ( (byte_42E9387 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&warId);
    byte_42E9387 = 1;
  }
  PK = WarGroupEntity__CreatePK(id, warId, questAfterClear, questType, *(const MethodInfo **)&questAfterClear);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__TryGetEntity__);
}