void __fastcall GiftAddMaster___ctor(GiftAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE7CD & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string___ctor__, method);
    byte_49FE7CD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    25,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GiftAddEntity_o *__fastcall GiftAddMaster__GetEntity(
        GiftAddMaster_o *this,
        int32_t giftId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE7CB & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__GetEntity__, *(_QWORD *)&giftId);
    byte_49FE7CB = 1;
  }
  PK = (Il2CppObject *)GiftAddEntity__CreatePK(giftId, priority, *(const MethodInfo **)&priority);
  return (GiftAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_30D64D8 *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GiftAddEntity_o *__fastcall GiftAddMaster__GetValidPriorDataById(
        GiftAddMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  GiftAddEntity_o *v12; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  GiftAddEntity_o *v21; // x0
  __int64 v22; // x1
  GiftAddEntity_o *v23; // x22
  __int64 methodPtr_low; // x9
  int32_t priority; // w8
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_49FE7CE & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&giftId);
    sub_1B64870(&GiftAddEntity_TypeInfo, v5);
    sub_1B64870(&System_IDisposable_TypeInfo, v6);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_49FE7CE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64ACC(0LL, *(_QWORD *)&giftId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v10);
  v12 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_17;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_17:
      v20 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (GiftAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                               Enumerator,
                               *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(GiftAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (GiftAddEntity_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] != GiftAddEntity_TypeInfo )
    {
      sub_1B64D8C(v21);
LABEL_36:
      sub_1B64ACC(v21, v22);
    }
    if ( v21->fields.giftId == giftId
      && GiftAddEntity__CheckValid(v21, (const MethodInfo *)GiftAddEntity_TypeInfo)
      && (!v12 || (priority = v23->fields.priority) != 0 && priority > v12->fields.priority) )
    {
      v12 = v23;
    }
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_32;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_32:
    v29 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GiftAddMaster__TryGetEntity(
        GiftAddMaster_o *this,
        GiftAddEntity_o **entity,
        int32_t giftId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FE7CC & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__TryGetEntity__, entity);
    byte_49FE7CC = 1;
  }
  PK = (Il2CppObject *)GiftAddEntity__CreatePK(giftId, priority, *(const MethodInfo **)&giftId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__TryGetEntity__);
}