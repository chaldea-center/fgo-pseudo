void __fastcall EventCampaignReleaseMaster___ctor(EventCampaignReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B073 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__);
    byte_4A5B073 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    265,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__);
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

  if ( (byte_4A5B071 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__);
    byte_4A5B071 = 1;
  }
  PK = (Il2CppObject *)EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_311DC8C *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__);
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

  if ( (byte_4A5B072 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__);
    byte_4A5B072 = 1;
  }
  PK = (Il2CppObject *)EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__);
}


bool __fastcall EventCampaignReleaseMaster__isRelease(
        EventCampaignReleaseMaster_o *this,
        int32_t eventId,
        int32_t target,
        const MethodInfo *method)
{
  int monitor; // w28
  bool IsOpen; // w8
  int32_t v9; // w22
  bool v10; // w25
  System_String_o *Primarykey; // x23
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v13; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v15; // x24
  __int64 v16; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 methodPtr_low; // x9
  int32_t v20; // w23
  int32_t monitor_high; // w25
  int64_t klass_high; // x24
  EventCombineCostumeEntity_o *v24; // x0
  const MethodInfo *v25; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v26; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5B074 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&EventCampaignReleaseEntity_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    byte_4A5B074 = 1;
  }
  monitor = 0;
  IsOpen = 1;
  v9 = 1;
  v26 = 0LL;
  while ( 1 )
  {
    v10 = IsOpen;
    Primarykey = EventCampaignReleaseEntity__getCreatePrimarykey(eventId, target, v9, method);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_23:
      sub_1B8880C(lookup, v13);
    klass = lookup->klass;
    v15 = lookup;
    v16 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v16;
        p_offset += 2;
        if ( !v16 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   1LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o **, _QWORD))p_method)(
            v15,
            Primarykey,
            &v26,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      return v10;
    lookup = v26;
    if ( !v26 )
      goto LABEL_23;
    methodPtr_low = LOBYTE(EventCampaignReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v26->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (EventCampaignReleaseEntity_c *)v26->klass->_2.typeHierarchy[methodPtr_low - 1] != EventCampaignReleaseEntity_TypeInfo )
    {
      break;
    }
    ++v9;
    if ( monitor == LODWORD(v26[2].monitor) )
    {
      IsOpen = 0;
      if ( v10 )
        goto LABEL_19;
    }
    else
    {
      monitor = (int)v26[2].monitor;
      if ( v10 )
        return v10;
LABEL_19:
      monitor_high = HIDWORD(v26[1].monitor);
      v20 = (int32_t)v26[2].klass;
      klass_high = SHIDWORD(v26[2].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(monitor_high, v20, klass_high, 0, 0LL, 0LL);
    }
  }
  sub_1B88ACC(v26);
  return (unsigned __int8)EventCombineCostumeEntity__CreatePrimaryKey(v24, v25);
}