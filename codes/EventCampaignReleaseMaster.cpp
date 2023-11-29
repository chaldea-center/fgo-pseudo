void __fastcall EventCampaignReleaseMaster___ctor(EventCampaignReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC5BC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__, method);
    byte_40FC5BC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    263,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string___ctor__);
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

  if ( (byte_40FC5BA & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_40FC5BA = 1;
  }
  PK = EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__GetEntity__);
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

  if ( (byte_40FC5BB & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__,
      entity);
    byte_40FC5BB = 1;
  }
  PK = EventCampaignReleaseEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventCampaignReleaseMaster__EventCampaignReleaseEntity__string__TryGetEntity__);
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
  int v9; // w26
  bool IsOpen; // w8
  int32_t v11; // w22
  __int64 v12; // x9
  int32_t v13; // w23
  int32_t v14; // w25
  int64_t v15; // x24
  bool v16; // w25
  System_String_o *Primarykey; // x23
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v20; // x24
  unsigned __int64 v21; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  _DWORD *v25; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FC5BD & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&EventCampaignReleaseEntity_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v8);
    byte_40FC5BD = 1;
  }
  v25 = 0LL;
  v9 = 0;
  IsOpen = 1;
  v11 = 1;
  while ( 1 )
  {
    v16 = IsOpen;
    Primarykey = EventCampaignReleaseEntity__getCreatePrimarykey(eventId, target, v11, method);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_25;
    klass = lookup->klass;
    v20 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v21;
        p_offset += 2;
        if ( v21 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_20:
      p_method = sub_AAFEF8(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   1LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _DWORD **, _QWORD))p_method)(
            v20,
            Primarykey,
            &v25,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      return v16;
    if ( !v25 )
      goto LABEL_25;
    v12 = *(&EventCampaignReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 300LL) < (unsigned int)v12
      || *(EventCampaignReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * v12 - 8) != EventCampaignReleaseEntity_TypeInfo )
    {
      sub_B173C8(v25);
LABEL_25:
      sub_B170D4();
    }
    ++v11;
    if ( v9 == v25[10] )
    {
      IsOpen = 0;
      if ( v16 )
        goto LABEL_11;
    }
    else
    {
      v9 = v25[10];
      if ( v16 )
        return v16;
LABEL_11:
      v14 = v25[7];
      v13 = v25[8];
      v15 = (int)v25[9];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(v14, v13, v15, 0, 0LL);
    }
  }
}