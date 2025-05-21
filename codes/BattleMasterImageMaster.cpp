void __fastcall BattleMasterImageMaster___ctor(BattleMasterImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B446D4 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string___ctor__, method);
    byte_4B446D4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    397,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BattleMasterImageEntity_o *__fastcall BattleMasterImageMaster__GetEntity(
        BattleMasterImageMaster_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  CommonReleaseMaster_o *v15; // x22
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  BattleMasterImageEntity_o *v26; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x4
  BattleMasterImageEntity_o *v29; // x23
  int32_t v30; // w8
  __int64 commonReleaseId; // x1
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4B446D3 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_BattleMasterImageEntity__GetEnumerator__,
      *(_QWORD *)&id);
    sub_1BDB878(&Method_DataManager_GetMaster_CommonReleaseMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string__getEntityList__, v9);
    sub_1BDB878(&System_IDisposable_TypeInfo, v10);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_BattleMasterImageEntity__TypeInfo, v11);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_4B446D3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1BDBAD4(Master_object, v14);
  v15 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_BattleMasterImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleMasterImageEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_BattleMasterImageEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_18;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_18:
      v25 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_BattleMasterImageEntity__TypeInfo, 0LL);
    }
    v26 = (BattleMasterImageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                         Enumerator,
                                         *(_QWORD *)(v25 + 8));
    v29 = v26;
    if ( !v26 )
      sub_1BDBAD4(0LL, v27);
    if ( v26->fields.id == id )
    {
      v30 = v26->fields.type;
      if ( v30 == type || v30 == 3 )
      {
        commonReleaseId = (unsigned int)v26->fields.commonReleaseId;
        if ( !(_DWORD)commonReleaseId )
          goto LABEL_29;
        if ( !v15 )
          sub_1BDBAD4(v26, commonReleaseId);
        if ( CommonReleaseMaster__IsOpen(v15, commonReleaseId, 0LL, 0, v28) )
          goto LABEL_29;
      }
    }
  }
  v29 = 0LL;
LABEL_29:
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_33;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_33:
    v35 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return v29;
}