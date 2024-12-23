void __fastcall EventCampaignReleaseMaster___ctor(EventCampaignReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66AC6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__, method);
    byte_4B66AC6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    269,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__);
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

  if ( (byte_4B66AC4 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B66AC4 = 1;
  }
  PK = (Il2CppObject *)EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__);
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

  if ( (byte_4B66AC5 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4B66AC5 = 1;
  }
  PK = (Il2CppObject *)EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__);
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
  int monitor; // w28
  bool IsOpen; // w8
  int32_t v11; // w22
  bool v12; // w25
  System_String_o *Primarykey; // x23
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v15; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v17; // x24
  __int64 v18; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 methodPtr_low; // x9
  int32_t v22; // w23
  int32_t monitor_high; // w25
  int64_t klass_high; // x24
  EventCombineCostumeEntity_o *v26; // x0
  const MethodInfo *v27; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v28; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B66AC7 & 1) == 0 )
  {
    sub_1BE4ACC(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_1BE4ACC(&EventCampaignReleaseEntity_TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v8);
    byte_4B66AC7 = 1;
  }
  monitor = 0;
  IsOpen = 1;
  v11 = 1;
  v28 = 0LL;
  while ( 1 )
  {
    v12 = IsOpen;
    Primarykey = EventCampaignReleaseEntity__getCreatePrimarykey(eventId, target, v11, method);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_23:
      sub_1BE4D28(lookup, v15);
    klass = lookup->klass;
    v17 = lookup;
    v18 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
      p_method = sub_1C36AAC(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   1LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o **, _QWORD))p_method)(
            v17,
            Primarykey,
            &v28,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      return v12;
    lookup = v28;
    if ( !v28 )
      goto LABEL_23;
    methodPtr_low = LOBYTE(EventCampaignReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v28->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (EventCampaignReleaseEntity_c *)v28->klass->_2.typeHierarchy[methodPtr_low - 1] != EventCampaignReleaseEntity_TypeInfo )
    {
      break;
    }
    ++v11;
    if ( monitor == LODWORD(v28[2].monitor) )
    {
      IsOpen = 0;
      if ( v12 )
        goto LABEL_19;
    }
    else
    {
      monitor = (int)v28[2].monitor;
      if ( v12 )
        return v12;
LABEL_19:
      monitor_high = HIDWORD(v28[1].monitor);
      v22 = (int32_t)v28[2].klass;
      klass_high = SHIDWORD(v28[2].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(monitor_high, v22, klass_high, 0, 0LL, 0LL);
    }
  }
  sub_1BE4FE8(v28);
  return (unsigned __int8)EventCombineCostumeEntity__CreatePrimaryKey(v26, v27);
}