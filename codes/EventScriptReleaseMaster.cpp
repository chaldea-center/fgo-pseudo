void __fastcall EventScriptReleaseMaster___ctor(EventScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5E8D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string___ctor__, method);
    byte_4AB5E8D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    216,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string___ctor__);
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

  if ( (byte_4AB5E8B & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4AB5E8B = 1;
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
                                         (const MethodInfo_31640E8 *)Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__GetEntity__);
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

  if ( (byte_4AB5E8C & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4AB5E8C = 1;
  }
  PK = (Il2CppObject *)EventScriptReleaseEntity__CreatePK(eventId, flagId, type, targetId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  bool v12; // w26
  int32_t v13; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_4AB5E8E & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BAB41C(&EventScriptReleaseEntity_TypeInfo, v8);
    byte_4AB5E8E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        v12 = 1;
      }
      if ( v11 == ++v13 )
        return v12;
    }
LABEL_18:
    sub_1BAB678(list, *(_QWORD *)&eventId);
  }
  return 0;
}