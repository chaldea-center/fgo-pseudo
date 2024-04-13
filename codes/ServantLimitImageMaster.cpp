void __fastcall ServantLimitImageMaster___ctor(ServantLimitImageMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAE3E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EAE3E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    352,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitImageEntity_o *__fastcall ServantLimitImageMaster__GetEntity(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EAE3C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__,
      svtId,
      limitCount,
      *(_QWORD *)&priority);
    byte_42EAE3C = 1;
  }
  PK = ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&priority);
  return (ServantLimitImageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__);
}


int32_t __fastcall ServantLimitImageMaster__GetLimitCountSealQuestToSvtId(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v25; // x1
  CommonReleaseMaster_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  _DWORD *v38; // x0
  __int64 v39; // x1
  _DWORD *v40; // x22
  __int64 v41; // x9
  unsigned int v42; // w8
  int32_t v43; // w20
  int v44; // w8
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  int v50; // [xsp+0h] [xbp-60h]

  if ( (byte_42EAE41 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ServantLimitImageEntity_TypeInfo, v21, v22, v23);
    byte_42EAE41 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_B5D69C(Master_WarQuestSelectionMaster, v25);
  v26 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v27);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v28);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v34 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v36 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_19:
      v37 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v28);
    }
    v38 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                      Enumerator,
                      *(_QWORD *)(v37 + 8));
    v40 = v38;
    if ( !v38 )
      goto LABEL_43;
    v41 = *(&ServantLimitImageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v38 + 300LL) < (unsigned int)v41
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v38 + 200LL) + 8 * v41 - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_B5D990(v38);
LABEL_43:
      sub_B5D69C(v38, v39);
    }
    v42 = v38[8];
    if ( v42 <= 0x2E && ((1LL << v42) & 0x400002000002LL) != 0 )
    {
      if ( v38[9] == questId )
        goto LABEL_31;
    }
    else if ( v42 == 113 )
    {
      if ( !v26 )
        sub_B5D69C(v38, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v26, questId, v38[9], 0LL) )
      {
LABEL_31:
        v43 = v40[4];
        v44 = 124;
        goto LABEL_33;
      }
    }
  }
  v44 = 122;
  v43 = 0;
LABEL_33:
  v50 = v44;
  v45 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_37:
    v48 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v28);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  if ( v50 == 122 )
    return 0;
  return v43;
}


System_String_o *__fastcall ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  Il2CppObject *LimitCountSealedServantName; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  System_String_o *v16; // x21
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v18 = svtId;
  if ( (byte_42EAE42 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, svtId, limitCount, method);
    sub_B5D5C4(&StringLiteral_8471/*"LIMIT_COUNT_SEALED_MESSAGE_"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_8470/*"LIMIT_COUNT_SEALED_MESSAGE"*/, v10, v11, v12);
    byte_42EAE42 = 1;
  }
  LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  this,
                                                  svtId,
                                                  limitCount,
                                                  method);
  v14 = System_Int32__ToString((int32_t)&v18, 0LL);
  v15 = System_String__Concat_44577788((System_String_o *)StringLiteral_8471/*"LIMIT_COUNT_SEALED_MESSAGE_"*/, v14, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get(v15, 0LL);
  if ( System_String__op_Equality(v16, v15, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_8470/*"LIMIT_COUNT_SEALED_MESSAGE"*/, 0LL);
  }
  return System_String__Format(v16, LimitCountSealedServantName, 0LL);
}


System_String_o *__fastcall ServantLimitImageMaster__GetLimitCountSealedServantName(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
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
  System_String_o *v19; // x22
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EAE43 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, svtId, limitCount, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_1/*""*/, v16, v17, v18);
    byte_42EAE43 = 1;
  }
  entity = 0LL;
  v19 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          svtId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return v19;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                  this,
                                                                  svtId,
                                                                  limitCount,
                                                                  v22);
  if ( !entity )
LABEL_14:
    sub_B5D69C(Master_WarQuestSelectionMaster, v21);
  Name = ServantEntity__GetName((ServantEntity_o *)entity, (int32_t)Master_WarQuestSelectionMaster, 0, -1, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(Name, 0LL);
}


int32_t __fastcall ServantLimitImageMaster__GetServantImageLimitSealAfter(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v4; // w20
  int32_t ServantLimitCountSealAfter; // w0

  if ( limitCount >= 11 )
    v4 = limitCount;
  else
    v4 = limitCount + 1;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, v4, method);
  if ( ServantLimitCountSealAfter == v4 )
    return limitCount;
  else
    return ServantLimitCountSealAfter - (limitCount < 11);
}


