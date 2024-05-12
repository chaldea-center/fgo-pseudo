void __fastcall GiftAddMaster___ctor(GiftAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C8CC & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string___ctor__);
    byte_438C8CC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    25,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GiftAddEntity_o *__fastcall GiftAddMaster__GetEntity(
        GiftAddMaster_o *this,
        int32_t giftId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438C8CA & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__GetEntity__);
    byte_438C8CA = 1;
  }
  PK = GiftAddEntity__CreatePK(giftId, priority, *(const MethodInfo **)&priority);
  return (GiftAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                              (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                              PK,
                              (const MethodInfo_21FBCE4 *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GiftAddEntity_o *__fastcall GiftAddMaster__GetValidPriorDataById(
        GiftAddMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  GiftAddEntity_o *v8; // x20
  System_Collections_Generic_IEnumerator_T__c *v9; // x8
  unsigned __int64 v10; // x10
  int32_t *v11; // x11
  __int64 v12; // x0
  GiftAddEntity_o *v13; // x0
  __int64 v14; // x1
  GiftAddEntity_o *v15; // x22
  __int64 v16; // x9
  int32_t priority; // w8
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0

  if ( (byte_438C8CD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&GiftAddEntity_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    byte_438C8CD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, *(_QWORD *)&giftId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v6);
  v8 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_25;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_25:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      v11 = &v9->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v11 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v10;
        v11 += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v12 = (__int64)&v9->vtable[*v11].method;
    }
    else
    {
LABEL_10:
      v12 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v13 = (GiftAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
                               Enumerator,
                               *(_QWORD *)(v12 + 8));
    v15 = v13;
    if ( !v13 )
      goto LABEL_36;
    v16 = *(&GiftAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (GiftAddEntity_c *)v13->klass->_2.typeHierarchy[v16 - 1] != GiftAddEntity_TypeInfo )
    {
      v13 = (GiftAddEntity_o *)sub_B77990(v13);
LABEL_36:
      sub_B7769C(v13, v14);
    }
    if ( v13->fields.giftId == giftId
      && GiftAddEntity__CheckValid(v13, (const MethodInfo *)GiftAddEntity_TypeInfo)
      && (!v8 || (priority = v15->fields.priority) != 0 && priority > v8->fields.priority) )
    {
      v8 = v15;
    }
  }
  v22 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_32:
    v25 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v8;
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

  if ( (byte_438C8CB & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__TryGetEntity__);
    byte_438C8CB = 1;
  }
  PK = GiftAddEntity__CreatePK(giftId, priority, *(const MethodInfo **)&giftId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__TryGetEntity__);
}