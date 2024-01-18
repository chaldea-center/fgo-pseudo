void __fastcall ServantLimitImageMaster___ctor(ServantLimitImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A026 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__, method);
    byte_418A026 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    351,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__);
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

  if ( (byte_418A024 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_418A024 = 1;
  }
  PK = ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&priority);
  return (ServantLimitImageEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitImageMaster__GetLimitCountSealQuestToSvtId(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  CommonReleaseMaster_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  _DWORD *v25; // x0
  __int64 v26; // x1
  _DWORD *v27; // x22
  __int64 v28; // x9
  unsigned int v29; // w8
  int32_t v30; // w20
  int v31; // w8
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  int v37; // [xsp+0h] [xbp-60h]

  if ( (byte_418A029 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&ServantLimitImageEntity_TypeInfo, v10);
    byte_418A029 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_B2C434(Master_WarQuestSelectionMaster, v12);
  v13 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_19:
      v24 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v25 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                      Enumerator,
                      *(_QWORD *)(v24 + 8));
    v27 = v25;
    if ( !v25 )
      goto LABEL_43;
    v28 = *(&ServantLimitImageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 300LL) < (unsigned int)v28
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * v28 - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_B2C728(v25);
LABEL_43:
      sub_B2C434(v25, v26);
    }
    v29 = v25[8];
    if ( v29 <= 0x2E && ((1LL << v29) & 0x400002000002LL) != 0 )
    {
      if ( v25[9] == questId )
        goto LABEL_31;
    }
    else if ( v29 == 113 )
    {
      if ( !v13 )
        sub_B2C434(v25, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v13, questId, v25[9], 0LL) )
      {
LABEL_31:
        v30 = v27[4];
        v31 = 124;
        goto LABEL_33;
      }
    }
  }
  v31 = 122;
  v30 = 0;
LABEL_33:
  v37 = v31;
  v32 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_37:
    v35 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  if ( v37 == 122 )
    return 0;
  return v30;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *LimitCountSealedServantName; // x19
  System_String_o *v10; // x0
  System_String_o *v11; // x20
  System_String_o *v12; // x21
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = svtId;
  if ( (byte_418A02A & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&StringLiteral_8387/*"LIMIT_COUNT_SEALED_MESSAGE_"*/, v7);
    sub_B2C35C(&StringLiteral_8386/*"LIMIT_COUNT_SEALED_MESSAGE"*/, v8);
    byte_418A02A = 1;
  }
  LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  this,
                                                  svtId,
                                                  limitCount,
                                                  method);
  v10 = System_Int32__ToString((int32_t)&v14, 0LL);
  v11 = System_String__Concat_44305532((System_String_o *)StringLiteral_8387/*"LIMIT_COUNT_SEALED_MESSAGE_"*/, v10, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get(v11, 0LL);
  if ( System_String__op_Equality(v12, v11, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8386/*"LIMIT_COUNT_SEALED_MESSAGE"*/, 0LL);
  }
  return System_String__Format(v12, LimitCountSealedServantName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitImageMaster__GetLimitCountSealedServantName(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x22
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A02B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_418A02B = 1;
  }
  entity = 0LL;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          svtId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return v11;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                  this,
                                                                  svtId,
                                                                  limitCount,
                                                                  v14);
  if ( !entity )
LABEL_14:
    sub_B2C434(Master_WarQuestSelectionMaster, v13);
  Name = ServantEntity__GetName((ServantEntity_o *)entity, (int32_t)Master_WarQuestSelectionMaster, 0, -1, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(Name, 0LL);
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitImageMaster__GetServantLimitCountSealAfter(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x20
  __int64 v26; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v28; // x1
  __int64 v29; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v35; // x3
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x10
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  ServantLimitImageMaster___c_c *v47; // x0
  struct ServantLimitImageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x21
  Il2CppObject *v50; // x22
  struct ServantLimitImageMaster___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  Il2CppObject *current; // x26
  int32_t klass_high; // w20
  int32_t v60; // w22
  int64_t monitor_low; // x21
  _BOOL8 v62; // x0
  __int64 v63; // x1
  int v65[2]; // [xsp+8h] [xbp-68h]
  int v66; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_418A027 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Comparison_ServantLimitImageEntity___ctor__, v7);
    sub_B2C35C(&System_Comparison_ServantLimitImageEntity__TypeInfo, v8);
    sub_B2C35C(&CondType_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__get_Current__, v12);
    sub_B2C35C(&System_IDisposable_TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantLimitImageEntity__get_Count__, v20);
    sub_B2C35C(&System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo, v21);
    sub_B2C35C(&ServantLimitImageEntity_TypeInfo, v22);
    sub_B2C35C(&Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__, v23);
    sub_B2C35C(&ServantLimitImageMaster___c_TypeInfo, v24);
    byte_418A027 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  v66 = 0;
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v28);
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v29);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v36 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v38 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v39 = (__int64)&v36->vtable[*v38].method;
    }
    else
    {
LABEL_16:
      v39 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v35);
    }
    v40 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v39 + 8));
    if ( !v40 )
      goto LABEL_54;
    v42 = *(&ServantLimitImageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v40->klass->_2.bitflags2 + 1) < (unsigned int)v42
      || (ServantLimitImageEntity_c *)v40->klass->_2.typeHierarchy[v42 - 1] != ServantLimitImageEntity_TypeInfo )
    {
      sub_B2C728(v40);
LABEL_54:
      sub_B2C434(v40, v41);
    }
    if ( v40->fields.missionTargetId == svtId && v40->fields.missionConditionDetailId == limitCount )
    {
      if ( !v25 )
        sub_B2C434(v40, ServantLimitImageEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v25,
        v40,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__);
    }
  }
  v65[0] = 77;
  v66 = 1;
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
        goto LABEL_29;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_29:
    v46 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v35);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v46 + 8));
  v66 = 0;
  if ( !v25 )