int32_t __fastcall ServantLimitImageMaster__GetServantLimitCountSealAfter(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int32_t monitor_high; // w19
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
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x20
  __int64 v62; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v64; // x1
  __int64 v65; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v68; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v71; // x3
  System_Collections_Generic_IEnumerator_T__c *v72; // x8
  unsigned __int64 v73; // x10
  int32_t *v74; // x11
  __int64 v75; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v76; // x0
  __int64 v77; // x1
  __int64 v78; // x10
  System_Collections_Generic_IEnumerator_T__c *v79; // x8
  unsigned __int64 v80; // x10
  int32_t *v81; // x11
  __int64 v82; // x0
  ServantLimitImageMaster___c_c *v83; // x0
  struct ServantLimitImageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x21
  Il2CppObject *v86; // x22
  struct ServantLimitImageMaster___c_StaticFields *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  Il2CppObject *current; // x26
  int32_t klass_high; // w20
  int32_t v96; // w22
  int64_t monitor_low; // x21
  _BOOL8 v98; // x0
  __int64 v99; // x1
  int v101[2]; // [xsp+8h] [xbp-68h]
  int v102; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_T__o v103; // [xsp+18h] [xbp-58h] BYREF

  monitor_high = limitCount;
  if ( (byte_42EAE3F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      svtId,
      limitCount,
      method);
    sub_B5D5C4(&Method_System_Comparison_ServantLimitImageEntity___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Comparison_ServantLimitImageEntity__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CondType_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__get_Current__, v22, v23, v24);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantLimitImageEntity__get_Count__, v46, v47, v48);
    sub_B5D5C4(&System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo, v49, v50, v51);
    sub_B5D5C4(&ServantLimitImageEntity_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__, v55, v56, v57);
    sub_B5D5C4(&ServantLimitImageMaster___c_TypeInfo, v58, v59, v60);
    byte_42EAE3F = 1;
  }
  memset(&v103, 0, sizeof(v103));
  v102 = 0;
  v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v61,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v64);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v68 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v68;
        p_offset += 4;
        if ( v68 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v65);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v72 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v73 = 0LL;
      v74 = &v72->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v74 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v73;
        v74 += 4;
        if ( v73 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v75 = (__int64)&v72->vtable[*v74].method;
    }
    else
    {
LABEL_16:
      v75 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v71);
    }
    v76 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v75)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v75 + 8));
    if ( !v76 )
      goto LABEL_54;
    v78 = *(&ServantLimitImageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v76->klass->_2.bitflags2 + 1) < (unsigned int)v78
      || (ServantLimitImageEntity_c *)v76->klass->_2.typeHierarchy[v78 - 1] != ServantLimitImageEntity_TypeInfo )
    {
      sub_B5D990(v76);
LABEL_54:
      sub_B5D69C(v76, v77);
    }
    if ( v76->fields.missionTargetId == svtId && v76->fields.missionConditionDetailId == monitor_high )
    {
      if ( !v61 )
        sub_B5D69C(v76, ServantLimitImageEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v61,
        v76,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__);
    }
  }
  v101[0] = 77;
  v102 = 1;
  v79 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v80 = 0LL;
    v81 = &v79->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v81 - 1) != System_IDisposable_TypeInfo )
    {
      ++v80;
      v81 += 4;
      if ( v80 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v82 = (__int64)&v79->vtable[*v81].method;
  }
  else
  {
LABEL_29:
    v82 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v71);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v82)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v82 + 8));
  v102 = 0;
  if ( !v61 )
LABEL_57:
    sub_B5D69C(list, v62);
  if ( v61->fields._size >= 1 )
  {
    v83 = ServantLimitImageMaster___c_TypeInfo;
    if ( (BYTE3(ServantLimitImageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantLimitImageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitImageMaster___c_TypeInfo);
      v83 = ServantLimitImageMaster___c_TypeInfo;
    }
    static_fields = v83->static_fields;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v83->vtable._0_Equals.methodPtr) & 4) != 0 && !v83->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v83);
        static_fields = ServantLimitImageMaster___c_TypeInfo->static_fields;
      }
      v86 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantLimitImageEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v86,
        Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_ServantLimitImageEntity___ctor__);
      v87 = ServantLimitImageMaster___c_TypeInfo->static_fields;
      v87->__9__4_0 = (struct System_Comparison_ServantLimitImageEntity__o *)_9__4_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v87->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v61,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v103,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v61,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__);
    while ( 1 )
    {
      v98 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v103,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__);
      if ( !v98 )
        break;
      current = v103.fields.current;
      if ( !v103.fields.current )
        sub_B5D69C(v98, v99);
      v96 = (int32_t)v103.fields.current[2].klass;
      klass_high = HIDWORD(v103.fields.current[2].klass);
      monitor_low = SLODWORD(v103.fields.current[2].monitor);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsOpen(v96, klass_high, monitor_low, 0, 0LL) )
        monitor_high = HIDWORD(current[1].monitor);
    }
    v101[0] = 209;
    ++v102;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v103,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__);
    if ( v102 && v101[v102 - 1] == 209 )
      --v102;
  }
  return monitor_high;
}


