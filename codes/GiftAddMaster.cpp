void __fastcall GiftAddMaster___ctor(GiftAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B426 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string___ctor__);
    byte_4A5B426 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    25,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GiftAddEntity_o *__fastcall GiftAddMaster__GetEntity(
        GiftAddMaster_o *this,
        int32_t giftId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B424 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__GetEntity__);
    byte_4A5B424 = 1;
  }
  PK = (Il2CppObject *)GiftAddEntity__CreatePK(giftId, priority, *(const MethodInfo **)&priority);
  return (GiftAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_311DC8C *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GiftAddEntity_o *__fastcall GiftAddMaster__GetValidPriorDataById(
        GiftAddMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  GiftAddEntity_o *v8; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  GiftAddEntity_o *v17; // x0
  __int64 v18; // x1
  GiftAddEntity_o *v19; // x22
  __int64 methodPtr_low; // x9
  int32_t priority; // w8
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4A5B427 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&GiftAddEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5B427 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&giftId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  v8 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_17:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (GiftAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                               Enumerator,
                               *(_QWORD *)(v16 + 8));
    v19 = v17;
    if ( !v17 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(GiftAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (GiftAddEntity_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != GiftAddEntity_TypeInfo )
    {
      sub_1B88ACC(v17);
LABEL_36:
      sub_1B8880C(v17, v18);
    }
    if ( v17->fields.giftId == giftId
      && GiftAddEntity__CheckValid(v17, (const MethodInfo *)GiftAddEntity_TypeInfo)
      && (!v8 || (priority = v19->fields.priority) != 0 && priority > v8->fields.priority) )
    {
      v8 = v19;
    }
  }
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_32;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_32:
    v25 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  Il2CppObject *PK; // x2

  if ( (byte_4A5B425 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__TryGetEntity__);
    byte_4A5B425 = 1;
  }
  PK = (Il2CppObject *)GiftAddEntity__CreatePK(giftId, priority, *(const MethodInfo **)&giftId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__TryGetEntity__);
}