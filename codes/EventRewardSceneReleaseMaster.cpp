void __fastcall EventRewardSceneReleaseMaster___ctor(EventRewardSceneReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAF8B & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string___ctor__,
      method);
    byte_49BAF8B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    200,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneReleaseEntity_o *__fastcall EventRewardSceneReleaseMaster__GetEntity(
        EventRewardSceneReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BAF89 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49BAF89 = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneReleaseEntity__CreatePK(eventId, slot, condType, *(const MethodInfo **)&condType);
  return (EventRewardSceneReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_31A2454 *)Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string__GetEntity__);
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
  Il2CppObject *PK; // x2

  if ( (byte_49BAF8A & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string__TryGetEntity__,
      entity);
    byte_49BAF8A = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneReleaseEntity__CreatePK(eventId, slot, condType, *(const MethodInfo **)&slot);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneReleaseEntity_o *__fastcall EventRewardSceneReleaseMaster__getEnableEntity(
        EventRewardSceneReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  EventRewardSceneReleaseEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23

  if ( (byte_49BAF8C & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventRewardSceneReleaseEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventRewardSceneReleaseEntity__get_Item__, v7);
    byte_49BAF8C = 1;
  }
  result = (EventRewardSceneReleaseEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      result = (EventRewardSceneReleaseEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventRewardSceneReleaseEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                    (System_Collections_ObjectModel_Collection_T__o *)result,
                                                    v11,
                                                    (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneReleaseEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.eventId == eventId && result->fields.slot == slot )
        return result;
      if ( v10 == ++v11 )
        return 0LL;
    }
LABEL_13:
    sub_1B4D1EC(result, *(_QWORD *)&eventId);
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
  void *list; // x0
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23

  if ( (byte_49BAF8D & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventRewardSceneReleaseEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventRewardSceneReleaseEntity__get_Item__, v7);
    byte_49BAF8D = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_13:
    sub_1B4D1EC(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneReleaseEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v10 = Count;
  v11 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_13;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v11,
             (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneReleaseEntity__get_Item__);
    if ( !list )
      goto LABEL_13;
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == slot )
      return *((_DWORD *)list + 9);
    if ( v10 == ++v11 )
      return 0;
  }
}