LABEL_57:
    sub_B2C434(list, v26);
  if ( v25->fields._size >= 1 )
  {
    v47 = ServantLimitImageMaster___c_TypeInfo;
    if ( (BYTE3(ServantLimitImageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantLimitImageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitImageMaster___c_TypeInfo);
      v47 = ServantLimitImageMaster___c_TypeInfo;
    }
    static_fields = v47->static_fields;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        static_fields = ServantLimitImageMaster___c_TypeInfo->static_fields;
      }
      v50 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantLimitImageEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v50,
        Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantLimitImageEntity___ctor__);
      v51 = ServantLimitImageMaster___c_TypeInfo->static_fields;
      v51->__9__4_0 = (struct System_Comparison_ServantLimitImageEntity__o *)_9__4_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v51->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v25,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v67,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v25,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__);
    while ( 1 )
    {
      v62 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v67,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__);
      if ( !v62 )
        break;
      current = v67.fields.current;
      if ( !v67.fields.current )
        sub_B2C434(v62, v63);
      v60 = (int32_t)v67.fields.current[2].klass;
      klass_high = HIDWORD(v67.fields.current[2].klass);
      monitor_low = SLODWORD(v67.fields.current[2].monitor);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsOpen(v60, klass_high, monitor_low, 0, 0LL) )
        limitCount = HIDWORD(current[1].monitor);
    }
    v65[0] = 209;
    ++v66;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v67,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__);
    if ( v66 && v65[v66 - 1] == 209 )
      --v66;
  }
  return limitCount;
}


System_String_o *__fastcall ServantLimitImageMaster__GetServantStatusExplanationText(
        ServantLimitImageMaster_o *this,
        System_String_o *key,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x0
  System_String_o *v7; // x20
  System_String_o *v8; // x21
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = svtId;
  if ( (byte_418A02C & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, key);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v5);
    byte_418A02C = 1;
  }
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  v7 = System_String__Concat_44307816(key, (System_String_o *)StringLiteral_15905/*"_"*/, v6, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get(v7, 0LL);
  if ( System_String__op_Equality(v8, v7, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get(key, 0LL);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitImageMaster__IsCommonReleaseMultiClear(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  CommonReleaseMaster_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  _DWORD *v26; // x0
  __int64 v27; // x1
  _DWORD *v28; // x22
  __int64 v29; // x9
  bool IsOpen; // w20
  int v31; // w8
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  int v37; // [xsp+0h] [xbp-50h]

  if ( (byte_418A02D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&ServantLimitImageEntity_TypeInfo, v10);
    byte_418A02D = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_B2C434(Master_WarQuestSelectionMaster, v12);
  v13 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_19:
      v25 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    v26 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                      Enumerator,
                      *(_QWORD *)(v25 + 8));
    v28 = v26;
    if ( !v26 )
      goto LABEL_39;
    v29 = *(&ServantLimitImageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 300LL) < (unsigned int)v29
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * v29 - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_B2C728(v26);
LABEL_39:
      sub_B2C434(v26, v27);
    }
    if ( v26[8] == 113 )
    {
      if ( !v13 )
        sub_B2C434(v26, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v13, questId, v26[9], 0LL) )
      {
        IsOpen = CommonReleaseMaster__IsOpen(v13, v28[9], 0LL, 0, 0LL);
        v31 = 96;
        goto LABEL_29;
      }
    }
  }
  IsOpen = 0;
  v31 = 94;
LABEL_29:
  v37 = v31;
  v32 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_33:
    v35 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  if ( v37 == 94 )
    return 0;
  return IsOpen;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitImageMaster__IsLimitCountSealQuest(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  CommonReleaseMaster_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  _DWORD *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x9
  unsigned int v28; // w8
  bool v29; // w21
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  int v35; // [xsp+0h] [xbp-50h]

  if ( (byte_418A028 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&ServantLimitImageEntity_TypeInfo, v10);
    byte_418A028 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_B2C434(Master_WarQuestSelectionMaster, v12);
  v13 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_19:
      v24 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v25 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                      Enumerator,
                      *(_QWORD *)(v24 + 8));
    if ( !v25 )
      goto LABEL_43;
    v27 = *(&ServantLimitImageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 300LL) < (unsigned int)v27
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * v27 - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_B2C728(v25);
LABEL_43:
      sub_B2C434(v25, v26);
    }
    v28 = v25[8];
    if ( v28 <= 0x2E && ((1LL << v28) & 0x400002000002LL) != 0 )
    {
      if ( v25[9] == questId )
        goto LABEL_31;
    }
    else if ( v28 == 113 )
    {
      if ( !v13 )
        sub_B2C434(v25, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v13, questId, v25[9], 0LL) )
      {
LABEL_31:
        v35 = 114;
        v29 = 1;
        goto LABEL_33;
      }
    }
  }
  v29 = 0;
  v35 = 112;
LABEL_33:
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
        goto LABEL_37;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_37:
    v33 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  if ( v35 == 112 )
    return 0;
  return v29;
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

  if ( (byte_418A025 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__, entity);
    byte_418A025 = 1;
  }
  PK = ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&limitCount);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__);
}


void __fastcall ServantLimitImageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantLimitImageMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41853F1 & 1) == 0 )
  {
    sub_B2C35C(&ServantLimitImageMaster___c_TypeInfo, v1);
    byte_41853F1 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantLimitImageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantLimitImageMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantLimitImageMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, x);
  return y->fields.priority - x->fields.priority;
}