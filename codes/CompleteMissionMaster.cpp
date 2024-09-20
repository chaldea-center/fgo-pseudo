void __fastcall CompleteMissionMaster___ctor(CompleteMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF9D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int___ctor__);
    byte_4A5AF9D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    141,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int___ctor__);
}


bool __fastcall CompleteMissionMaster__TryGetEntityFromObjectId(
        CompleteMissionMaster_o *this,
        CompleteMissionEntity_o **entity,
        int32_t objectId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  CompleteMissionEntity_o *v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 methodPtr_low; // x11
  bool v23; // w22
  int v24; // w24
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_4A5AF9E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&CompleteMissionEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5AF9E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, entity);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (CompleteMissionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    if ( !v18
      || (methodPtr_low = LOBYTE(CompleteMissionEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (CompleteMissionEntity_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionEntity_TypeInfo )
    {
      sub_1B8880C(v18, v19);
    }
    if ( v18->fields.objectId == objectId )
    {
      *entity = v18;
      sub_1B88554((ServantStatusBattleListViewItem_o *)entity, (int32_t)v18, v20, v21);
      v23 = 1;
      v24 = 4;
      goto LABEL_24;
    }
  }
  v23 = 0;
  v24 = 5;
LABEL_24:
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_28;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_28:
    v28 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  if ( v24 == 5 )
  {
    *entity = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)entity, 0, v29, v30);
    return 0;
  }
  return v23;
}