void __fastcall EventCampaignReleaseMaster___ctor(EventCampaignReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43544D3 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__);
    byte_43544D3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    264,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCampaignReleaseEntity_o *__fastcall EventCampaignReleaseMaster__GetEntity(
        EventCampaignReleaseMaster_o *this,
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_43544D1 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__);
    byte_43544D1 = 1;
  }
  PK = EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_21C0890 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__);
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
  System_String_o *PK; // x2

  if ( (byte_43544D2 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__);
    byte_43544D2 = 1;
  }
  PK = EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__);
}


bool __fastcall EventCampaignReleaseMaster__isRelease(
        EventCampaignReleaseMaster_o *this,
        int32_t eventId,
        int32_t target,
        const MethodInfo *method)
{
  int monitor; // w26
  bool IsOpen; // w8
  int32_t v9; // w22
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v11; // x9
  int32_t v12; // w23
  int32_t monitor_high; // w25
  int64_t klass_high; // x24
  bool v15; // w25
  System_String_o *Primarykey; // x23
  __int64 v17; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v19; // x24
  unsigned __int64 v20; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v24; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_43544D4 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&EventCampaignReleaseEntity_TypeInfo);
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    byte_43544D4 = 1;
  }
  v24 = 0LL;
  monitor = 0;
  IsOpen = 1;
  v9 = 1;
  while ( 1 )
  {
    v15 = IsOpen;
    Primarykey = EventCampaignReleaseEntity__getCreatePrimarykey(eventId, target, v9, method);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_25;
    klass = lookup->klass;
    v19 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v20;
        p_offset += 2;
        if ( v20 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_20:
      p_method = sub_B08590(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   1LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o **, _QWORD))p_method)(
            v19,
            Primarykey,
            &v24,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      return v15;
    lookup = v24;
    if ( !v24 )
      goto LABEL_25;
    v11 = *(&EventCampaignReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (EventCampaignReleaseEntity_c *)v24->klass->_2.typeHierarchy[v11 - 1] != EventCampaignReleaseEntity_TypeInfo )
    {
      sub_B70A60(v24);
LABEL_25:
      sub_B7076C(lookup, v17);
    }
    ++v9;
    if ( monitor == LODWORD(v24[2].monitor) )
    {
      IsOpen = 0;
      if ( v15 )
        goto LABEL_11;
    }
    else
    {
      monitor = (int)v24[2].monitor;
      if ( v15 )
        return v15;
LABEL_11:
      monitor_high = HIDWORD(v24[1].monitor);
      v12 = (int32_t)v24[2].klass;
      klass_high = SHIDWORD(v24[2].klass);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(monitor_high, v12, klass_high, 0, 0LL);
    }
  }
}