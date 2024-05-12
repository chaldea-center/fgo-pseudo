void __fastcall BattleMasterImageMaster___ctor(BattleMasterImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43876EA & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string___ctor__);
    byte_43876EA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    390,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string___ctor__);
}


BattleMasterImageEntity_o *__fastcall BattleMasterImageMaster__GetEntity(
        BattleMasterImageMaster_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  CommonReleaseMaster_o *v9; // x22
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  BattleMasterImageEntity_o *v20; // x0
  __int64 v21; // x1
  BattleMasterImageEntity_o *v22; // x23
  __int64 v23; // x9
  int32_t v24; // w8
  __int64 commonReleaseId; // x1
  int v26; // w8
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  int v32; // [xsp+0h] [xbp-50h]

  if ( (byte_43876E9 & 1) == 0 )
  {
    sub_B775C4(&BattleMasterImageEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    byte_43876E9 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_B7769C(Master_WarQuestSelectionMaster, v8);
  v9 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_19:
      v19 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (BattleMasterImageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                         Enumerator,
                                         *(_QWORD *)(v19 + 8));
    v22 = v20;
    if ( !v20 )
      goto LABEL_42;
    v23 = *(&BattleMasterImageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (BattleMasterImageEntity_c *)v20->klass->_2.typeHierarchy[v23 - 1] != BattleMasterImageEntity_TypeInfo )
    {
      v20 = (BattleMasterImageEntity_o *)sub_B77990(v20);
LABEL_42:
      sub_B7769C(v20, v21);
    }
    if ( v20->fields.id == id )
    {
      v24 = v20->fields.type;
      if ( v24 == type || v24 == 3 )
      {
        commonReleaseId = (unsigned int)v20->fields.commonReleaseId;
        if ( !(_DWORD)commonReleaseId )
          goto LABEL_30;
        if ( !v9 )
          sub_B7769C(v20, commonReleaseId);
        if ( CommonReleaseMaster__IsOpen(v9, commonReleaseId, 0LL, 0, 0LL) )
        {
LABEL_30:
          v26 = 109;
          goto LABEL_32;
        }
      }
    }
  }
  v22 = 0LL;
  v26 = 107;
LABEL_32:
  v32 = v26;
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_36:
    v30 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  if ( v32 == 107 )
    return 0LL;
  return v22;
}