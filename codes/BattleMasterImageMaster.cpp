void __fastcall BattleMasterImageMaster___ctor(BattleMasterImageMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5037 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E5037 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    390,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_BattleMasterImageMaster__BattleMasterImageEntity__string___ctor__);
}


BattleMasterImageEntity_o *__fastcall BattleMasterImageMaster__GetEntity(
        BattleMasterImageMaster_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v26; // x1
  CommonReleaseMaster_o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  BattleMasterImageEntity_o *v39; // x0
  __int64 v40; // x1
  BattleMasterImageEntity_o *v41; // x23
  __int64 v42; // x9
  int32_t v43; // w8
  __int64 commonReleaseId; // x1
  int v45; // w8
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0
  int v51; // [xsp+0h] [xbp-50h]

  if ( (byte_42E5036 & 1) == 0 )
  {
    sub_B5D5C4(&BattleMasterImageEntity_TypeInfo, id, type, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v22, v23, v24);
    byte_42E5036 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_B5D69C(Master_WarQuestSelectionMaster, v26);
  v27 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v28);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v32;
        p_offset += 4;
        if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v29);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v35 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v37 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_19:
      v38 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v29);
    }
    v39 = (BattleMasterImageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                                         Enumerator,
                                         *(_QWORD *)(v38 + 8));
    v41 = v39;
    if ( !v39 )
      goto LABEL_42;
    v42 = *(&BattleMasterImageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v39->klass->_2.bitflags2 + 1) < (unsigned int)v42
      || (BattleMasterImageEntity_c *)v39->klass->_2.typeHierarchy[v42 - 1] != BattleMasterImageEntity_TypeInfo )
    {
      v39 = (BattleMasterImageEntity_o *)sub_B5D990(v39);
LABEL_42:
      sub_B5D69C(v39, v40);
    }
    if ( v39->fields.id == id )
    {
      v43 = v39->fields.type;
      if ( v43 == type || v43 == 3 )
      {
        commonReleaseId = (unsigned int)v39->fields.commonReleaseId;
        if ( !(_DWORD)commonReleaseId )
          goto LABEL_30;
        if ( !v27 )
          sub_B5D69C(v39, commonReleaseId);
        if ( CommonReleaseMaster__IsOpen(v27, commonReleaseId, 0LL, 0, 0LL) )
        {
LABEL_30:
          v45 = 109;
          goto LABEL_32;
        }
      }
    }
  }
  v41 = 0LL;
  v45 = 107;
LABEL_32:
  v51 = v45;
  v46 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_36:
    v49 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v29);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  if ( v51 == 107 )
    return 0LL;
  return v41;
}