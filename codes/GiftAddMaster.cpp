void __fastcall GiftAddMaster___ctor(GiftAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1B2A & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string___ctor__);
    byte_42B1B2A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    25,
    (const MethodInfo_23E268C *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GiftAddEntity_o *__fastcall GiftAddMaster__GetEntity(
        GiftAddMaster_o *this,
        int32_t giftId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B1B28 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__GetEntity__);
    byte_42B1B28 = 1;
  }
  PK = GiftAddEntity__CreatePK(giftId, priority, *(const MethodInfo **)&priority);
  return (GiftAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                              (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                              PK,
                              (const MethodInfo_23E2728 *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GiftAddEntity_o *__fastcall GiftAddMaster__GetValidPriorDataById(
        GiftAddMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  GiftAddEntity_o *v9; // x20
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  unsigned __int64 v11; // x10
  int32_t *v12; // x11
  __int64 v13; // x0
  GiftAddEntity_o *v14; // x0
  __int64 v15; // x1
  GiftAddEntity_o *v16; // x22
  __int64 v17; // x9
  int32_t priority; // w8
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0

  if ( (byte_42B1B2B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&GiftAddEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B1B2B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&giftId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  v9 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_25;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_25:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v12 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v11;
        v12 += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v13 = (__int64)&v10->vtable[*v12].method;
    }
    else
    {
LABEL_10:
      v13 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    v14 = (GiftAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                               Enumerator,
                               *(_QWORD *)(v13 + 8));
    v16 = v14;
    if ( !v14 )
      goto LABEL_36;
    v17 = *(&GiftAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (GiftAddEntity_c *)v14->klass->_2.typeHierarchy[v17 - 1] != GiftAddEntity_TypeInfo )
    {
      v14 = (GiftAddEntity_o *)sub_B52D50(v14);
LABEL_36:
      sub_B52A5C(v14, v15);
    }
    if ( v14->fields.giftId == giftId
      && GiftAddEntity__CheckValid(v14, (const MethodInfo *)GiftAddEntity_TypeInfo)
      && (!v9 || (priority = v16->fields.priority) != 0 && priority > v9->fields.priority) )
    {
      v9 = v16;
    }
  }
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_32:
    v27 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GiftAddMaster__TryGetEntity(
        GiftAddMaster_o *this,
        GiftAddEntity_o **entity,
        int32_t giftId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B1B29 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__TryGetEntity__);
    byte_42B1B29 = 1;
  }
  PK = GiftAddEntity__CreatePK(giftId, priority, *(const MethodInfo **)&giftId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__TryGetEntity__);
}