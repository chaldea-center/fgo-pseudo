void __fastcall ServantLimitImageMaster___ctor(ServantLimitImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B24E1 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__);
    byte_42B24E1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    352,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__);
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

  if ( (byte_42B24DF & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__);
    byte_42B24DF = 1;
  }
  PK = ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&priority);
  return (ServantLimitImageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__);
}


int32_t __fastcall ServantLimitImageMaster__GetLimitCountSealQuestToSvtId(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  CommonReleaseMaster_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  _DWORD *v19; // x0
  __int64 v20; // x1
  _DWORD *v21; // x22
  __int64 v22; // x9
  unsigned int v23; // w8
  int32_t v24; // w20
  int v25; // w8
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  int v31; // [xsp+0h] [xbp-60h]

  if ( (byte_42B24E4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&ServantLimitImageEntity_TypeInfo);
    byte_42B24E4 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_B52A5C(Master_WarQuestSelectionMaster, v6);
  v7 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_19:
      v18 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v9);
    }
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      Enumerator,
                      *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      goto LABEL_43;
    v22 = *(&ServantLimitImageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 300LL) < (unsigned int)v22
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * v22 - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_B52D50(v19);
LABEL_43:
      sub_B52A5C(v19, v20);
    }
    v23 = v19[8];
    if ( v23 <= 0x2E && ((1LL << v23) & 0x400002000002LL) != 0 )
    {
      if ( v19[9] == questId )
        goto LABEL_31;
    }
    else if ( v23 == 113 )
    {
      if ( !v7 )
        sub_B52A5C(v19, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v7, questId, v19[9], 0LL) )
      {
LABEL_31:
        v24 = v21[4];
        v25 = 124;
        goto LABEL_33;
      }
    }
  }
  v25 = 122;
  v24 = 0;
LABEL_33:
  v31 = v25;
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_37:
    v29 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v9);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  if ( v31 == 122 )
    return 0;
  return v24;
}


System_String_o *__fastcall ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *LimitCountSealedServantName; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  System_String_o *v10; // x21
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = svtId;
  if ( (byte_42B24E5 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_8434/*"LIMIT_COUNT_SEALED_MESSAGE_"*/);
    sub_B52984(&StringLiteral_8433/*"LIMIT_COUNT_SEALED_MESSAGE"*/);
    byte_42B24E5 = 1;
  }
  LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  this,
                                                  svtId,
                                                  limitCount,
                                                  method);
  v8 = System_Int32__ToString((int32_t)&v12, 0LL);
  v9 = System_String__Concat_44568316((System_String_o *)StringLiteral_8434/*"LIMIT_COUNT_SEALED_MESSAGE_"*/, v8, 0LL);
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
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8433/*"LIMIT_COUNT_SEALED_MESSAGE"*/, 0LL);
  }
  return System_String__Format(v10, LimitCountSealedServantName, 0LL);
}


System_String_o *__fastcall ServantLimitImageMaster__GetLimitCountSealedServantName(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B24E6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B24E6 = 1;
  }
  entity = 0LL;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          svtId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return v7;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                  this,
                                                                  svtId,
                                                                  limitCount,
                                                                  v10);
  if ( !entity )
LABEL_14:
    sub_B52A5C(Master_WarQuestSelectionMaster, v9);
  Name = ServantEntity__GetName((ServantEntity_o *)entity, (int32_t)Master_WarQuestSelectionMaster, 0, -1, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44824884(Name, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x10
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  ServantLimitImageMaster___c_c *v29; // x0
  struct ServantLimitImageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x21
  Il2CppObject *v32; // x22
  struct ServantLimitImageMaster___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  Il2CppObject *current; // x26
  int32_t klass_high; // w20
  int32_t v42; // w22
  int64_t monitor_low; // x21
  _BOOL8 v44; // x0
  __int64 v45; // x1
  int v47[2]; // [xsp+8h] [xbp-68h]
  int v48; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42B24E2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Comparison_ServantLimitImageEntity___ctor__);
    sub_B52984(&System_Comparison_ServantLimitImageEntity__TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__get_Current__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantLimitImageEntity__get_Count__);
    sub_B52984(&System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo);
    sub_B52984(&ServantLimitImageEntity_TypeInfo);
    sub_B52984(&Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__);
    sub_B52984(&ServantLimitImageMaster___c_TypeInfo);
    byte_42B24E2 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  v48 = 0;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v21 + 8));
    if ( !v22 )
      goto LABEL_54;
    v24 = *(&ServantLimitImageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (ServantLimitImageEntity_c *)v22->klass->_2.typeHierarchy[v24 - 1] != ServantLimitImageEntity_TypeInfo )
    {
      sub_B52D50(v22);
LABEL_54:
      sub_B52A5C(v22, v23);
    }
    if ( v22->fields.missionTargetId == svtId && v22->fields.missionConditionDetailId == limitCount )
    {
      if ( !v7 )
        sub_B52A5C(v22, ServantLimitImageEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        v22,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__);
    }
  }
  v47[0] = 77;
  v48 = 1;
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_29:
    v28 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v28 + 8));
  v48 = 0;
  if ( !v7 )
