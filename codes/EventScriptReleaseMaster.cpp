void __fastcall EventScriptReleaseMaster___ctor(EventScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A963 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string___ctor__, method);
    byte_418A963 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    214,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptReleaseEntity_o *__fastcall EventScriptReleaseMaster__GetEntity(
        EventScriptReleaseMaster_o *this,
        int32_t eventId,
        int32_t flagId,
        int32_t type,
        int32_t targetId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A961 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418A961 = 1;
  }
  PK = EventScriptReleaseEntity__CreatePK(eventId, flagId, type, targetId, *(const MethodInfo **)&targetId);
  return (EventScriptReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_24E4520 *)Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventScriptReleaseMaster__TryGetEntity(
        EventScriptReleaseMaster_o *this,
        EventScriptReleaseEntity_o **entity,
        int32_t eventId,
        int32_t flagId,
        int32_t type,
        int32_t targetId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418A962 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__TryGetEntity__,
      entity);
    byte_418A962 = 1;
  }
  PK = EventScriptReleaseEntity__CreatePK(eventId, flagId, type, targetId, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventScriptReleaseMaster__isAvailable(
        EventScriptReleaseMaster_o *this,
        int32_t eventId,
        int32_t flag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  bool v12; // w24
  int32_t v13; // w23
  __int64 v14; // x10

  if ( (byte_418A964 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&EventScriptReleaseEntity_TypeInfo, v8);
    byte_418A964 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v13,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v14 = *(&EventScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v14
        || (EventScriptReleaseEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] != EventScriptReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == flag )
      {
        if ( !EventScriptReleaseEntity__isAvailable((EventScriptReleaseEntity_o *)list, *(const MethodInfo **)&eventId) )
          return 0;
        v12 = 1;
      }
      if ( ++v13 >= v11 )
        return v12;
    }
LABEL_18:
    sub_B2C434(list, *(_QWORD *)&eventId);
  }
  return 0;
}