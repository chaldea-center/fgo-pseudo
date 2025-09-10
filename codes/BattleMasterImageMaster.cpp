void BattleMasterImageMaster___ctor(BattleMasterImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C26F17 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string___ctor__);
    byte_4C26F17 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    397,
    (const MethodInfo_338A52C *)Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string___ctor__);
}


BattleMasterImageEntity_o *BattleMasterImageMaster__GetEntity(
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
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  BattleMasterImageEntity_o *v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x4
  BattleMasterImageEntity_o *v23; // x23
  int32_t v24; // w8
  __int64 commonReleaseId; // x1
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4C26F16 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_BattleMasterImageEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string__getEntityList__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_BattleMasterImageEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C26F16 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1C2D6EC(Master_object, v8);
  v9 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_BattleMasterImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_11;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v15 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleMasterImageEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_BattleMasterImageEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_18:
      v19 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_BattleMasterImageEntity__TypeInfo, 0);
    }
    v20 = (BattleMasterImageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                         Enumerator,
                                         *(_QWORD *)(v19 + 8));
    v23 = v20;
    if ( !v20 )
      sub_1C2D6EC(0, v21);
    if ( v20->fields.id == id )
    {
      v24 = v20->fields.type;
      if ( v24 == type || v24 == 3 )
      {
        commonReleaseId = (unsigned int)v20->fields.commonReleaseId;
        if ( !(_DWORD)commonReleaseId )
          goto LABEL_29;
        if ( !v9 )
          sub_1C2D6EC(v20, commonReleaseId);
        if ( CommonReleaseMaster__IsOpen(v9, commonReleaseId, 0, 0, v22) )
          goto LABEL_29;
      }
    }
  }
  v23 = 0;
LABEL_29:
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_33;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_33:
    v29 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return v23;
}