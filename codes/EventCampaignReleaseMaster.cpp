void __fastcall EventCampaignReleaseMaster___ctor(EventCampaignReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16100 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__,
      method,
      v2);
    byte_4B16100 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    265,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__);
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

  if ( (byte_4B160FE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&target);
    byte_4B160FE = 1;
  }
  PK = (Il2CppObject *)EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31B3198 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__);
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

  if ( (byte_4B160FF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B160FF = 1;
  }
  PK = (Il2CppObject *)EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCampaignReleaseMaster__isRelease(
        EventCampaignReleaseMaster_o *this,
        int32_t eventId,
        int32_t target,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int monitor; // w28
  bool IsOpen; // w8
  int32_t v13; // w22
  bool v14; // w25
  System_String_o *Primarykey; // x23
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v17; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v19; // x24
  __int64 v20; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 methodPtr_low; // x9
  int32_t v24; // w23
  int32_t monitor_high; // w25
  int64_t klass_high; // x24
  EventCombineCostumeEntity_o *v28; // x0
  const MethodInfo *v29; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B16101 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&target);
    sub_1BCA7E0(&EventCampaignReleaseEntity_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9, v10);
    byte_4B16101 = 1;
  }
  monitor = 0;
  IsOpen = 1;
  v13 = 1;
  v30 = 0LL;
  while ( 1 )
  {
    v14 = IsOpen;
    Primarykey = EventCampaignReleaseEntity__getCreatePrimarykey(eventId, target, v13, method);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_23:
      sub_1BCAA3C(lookup, v17);
    klass = lookup->klass;
    v19 = lookup;
    v20 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v20;
        p_offset += 2;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   1LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o **, _QWORD))p_method)(
            v19,
            Primarykey,
            &v30,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      return v14;
    lookup = v30;
    if ( !v30 )
      goto LABEL_23;
    methodPtr_low = LOBYTE(EventCampaignReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v30->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (EventCampaignReleaseEntity_c *)v30->klass->_2.typeHierarchy[methodPtr_low - 1] != EventCampaignReleaseEntity_TypeInfo )
    {
      break;
    }
    ++v13;
    if ( monitor == LODWORD(v30[2].monitor) )
    {
      IsOpen = 0;
      if ( v14 )
        goto LABEL_19;
    }
    else
    {
      monitor = (int)v30[2].monitor;
      if ( v14 )
        return v14;
LABEL_19:
      monitor_high = HIDWORD(v30[1].monitor);
      v24 = (int32_t)v30[2].klass;
      klass_high = SHIDWORD(v30[2].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, EventCampaignReleaseEntity_TypeInfo);
      IsOpen = CondType__IsOpen(monitor_high, v24, klass_high, 0, 0LL, 0LL);
    }
  }
  sub_1BCACFC(v30);
  return (unsigned __int8)EventCombineCostumeEntity__CreatePrimaryKey(v28, v29);
}