System_String_o *__fastcall ServantLimitImageMaster__GetServantStatusExplanationText(
        ServantLimitImageMaster_o *this,
        System_String_o *key,
        int32_t svtId,
        const MethodInfo *method)
{
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  System_String_o *v10; // x21
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = svtId;
  if ( (byte_42EAE44 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)key, svtId, method);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v5, v6, v7);
    byte_42EAE44 = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v12, 0LL);
  v9 = System_String__Concat_44580072(key, (System_String_o *)StringLiteral_16096/*"_"*/, v8, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get(v9, 0LL);
  if ( System_String__op_Equality(v10, v9, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get(key, 0LL);
  }
  return v10;
}


bool __fastcall ServantLimitImageMaster__IsCommonReleaseMultiClear(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v25; // x1
  CommonReleaseMaster_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  _DWORD *v39; // x0
  __int64 v40; // x1
  _DWORD *v41; // x22
  __int64 v42; // x9
  bool IsOpen; // w20
  int v44; // w8
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  int v50; // [xsp+0h] [xbp-50h]

  if ( (byte_42EAE45 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ServantLimitImageEntity_TypeInfo, v21, v22, v23);
    byte_42EAE45 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_B5D69C(Master_WarQuestSelectionMaster, v25);
  v26 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v27);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v28);
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
      v38 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v34);
    }
    v39 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                      Enumerator,
                      *(_QWORD *)(v38 + 8));
    v41 = v39;
    if ( !v39 )
      goto LABEL_39;
    v42 = *(&ServantLimitImageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v39 + 300LL) < (unsigned int)v42
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v39 + 200LL) + 8 * v42 - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_B5D990(v39);
LABEL_39:
      sub_B5D69C(v39, v40);
    }
    if ( v39[8] == 113 )
    {
      if ( !v26 )
        sub_B5D69C(v39, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v26, questId, v39[9], 0LL) )
      {
        IsOpen = CommonReleaseMaster__IsOpen(v26, v41[9], 0LL, 0, 0LL);
        v44 = 96;
        goto LABEL_29;
      }
    }
  }
  IsOpen = 0;
  v44 = 94;
LABEL_29:
  v50 = v44;
  v45 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_33:
    v48 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v34);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  if ( v50 == 94 )
    return 0;
  return IsOpen;
}


bool __fastcall ServantLimitImageMaster__IsLimitCountSealQuest(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v25; // x1
  CommonReleaseMaster_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  _DWORD *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x9
  unsigned int v41; // w8
  bool v42; // w21
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  int v48; // [xsp+0h] [xbp-50h]

  if ( (byte_42EAE40 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ServantLimitImageEntity_TypeInfo, v21, v22, v23);
    byte_42EAE40 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_B5D69C(Master_WarQuestSelectionMaster, v25);
  v26 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v27);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v28);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v34 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v36 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_19:
      v37 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v28);
    }
    v38 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                      Enumerator,
                      *(_QWORD *)(v37 + 8));
    if ( !v38 )
      goto LABEL_43;
    v40 = *(&ServantLimitImageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v38 + 300LL) < (unsigned int)v40
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v38 + 200LL) + 8 * v40 - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_B5D990(v38);
LABEL_43:
      sub_B5D69C(v38, v39);
    }
    v41 = v38[8];
    if ( v41 <= 0x2E && ((1LL << v41) & 0x400002000002LL) != 0 )
    {
      if ( v38[9] == questId )
        goto LABEL_31;
    }
    else if ( v41 == 113 )
    {
      if ( !v26 )
        sub_B5D69C(v38, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v26, questId, v38[9], 0LL) )
      {
LABEL_31:
        v48 = 114;
        v42 = 1;
        goto LABEL_33;
      }
    }
  }
  v42 = 0;
  v48 = 112;
LABEL_33:
  v43 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v44 = 0LL;
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      ++v44;
      v45 += 4;
      if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_37:
    v46 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v28);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
  if ( v48 == 112 )
    return 0;
  return v42;
}


bool __fastcall ServantLimitImageMaster__IsServantLimitCountSeal(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, limitCount, method) != limitCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitImageMaster__TryGetEntity(
        ServantLimitImageMaster_o *this,
        ServantLimitImageEntity_o **entity,
        int32_t svtId,
        int32_t limitCount,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EAE3D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&limitCount);
    byte_42EAE3D = 1;
  }
  PK = ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&limitCount);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__);
}


void __fastcall ServantLimitImageMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantLimitImageMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D63 & 1) == 0 )
  {
    sub_B5D5C4(&ServantLimitImageMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5D63 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantLimitImageMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantLimitImageMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantLimitImageMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall ServantLimitImageMaster___c___ctor(ServantLimitImageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantLimitImageMaster___c___GetServantLimitCountSealAfter_b__4_0(
        ServantLimitImageMaster___c_o *this,
        ServantLimitImageEntity_o *x,
        ServantLimitImageEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_B5D69C(this, x);
  return y->fields.priority - x->fields.priority;
}