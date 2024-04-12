void __fastcall ServantCollectionMaster___ctor(ServantCollectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B121F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string___ctor__);
    byte_42B121F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    313,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCollectionEntity_o *__fastcall ServantCollectionMaster__GetEntity(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B121D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__GetEntity__);
    byte_42B121D = 1;
  }
  PK = ServantCollectionEntity__CreatePK(collectionNo, priority, *(const MethodInfo **)&priority);
  return (ServantCollectionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__GetEntity__);
}


int32_t __fastcall ServantCollectionMaster__GetOverrideDisplayType(
        ServantCollectionMaster_o *this,
        UserServantCollectionEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x21
  DataManager_o *v7; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  const MethodInfo *v12; // x2
  WarEntity_o *entitya; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_42B1222 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42B1222 = 1;
  }
  entitya = 0LL;
  if ( entity )
  {
    v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
      sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v6 = **(_QWORD **)(v5 + 192);
    if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
      sub_AEB684(v6);
    v7 = **(DataManager_o ***)(v6 + 184);
    if ( !v7 )
      goto LABEL_18;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           v7,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
    v10 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v15.fields.currentCryptoKey = v10;
    *(_QWORD *)&v15.fields.fakeValue = v9;
    v7 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15, 0LL);
    if ( !v11 )
      goto LABEL_18;
    v7 = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                            v11,
                            &entitya,
                            (int32_t)v7,
                            (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      if ( entitya )
        return ServantCollectionMaster__GetOverrideDisplayType_27183244(this, entitya[1].fields.startType, v12);
LABEL_18:
      sub_B52A5C(v7, entity);
    }
  }
  return -1;
}


int32_t __fastcall ServantCollectionMaster__GetOverrideDisplayType_27183244(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        const MethodInfo *method)
{
  ServantCollectionEntity_array *SortedEntities; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x8
  ServantCollectionEntity_array *v6; // x19
  __int64 v7; // x21
  ServantCollectionEntity_o *v8; // x20
  __int64 v10; // x0

  SortedEntities = ServantCollectionMaster__GetSortedEntities(this, collectionNo, method);
  if ( !SortedEntities )
LABEL_11:
    sub_B52A5C(SortedEntities, v4);
  v5 = *(_QWORD *)&SortedEntities->max_length;
  v6 = SortedEntities;
  if ( !v5 || (int)v5 < 1 )
    return -1;
  v7 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= (unsigned int)v5 )
    {
      v10 = sub_B52A88(SortedEntities);
      sub_B52A28(v10, 0LL);
    }
    v8 = v6->m_Items[v7];
    if ( !v8 )
      goto LABEL_11;
    SortedEntities = (ServantCollectionEntity_array *)ServantCollectionEntity__IsOpenCondition(v6->m_Items[v7], v4);
    if ( ((unsigned __int8)SortedEntities & 1) != 0 )
      return v8->fields.type;
    LODWORD(v5) = v6->max_length;
    if ( (int)++v7 >= (int)v5 )
      return -1;
  }
}


ServantCollectionEntity_array *__fastcall ServantCollectionMaster__GetSortedEntities(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  ServantCollectionEntity_c *v21; // x1
  __int64 v22; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  ServantCollectionMaster___c_c *v27; // x0
  struct ServantCollectionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x20
  Il2CppObject *v30; // x21
  struct ServantCollectionMaster___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42B1223 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Comparison_ServantCollectionEntity___ctor__);
    sub_B52984(&System_Comparison_ServantCollectionEntity__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCollectionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCollectionEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCollectionEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCollectionEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCollectionEntity__get_Count__);
    sub_B52984(&System_Collections_Generic_List_ServantCollectionEntity__TypeInfo);
    sub_B52984(&ServantCollectionEntity_TypeInfo);
    sub_B52984(&Method_ServantCollectionMaster___c__GetSortedEntities_b__7_0__);
    sub_B52984(&ServantCollectionMaster___c_TypeInfo);
    byte_42B1223 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantCollectionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
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
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    if ( v20 )
    {
      v21 = ServantCollectionEntity_TypeInfo;
      v22 = *(&ServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
        || (ServantCollectionEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != ServantCollectionEntity_TypeInfo )
      {
        v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v20);
LABEL_43:
        sub_B52A5C(v20, v21);
      }
      if ( v20->fields.missionTargetId == collectionNo )
      {
        if ( !v5 )
          goto LABEL_43;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          v20,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantCollectionEntity__Add__);
      }
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v26 + 8));
  if ( !v5 )
