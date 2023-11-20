void __fastcall BattleMasterImageMaster___ctor(BattleMasterImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC490 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string___ctor__, method);
    byte_40FC490 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    389,
    (const MethodInfo_266F73C *)Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string___ctor__);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  CommonReleaseMaster_o *v14; // x22
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  BattleMasterImageEntity_o *v24; // x0
  BattleMasterImageEntity_o *v25; // x23
  __int64 v26; // x9
  int32_t v27; // w8
  int32_t commonReleaseId; // w1
  int v29; // w8
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  int v35; // [xsp+0h] [xbp-50h]

  if ( (byte_40FC48F & 1) == 0 )
  {
    sub_B16FFC(&BattleMasterImageEntity_TypeInfo, *(_QWORD *)&id);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&System_IDisposable_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_40FC48F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_B170D4();
  v14 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_19:
      v23 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (BattleMasterImageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                         Enumerator,
                                         *(_QWORD *)(v23 + 8));
    v25 = v24;
    if ( !v24 )
      goto LABEL_42;
    v26 = *(&BattleMasterImageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (BattleMasterImageEntity_c *)v24->klass->_2.typeHierarchy[v26 - 1] != BattleMasterImageEntity_TypeInfo )
    {
      sub_B173C8(v24);
LABEL_42:
      sub_B170D4();
    }
    if ( v24->fields.id == id )
    {
      v27 = v24->fields.type;
      if ( v27 == type || v27 == 3 )
      {
        commonReleaseId = v24->fields.commonReleaseId;
        if ( !commonReleaseId )
          goto LABEL_30;
        if ( !v14 )
          sub_B170D4();
        if ( CommonReleaseMaster__IsOpen(v14, commonReleaseId, 0LL, 0, 0LL) )
        {
LABEL_30:
          v29 = 109;
          goto LABEL_32;
        }
      }
    }
  }
  v25 = 0LL;
  v29 = 107;
LABEL_32:
  v35 = v29;
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_36:
    v33 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  if ( v35 == 107 )
    return 0LL;
  return v25;
}