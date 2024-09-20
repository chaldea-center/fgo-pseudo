void __fastcall EventScriptReleaseMaster___ctor(EventScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B29F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string___ctor__);
    byte_4A5B29F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    216,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string___ctor__);
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
  Il2CppObject *PK; // x1

  if ( (byte_4A5B29D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__GetEntity__);
    byte_4A5B29D = 1;
  }
  PK = (Il2CppObject *)EventScriptReleaseEntity__CreatePK(
                         eventId,
                         flagId,
                         type,
                         targetId,
                         *(const MethodInfo **)&targetId);
  return (EventScriptReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_311DC8C *)Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__GetEntity__);
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
  Il2CppObject *PK; // x2

  if ( (byte_4A5B29E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__TryGetEntity__);
    byte_4A5B29E = 1;
  }
  PK = (Il2CppObject *)EventScriptReleaseEntity__CreatePK(eventId, flagId, type, targetId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventScriptReleaseMaster__isAvailable(
        EventScriptReleaseMaster_o *this,
        int32_t eventId,
        int32_t flag,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  bool v10; // w26
  int32_t v11; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B2A0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventScriptReleaseEntity_TypeInfo);
    byte_4A5B2A0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      methodPtr_low = LOBYTE(EventScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventScriptReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventScriptReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == flag )
      {
        if ( !EventScriptReleaseEntity__isAvailable((EventScriptReleaseEntity_o *)list, *(const MethodInfo **)&eventId) )
          return 0;
        v10 = 1;
      }
      if ( v9 == ++v11 )
        return v10;
    }
LABEL_18:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  }
  return 0;
}