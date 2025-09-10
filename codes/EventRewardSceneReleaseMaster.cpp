void EventRewardSceneReleaseMaster___ctor(EventRewardSceneReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C273F4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string___ctor__);
    byte_4C273F4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    200,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneReleaseEntity_o *EventRewardSceneReleaseMaster__GetEntity(
        EventRewardSceneReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C273F2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string__GetEntity__);
    byte_4C273F2 = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneReleaseEntity__CreatePK(eventId, slot, condType, *(const MethodInfo **)&condType);
  return (EventRewardSceneReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_338C850 *)Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventRewardSceneReleaseMaster__TryGetEntity(
        EventRewardSceneReleaseMaster_o *this,
        EventRewardSceneReleaseEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C273F3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string__TryGetEntity__);
    byte_4C273F3 = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneReleaseEntity__CreatePK(eventId, slot, condType, *(const MethodInfo **)&slot);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneReleaseEntity_o *EventRewardSceneReleaseMaster__getEnableEntity(
        EventRewardSceneReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  EventRewardSceneReleaseEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23

  if ( (byte_4C273F5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventRewardSceneReleaseEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventRewardSceneReleaseEntity__get_Item__);
    byte_4C273F5 = 1;
  }
  result = (EventRewardSceneReleaseEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      result = (EventRewardSceneReleaseEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventRewardSceneReleaseEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                    (System_Collections_ObjectModel_Collection_T__o *)result,
                                                    v10,
                                                    (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneReleaseEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.eventId == eventId && result->fields.slot == slot )
        return result;
      if ( v9 == ++v10 )
        return 0;
    }
LABEL_13:
    sub_1C2D6EC(result, *(_QWORD *)&eventId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t EventRewardSceneReleaseMaster__getReleaseTabImageId(
        EventRewardSceneReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23

  if ( (byte_4C273F6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventRewardSceneReleaseEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventRewardSceneReleaseEntity__get_Item__);
    byte_4C273F6 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_13:
    sub_1C2D6EC(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneReleaseEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_13;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v10,
             (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneReleaseEntity__get_Item__);
    if ( !list )
      goto LABEL_13;
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == slot )
      return *((_DWORD *)list + 9);
    if ( v9 == ++v10 )
      return 0;
  }
}