LABEL_57:
    sub_B52A5C(list, v8);
  if ( v7->fields._size >= 1 )
  {
    v29 = ServantLimitImageMaster___c_TypeInfo;
    if ( (BYTE3(ServantLimitImageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantLimitImageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitImageMaster___c_TypeInfo);
      v29 = ServantLimitImageMaster___c_TypeInfo;
    }
    static_fields = v29->static_fields;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        static_fields = ServantLimitImageMaster___c_TypeInfo->static_fields;
      }
      v32 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantLimitImageEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v32,
        Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_ServantLimitImageEntity___ctor__);
      v33 = ServantLimitImageMaster___c_TypeInfo->static_fields;
      v33->__9__4_0 = (struct System_Comparison_ServantLimitImageEntity__o *)_9__4_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v33->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v7,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v49,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v7,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__);
    while ( 1 )
    {
      v44 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v49,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__);
      if ( !v44 )
        break;
      current = v49.fields.current;
      if ( !v49.fields.current )
        sub_B52A5C(v44, v45);
      v42 = (int32_t)v49.fields.current[2].klass;
      klass_high = HIDWORD(v49.fields.current[2].klass);
      monitor_low = SLODWORD(v49.fields.current[2].monitor);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsOpen(v42, klass_high, monitor_low, 0, 0LL) )
        limitCount = HIDWORD(current[1].monitor);
    }
    v47[0] = 209;
    ++v48;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v49,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__);
    if ( v48 && v47[v48 - 1] == 209 )
      --v48;
  }
  return limitCount;
}


System_String_o *__fastcall ServantLimitImageMaster__GetServantStatusExplanationText(
        ServantLimitImageMaster_o *this,
        System_String_o *key,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  System_String_o *v6; // x20
  System_String_o *v7; // x21
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = svtId;
  if ( (byte_42B24E7 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_16011/*"_"*/);
    byte_42B24E7 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_String__Concat_44570600(key, (System_String_o *)StringLiteral_16011/*"_"*/, v5, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get(v6, 0LL);
  if ( System_String__op_Equality(v7, v6, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get(key, 0LL);
  }
  return v7;
}


bool __fastcall ServantLimitImageMaster__IsCommonReleaseMultiClear(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  CommonReleaseMaster_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  _DWORD *v20; // x0
  __int64 v21; // x1
  _DWORD *v22; // x22
  __int64 v23; // x9
  bool IsOpen; // w20
  int v25; // w8
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  int v31; // [xsp+0h] [xbp-50h]

  if ( (byte_42B24E8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&ServantLimitImageEntity_TypeInfo);
    byte_42B24E8 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_B52A5C(Master_WarQuestSelectionMaster, v6);
  v7 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
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
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                      Enumerator,
                      *(_QWORD *)(v19 + 8));
    v22 = v20;
    if ( !v20 )
      goto LABEL_39;
    v23 = *(&ServantLimitImageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 300LL) < (unsigned int)v23
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * v23 - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_B52D50(v20);
LABEL_39:
      sub_B52A5C(v20, v21);
    }
    if ( v20[8] == 113 )
    {
      if ( !v7 )
        sub_B52A5C(v20, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v7, questId, v20[9], 0LL) )
      {
        IsOpen = CommonReleaseMaster__IsOpen(v7, v22[9], 0LL, 0, 0LL);
        v25 = 96;
        goto LABEL_29;
      }
    }
  }
  IsOpen = 0;
  v25 = 94;
LABEL_29:
  v31 = v25;
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_33:
    v29 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  if ( v31 == 94 )
    return 0;
  return IsOpen;
}


bool __fastcall ServantLimitImageMaster__IsLimitCountSealQuest(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  CommonReleaseMaster_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  _DWORD *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x9
  unsigned int v22; // w8
  bool v23; // w21
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  int v29; // [xsp+0h] [xbp-50h]

  if ( (byte_42B24E3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&ServantLimitImageEntity_TypeInfo);
    byte_42B24E3 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_B52A5C(Master_WarQuestSelectionMaster, v6);
  v7 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_19:
      v18 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v9);
    }
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      Enumerator,
                      *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_43;
    v21 = *(&ServantLimitImageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 300LL) < (unsigned int)v21
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * v21 - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_B52D50(v19);
LABEL_43:
      sub_B52A5C(v19, v20);
    }
    v22 = v19[8];
    if ( v22 <= 0x2E && ((1LL << v22) & 0x400002000002LL) != 0 )
    {
      if ( v19[9] == questId )
        goto LABEL_31;
    }
    else if ( v22 == 113 )
    {
      if ( !v7 )
        sub_B52A5C(v19, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v7, questId, v19[9], 0LL) )
      {
LABEL_31:
        v29 = 114;
        v23 = 1;
        goto LABEL_33;
      }
    }
  }
  v23 = 0;
  v29 = 112;
LABEL_33:
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_37:
    v27 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v9);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  if ( v29 == 112 )
    return 0;
  return v23;
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

  if ( (byte_42B24E0 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__);
    byte_42B24E0 = 1;
  }
  PK = ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&limitCount);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__);
}


void __fastcall ServantLimitImageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantLimitImageMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD34B & 1) == 0 )
  {
    sub_B52984(&ServantLimitImageMaster___c_TypeInfo);
    byte_42AD34B = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantLimitImageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantLimitImageMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantLimitImageMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, x);
  return y->fields.priority - x->fields.priority;
}