void __fastcall EventCampaignReleaseMaster___ctor(EventCampaignReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB134 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EB134 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    264,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__);
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

  if ( (byte_42EB132 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__,
      eventId,
      target,
      *(_QWORD *)&idx);
    byte_42EB132 = 1;
  }
  PK = EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_23FB260 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__);
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

  if ( (byte_42EB133 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&target);
    byte_42EB133 = 1;
  }
  PK = EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__);
}


bool __fastcall EventCampaignReleaseMaster__isRelease(
        EventCampaignReleaseMaster_o *this,
        int32_t eventId,
        int32_t target,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int monitor; // w26
  bool IsOpen; // w8
  int32_t v15; // w22
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v17; // x9
  int32_t v18; // w23
  int32_t monitor_high; // w25
  int64_t klass_high; // x24
  bool v21; // w25
  System_String_o *Primarykey; // x23
  __int64 v23; // x1
  __int64 v24; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v26; // x24
  unsigned __int64 v27; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v31; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EB135 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, eventId, target, method);
    sub_B5D5C4(&EventCampaignReleaseEntity_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10, v11, v12);
    byte_42EB135 = 1;
  }
  v31 = 0LL;
  monitor = 0;
  IsOpen = 1;
  v15 = 1;
  while ( 1 )
  {
    v21 = IsOpen;
    Primarykey = EventCampaignReleaseEntity__getCreatePrimarykey(eventId, target, v15, method);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_25;
    klass = lookup->klass;
    v26 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v27;
        p_offset += 2;
        if ( v27 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_20:
      p_method = sub_AF54C0(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   1LL,
                   v24);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o **, _QWORD))p_method)(
            v26,
            Primarykey,
            &v31,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      return v21;
    lookup = v31;
    if ( !v31 )
      goto LABEL_25;
    v17 = *(&EventCampaignReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (EventCampaignReleaseEntity_c *)v31->klass->_2.typeHierarchy[v17 - 1] != EventCampaignReleaseEntity_TypeInfo )
    {
      sub_B5D990(v31);
LABEL_25:
      sub_B5D69C(lookup, v23);
    }
    ++v15;
    if ( monitor == LODWORD(v31[2].monitor) )
    {
      IsOpen = 0;
      if ( v21 )
        goto LABEL_11;
    }
    else
    {
      monitor = (int)v31[2].monitor;
      if ( v21 )
        return v21;
LABEL_11:
      monitor_high = HIDWORD(v31[1].monitor);
      v18 = (int32_t)v31[2].klass;
      klass_high = SHIDWORD(v31[2].klass);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(monitor_high, v18, klass_high, 0, 0LL);
    }
  }
}