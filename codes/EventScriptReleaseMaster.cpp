void __fastcall EventScriptReleaseMaster___ctor(EventScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B3469 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string___ctor__);
    byte_42B3469 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    215,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string___ctor__);
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

  if ( (byte_42B3467 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__GetEntity__);
    byte_42B3467 = 1;
  }
  PK = EventScriptReleaseEntity__CreatePK(eventId, flagId, type, targetId, *(const MethodInfo **)&targetId);
  return (EventScriptReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23E2728 *)Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__GetEntity__);
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

  if ( (byte_42B3468 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__TryGetEntity__);
    byte_42B3468 = 1;
  }
  PK = EventScriptReleaseEntity__CreatePK(eventId, flagId, type, targetId, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventScriptReleaseMaster__isAvailable(
        EventScriptReleaseMaster_o *this,
        int32_t eventId,
        int32_t flag,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  bool v10; // w24
  int32_t v11; // w23
  __int64 v12; // x10

  if ( (byte_42B346A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventScriptReleaseEntity_TypeInfo);
    byte_42B346A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v11,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = *(&EventScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (EventScriptReleaseEntity_c *)list->klass->_2.typeHierarchy[v12 - 1] != EventScriptReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == flag )
      {
        if ( !EventScriptReleaseEntity__isAvailable((EventScriptReleaseEntity_o *)list, *(const MethodInfo **)&eventId) )
          return 0;
        v10 = 1;
      }
      if ( ++v11 >= v9 )
        return v10;
    }
LABEL_18:
    sub_B52A5C(list, *(_QWORD *)&eventId);
  }
  return 0;
}