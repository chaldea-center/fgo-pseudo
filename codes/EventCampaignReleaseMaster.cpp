void EventCampaignReleaseMaster___ctor(EventCampaignReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C271C8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__);
    byte_4C271C8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    271,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__);
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

  if ( (byte_4C271C6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__);
    byte_4C271C6 = 1;
  }
  PK = (Il2CppObject *)EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_338C850 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__);
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

  if ( (byte_4C271C7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__);
    byte_4C271C7 = 1;
  }
  PK = (Il2CppObject *)EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__);
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
  __int64 v13; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v15; // x24
  __int64 v16; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__EventCampaignReleaseEntity__c **p_offset; // x10
  __int64 v18; // x0
  int32_t v19; // w23
  int32_t v20; // w25
  int64_t v21; // x24
  _DWORD *v23; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C271C9 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__get_lookup__);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyDictionary_string__EventCampaignReleaseEntity__TypeInfo);
    byte_4C271C9 = 1;
  }
  v7 = 0;
  IsOpen = 1;
  v9 = 1;
  v23 = 0;
  while ( 1 )
  {
    v10 = IsOpen;
    Primarykey = EventCampaignReleaseEntity__getCreatePrimarykey(eventId, target, v9, method);
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_338A644 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_21:
      sub_1C2D6EC(lookup, v13);
    klass = lookup->klass;
    v15 = lookup;
    v16 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__EventCampaignReleaseEntity__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__EventCampaignReleaseEntity__TypeInfo )
      {
        --v16;
        p_offset += 2;
        if ( !v16 )
          goto LABEL_9;
      }
      v18 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
    }
    else
    {
LABEL_9:
      v18 = sub_1C7DCA8(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__EventCampaignReleaseEntity__TypeInfo,
              1);
    }
    lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _DWORD **, _QWORD))v18)(
                                                                                    v15,
                                                                                    Primarykey,
                                                                                    &v23,
                                                                                    *(_QWORD *)(v18 + 8));
    if ( ((unsigned __int8)lookup & 1) == 0 )
      return v10;
    if ( !v23 )
      goto LABEL_21;
    ++v9;
    if ( v7 == v23[10] )
    {
      IsOpen = 0;
      if ( v10 )
        goto LABEL_17;
    }
    else
    {
      v7 = v23[10];
      if ( v10 )
        return v10;
LABEL_17:
      v20 = v23[7];
      v19 = v23[8];
      v21 = (int)v23[9];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(v20, v19, v21, 0, 0, 0);
    }
  }
}