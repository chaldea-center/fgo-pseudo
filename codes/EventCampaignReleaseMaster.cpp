void __fastcall EventCampaignReleaseMaster___ctor(EventCampaignReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC79AE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__, method);
    byte_4BC79AE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    269,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCampaignReleaseEntity_o *__fastcall EventCampaignReleaseMaster__GetEntity(
        EventCampaignReleaseMaster_o *this,
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC79AC & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4BC79AC = 1;
  }
  PK = (Il2CppObject *)EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_324D130 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCampaignReleaseMaster__TryGetEntity(
        EventCampaignReleaseMaster_o *this,
        EventCampaignReleaseEntity_o **entity,
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC79AD & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4BC79AD = 1;
  }
  PK = (Il2CppObject *)EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCampaignReleaseMaster__isRelease(
        EventCampaignReleaseMaster_o *this,
        int32_t eventId,
        int32_t target,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  int v9; // w28
  bool IsOpen; // w0
  int32_t v11; // w22
  bool v12; // w25
  System_String_o *Primarykey; // x23
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v15; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v17; // x24
  __int64 v18; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__EventCampaignReleaseEntity__c **p_offset; // x10
  __int64 p_method; // x0
  int32_t v21; // w23
  int32_t v22; // w25
  int64_t v23; // x24
  _DWORD *v25; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BC79AF & 1) == 0 )
  {
    sub_1C1ABD4(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__get_lookup__, v7);
    sub_1C1ABD4(&System_Collections_Generic_IReadOnlyDictionary_string__EventCampaignReleaseEntity__TypeInfo, v8);
    byte_4BC79AF = 1;
  }
  v9 = 0;
  IsOpen = 1;
  v11 = 1;
  v25 = 0LL;
  while ( 1 )
  {
    v12 = IsOpen;
    Primarykey = EventCampaignReleaseEntity__getCreatePrimarykey(eventId, target, v11, method);
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_324AF24 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_21:
      sub_1C1AE30(lookup, v15);
    klass = lookup->klass;
    v17 = lookup;
    v18 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__EventCampaignReleaseEntity__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__EventCampaignReleaseEntity__TypeInfo )
      {
        --v18;
        p_offset += 2;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C6CBB4(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__EventCampaignReleaseEntity__TypeInfo,
                   1LL);
    }
    lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _DWORD **, _QWORD))p_method)(
                                                                                    v17,
                                                                                    Primarykey,
                                                                                    &v25,
                                                                                    *(_QWORD *)(p_method + 8));
    if ( ((unsigned __int8)lookup & 1) == 0 )
      return v12;
    if ( !v25 )
      goto LABEL_21;
    ++v11;
    if ( v9 == v25[10] )
    {
      IsOpen = 0;
      if ( v12 )
        goto LABEL_17;
    }
    else
    {
      v9 = v25[10];
      if ( v12 )
        return v12;
LABEL_17:
      v22 = v25[7];
      v21 = v25[8];
      v23 = (int)v25[9];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(v22, v21, v23, 0, 0LL, 0LL);
    }
  }
}