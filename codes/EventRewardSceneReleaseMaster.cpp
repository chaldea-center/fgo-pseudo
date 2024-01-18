void __fastcall EventRewardSceneReleaseMaster___ctor(EventRewardSceneReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A941 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string___ctor__,
      method);
    byte_418A941 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    194,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneReleaseEntity_o *__fastcall EventRewardSceneReleaseMaster__GetEntity(
        EventRewardSceneReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A93F & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418A93F = 1;
  }
  PK = EventRewardSceneReleaseEntity__CreatePK(eventId, slot, condType, *(const MethodInfo **)&condType);
  return (EventRewardSceneReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                              (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                              PK,
                                              (const MethodInfo_24E4520 *)Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRewardSceneReleaseMaster__TryGetEntity(
        EventRewardSceneReleaseMaster_o *this,
        EventRewardSceneReleaseEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418A940 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string__TryGetEntity__,
      entity);
    byte_418A940 = 1;
  }
  PK = EventRewardSceneReleaseEntity__CreatePK(eventId, slot, condType, *(const MethodInfo **)&slot);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneReleaseEntity_o *__fastcall EventRewardSceneReleaseMaster__getEnableEntity(
        EventRewardSceneReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  EventRewardSceneReleaseEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  __int64 v13; // x10

  if ( (byte_418A942 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&EventRewardSceneReleaseEntity_TypeInfo, v8);
    byte_418A942 = 1;
  }
  result = (EventRewardSceneReleaseEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      result = (EventRewardSceneReleaseEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventRewardSceneReleaseEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                                    v12,
                                                    (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      v13 = *(&EventRewardSceneReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v13
        || (EventRewardSceneReleaseEntity_c *)result->klass->_2.typeHierarchy[v13 - 1] != EventRewardSceneReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.eventId == eventId && result->fields.slot == slot )
        return result;
      if ( ++v12 >= v11 )
        return 0LL;
    }
LABEL_15:
    sub_B2C434(result, *(_QWORD *)&eventId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRewardSceneReleaseMaster__getReleaseTabImageId(
        EventRewardSceneReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  __int64 v13; // x10

  if ( (byte_418A943 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&EventRewardSceneReleaseEntity_TypeInfo, v8);
    byte_418A943 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_15:
    sub_B2C434(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v12,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_15;
    v13 = *(&EventRewardSceneReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v13
      || *(EventRewardSceneReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v13 - 8) != EventRewardSceneReleaseEntity_TypeInfo )
    {
      goto LABEL_15;
    }
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == slot )
      return *((_DWORD *)list + 9);
    if ( ++v12 >= v11 )
      return 0;
  }
}