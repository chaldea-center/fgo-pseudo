void __fastcall BattleMasterImageMaster___ctor(BattleMasterImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ADEC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string___ctor__);
    byte_4A5ADEC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    391,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string___ctor__);
}


BattleMasterImageEntity_o *__fastcall BattleMasterImageMaster__GetEntity(
        BattleMasterImageMaster_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  CommonReleaseMaster_o *v9; // x22
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  BattleMasterImageEntity_o *v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x4
  BattleMasterImageEntity_o *v23; // x23
  __int64 methodPtr_low; // x9
  int32_t v25; // w8
  __int64 commonReleaseId; // x1
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4A5ADEB & 1) == 0 )
  {
    sub_1B885B0(&BattleMasterImageEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5ADEB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1B8880C(Master_object, v8);
  v9 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_18:
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (BattleMasterImageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                         Enumerator,
                                         *(_QWORD *)(v19 + 8));
    v23 = v20;
    if ( !v20 )
      goto LABEL_39;
    methodPtr_low = LOBYTE(BattleMasterImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v20->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (BattleMasterImageEntity_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] != BattleMasterImageEntity_TypeInfo )
    {
      sub_1B88ACC(v20);
LABEL_39:
      sub_1B8880C(v20, v21);
    }
    if ( v20->fields.id == id )
    {
      v25 = v20->fields.type;
      if ( v25 == type || v25 == 3 )
      {
        commonReleaseId = (unsigned int)v20->fields.commonReleaseId;
        if ( !(_DWORD)commonReleaseId )
          goto LABEL_31;
        if ( !v9 )
          sub_1B8880C(v20, commonReleaseId);
        if ( CommonReleaseMaster__IsOpen(v9, commonReleaseId, 0LL, 0, v22) )
          goto LABEL_31;
      }
    }
  }
  v23 = 0LL;
LABEL_31:
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_35;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_35:
    v30 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v23;
}