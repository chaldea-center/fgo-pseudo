void BattleMasterImageMaster___ctor(BattleMasterImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59382AF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string___ctor__);
    byte_59382AF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    399,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BattleMasterImageEntity_o *BattleMasterImageMaster__GetEntity(
        BattleMasterImageMaster_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v10; // x21
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  BattleMasterImageEntity_o *v24; // x0
  __int64 v25; // x1
  BattleMasterImageEntity_o *v26; // x22
  int32_t v27; // w8
  __int64 commonReleaseId; // x1
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  System_Collections_Generic_IEnumerator_T__o *v34; // [xsp+18h] [xbp-38h]

  if ( (byte_59382AE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_BattleMasterImageEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string__getEntityList__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_BattleMasterImageEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_59382AE = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&id);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(Master_object, v8);
  v10 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_BattleMasterImageEntity__GetEnumerator__);
  v34 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v12);
  for ( i = Enumerator; ; i = v34 )
  {
    klass = i->klass;
    v15 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_12;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v17 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            i,
            *(_QWORD *)(v17 + 8));
    if ( (v18 & 1) == 0 )
      break;
    if ( !v34 )
      sub_21FFECC(v18, v19);
    v20 = v34->klass;
    v21 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleMasterImageEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_BattleMasterImageEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_20;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_20:
      v23 = sub_2237E2C(v34, System_Collections_Generic_IEnumerator_BattleMasterImageEntity__TypeInfo, 0);
    }
    v24 = (BattleMasterImageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                         v34,
                                         *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      sub_21FFECC(0, v25);
    if ( v24->fields.id == id )
    {
      v27 = v24->fields.type;
      if ( v27 == type || v27 == 3 )
      {
        commonReleaseId = (unsigned int)v24->fields.commonReleaseId;
        if ( !(_DWORD)commonReleaseId )
          goto LABEL_32;
        if ( !v10 )
          sub_21FFECC(v24, commonReleaseId);
        if ( CommonReleaseMaster__IsOpen(v10, commonReleaseId, 0, 0, 0) )
          goto LABEL_32;
      }
    }
  }
  v26 = 0;
LABEL_32:
  if ( v34 )
  {
    v29 = v34->klass;
    v30 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_37;
      }
      v32 = (__int64)&v29->vtable[*v31];
    }
    else
    {
LABEL_37:
      v32 = sub_2237E2C(v34, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(v34, *(_QWORD *)(v32 + 8));
  }
  return v26;
}