LABEL_44:
    sub_B52A5C(list, v6);
  if ( v5->fields._size >= 1 )
  {
    v27 = ServantCollectionMaster___c_TypeInfo;
    if ( (BYTE3(ServantCollectionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCollectionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCollectionMaster___c_TypeInfo);
      v27 = ServantCollectionMaster___c_TypeInfo;
    }
    static_fields = v27->static_fields;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        static_fields = ServantCollectionMaster___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantCollectionEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__7_0,
        v30,
        Method_ServantCollectionMaster___c__GetSortedEntities_b__7_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_ServantCollectionEntity___ctor__);
      v31 = ServantCollectionMaster___c_TypeInfo->static_fields;
      v31->__9__7_0 = (struct System_Comparison_ServantCollectionEntity__o *)_9__7_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v31->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
      (System_Comparison_T__o *)_9__7_0,
      (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantCollectionEntity__Sort__);
  }
  return (ServantCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                            (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantCollectionEntity__ToArray__);
}


bool __fastcall ServantCollectionMaster__IsNeedOverrideDisplayType(
        ServantCollectionMaster_o *this,
        UserServantCollectionEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x21
  DataManager_o *v7; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  const MethodInfo *v12; // x2
  WarEntity_o *entitya; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42B1220 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42B1220 = 1;
  }
  entitya = 0LL;
  if ( !entity )
    return 0;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AEB684(v6);
  v7 = **(DataManager_o ***)(v6 + 184);
  if ( !v7 )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v7,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  v7 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v16, 0LL);
  if ( !v11 )
LABEL_18:
    sub_B52A5C(v7, entity);
  v7 = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                          v11,
                          &entitya,
                          (int32_t)v7,
                          (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)v7 & 1) == 0 )
    return 0;
  if ( !entitya )
    goto LABEL_18;
  return ServantCollectionMaster__IsNeedOverrideDisplayType_27182148(this, entitya[1].fields.startType, v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCollectionMaster__IsNeedOverrideDisplayType_27182148(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  ServantCollectionEntity_o *v17; // x0
  __int64 v18; // x9
  bool v19; // w20
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  int v25; // [xsp+0h] [xbp-40h]

  if ( (byte_42B1221 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&ServantCollectionEntity_TypeInfo);
    byte_42B1221 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_35:
    sub_B52A5C(list, *(_QWORD *)&collectionNo);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v7);
    }
    v17 = (ServantCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                         Enumerator,
                                         *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      v18 = *(&ServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v18
        || (ServantCollectionEntity_c *)v17->klass->_2.typeHierarchy[v18 - 1] != ServantCollectionEntity_TypeInfo )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B52D50(v17);
        goto LABEL_35;
      }
      if ( v17->fields.collectionNo == collectionNo
        && ServantCollectionEntity__IsOpenCondition(v17, (const MethodInfo *)ServantCollectionEntity_TypeInfo) )
      {
        v25 = 72;
        v19 = 1;
        goto LABEL_25;
      }
    }
  }
  v19 = 0;
  v25 = 70;
LABEL_25:
  v20 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_29:
    v23 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v7);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  if ( v25 == 70 )
    return 0;
  return v19;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCollectionMaster__TryGetEntity(
        ServantCollectionMaster_o *this,
        ServantCollectionEntity_o **entity,
        int32_t collectionNo,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B121E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__TryGetEntity__);
    byte_42B121E = 1;
  }
  PK = ServantCollectionEntity__CreatePK(collectionNo, priority, *(const MethodInfo **)&collectionNo);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__TryGetEntity__);
}


void __fastcall ServantCollectionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantCollectionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD325 & 1) == 0 )
  {
    sub_B52984(&ServantCollectionMaster___c_TypeInfo);
    byte_42AD325 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantCollectionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantCollectionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCollectionMaster___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall ServantCollectionMaster___c___ctor(ServantCollectionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantCollectionMaster___c___GetSortedEntities_b__7_0(
        ServantCollectionMaster___c_o *this,
        ServantCollectionEntity_o *a,
        ServantCollectionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}