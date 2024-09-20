void __fastcall EventRewardSceneReleaseMaster___ctor(EventRewardSceneReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B286 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string___ctor__);
    byte_4A5B286 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    196,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string___ctor__);
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

  if ( (byte_4A5B284 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string__GetEntity__);
    byte_4A5B284 = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneReleaseEntity__CreatePK(eventId, slot, condType, *(const MethodInfo **)&condType);
  return (EventRewardSceneReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_311DC8C *)Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string__GetEntity__);
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

  if ( (byte_4A5B285 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string__TryGetEntity__);
    byte_4A5B285 = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneReleaseEntity__CreatePK(eventId, slot, condType, *(const MethodInfo **)&slot);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventRewardSceneReleaseMaster__EventRewardSceneReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneReleaseEntity_o *__fastcall EventRewardSceneReleaseMaster__getEnableEntity(
        EventRewardSceneReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  EventRewardSceneReleaseEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B287 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventRewardSceneReleaseEntity_TypeInfo);
    byte_4A5B287 = 1;
  }
  result = (EventRewardSceneReleaseEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                    (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      methodPtr_low = LOBYTE(EventRewardSceneReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventRewardSceneReleaseEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardSceneReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.eventId == eventId && result->fields.slot == slot )
        return result;
      if ( v9 == ++v10 )
        return 0LL;
    }
LABEL_15:
    sub_1B8880C(result, *(_QWORD *)&eventId);
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
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B288 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventRewardSceneReleaseEntity_TypeInfo);
    byte_4A5B288 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_15:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v10,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_15;
    methodPtr_low = LOBYTE(EventRewardSceneReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(EventRewardSceneReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventRewardSceneReleaseEntity_TypeInfo )
    {
      goto LABEL_15;
    }
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == slot )
      return *((_DWORD *)list + 9);
    if ( v9 == ++v10 )
      return 0;
  }
}