void EventCampaignReleaseMaster___ctor(EventCampaignReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42EB4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__);
    byte_4C42EB4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    271,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCampaignReleaseEntity_o *EventCampaignReleaseMaster__GetEntity(
        EventCampaignReleaseMaster_o *this,
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C42EB2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__);
    byte_4C42EB2 = 1;
  }
  PK = (Il2CppObject *)EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_33A5B58 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventCampaignReleaseMaster__TryGetEntity(
        EventCampaignReleaseMaster_o *this,
        EventCampaignReleaseEntity_o **entity,
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C42EB3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__);
    byte_4C42EB3 = 1;
  }
  PK = (Il2CppObject *)EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__);
}


bool EventCampaignReleaseMaster__isRelease(
        EventCampaignReleaseMaster_o *this,
        int32_t eventId,
        int32_t target,
        const MethodInfo *method)
{
  int v7; // w28
  bool IsOpen; // w0
  int32_t v9; // w22
  bool v10; // w25
  System_String_o *Primarykey; // x23
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v14; // x24
  __int64 v15; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__EventCampaignReleaseEntity__c **p_offset; // x10
  __int64 v17; // x0
  int32_t v18; // w23
  int32_t v19; // w25
  int64_t v20; // x24
  _DWORD *v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C42EB5 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__get_lookup__);
    sub_1C37058(&System_Collections_Generic_IReadOnlyDictionary_string__EventCampaignReleaseEntity__TypeInfo);
    byte_4C42EB5 = 1;
  }
  v7 = 0;
  IsOpen = 1;
  v9 = 1;
  v22 = 0;
  while ( 1 )
  {
    v10 = IsOpen;
    Primarykey = EventCampaignReleaseEntity__getCreatePrimarykey(eventId, target, v9, method);
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_33A394C *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_21:
      sub_1C372B4(lookup);
    klass = lookup->klass;
    v14 = lookup;
    v15 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__EventCampaignReleaseEntity__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__EventCampaignReleaseEntity__TypeInfo )
      {
        --v15;
        p_offset += 2;
        if ( !v15 )
          goto LABEL_9;
      }
      v17 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
    }
    else
    {
LABEL_9:
      v17 = sub_1C87870(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__EventCampaignReleaseEntity__TypeInfo,
              1);
    }
    lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _DWORD **, _QWORD))v17)(
                                                                                    v14,
                                                                                    Primarykey,
                                                                                    &v22,
                                                                                    *(_QWORD *)(v17 + 8));
    if ( ((unsigned __int8)lookup & 1) == 0 )
      return v10;
    if ( !v22 )
      goto LABEL_21;
    ++v9;
    if ( v7 == v22[10] )
    {
      IsOpen = 0;
      if ( v10 )
        goto LABEL_17;
    }
    else
    {
      v7 = v22[10];
      if ( v10 )
        return v10;
LABEL_17:
      v19 = v22[7];
      v18 = v22[8];
      v20 = (int)v22[9];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(v19, v18, v20, 0, 0, 0);
    }
  }
}