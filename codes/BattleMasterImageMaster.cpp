void __fastcall BattleMasterImageMaster___ctor(BattleMasterImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189B78 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string___ctor__, method);
    byte_4189B78 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    389,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string___ctor__);
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
  __int64 v14; // x1
  CommonReleaseMaster_o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  BattleMasterImageEntity_o *v27; // x0
  __int64 v28; // x1
  BattleMasterImageEntity_o *v29; // x23
  __int64 v30; // x9
  int32_t v31; // w8
  __int64 commonReleaseId; // x1
  int v33; // w8
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  int v39; // [xsp+0h] [xbp-50h]

  if ( (byte_4189B77 & 1) == 0 )
  {
    sub_B2C35C(&BattleMasterImageEntity_TypeInfo, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&System_IDisposable_TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_4189B77 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_B2C434(Master_WarQuestSelectionMaster, v14);
  v15 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_19:
      v26 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v27 = (BattleMasterImageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                         Enumerator,
                                         *(_QWORD *)(v26 + 8));
    v29 = v27;
    if ( !v27 )
      goto LABEL_42;
    v30 = *(&BattleMasterImageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (BattleMasterImageEntity_c *)v27->klass->_2.typeHierarchy[v30 - 1] != BattleMasterImageEntity_TypeInfo )
    {
      v27 = (BattleMasterImageEntity_o *)sub_B2C728(v27);
LABEL_42:
      sub_B2C434(v27, v28);
    }
    if ( v27->fields.id == id )
    {
      v31 = v27->fields.type;
      if ( v31 == type || v31 == 3 )
      {
        commonReleaseId = (unsigned int)v27->fields.commonReleaseId;
        if ( !(_DWORD)commonReleaseId )
          goto LABEL_30;
        if ( !v15 )
          sub_B2C434(v27, commonReleaseId);
        if ( CommonReleaseMaster__IsOpen(v15, commonReleaseId, 0LL, 0, 0LL) )
        {
LABEL_30:
          v33 = 109;
          goto LABEL_32;
        }
      }
    }
  }
  v29 = 0LL;
  v33 = 107;
LABEL_32:
  v39 = v33;
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_36:
    v37 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  if ( v39 == 107 )
    return 0LL;
  return v29;
}