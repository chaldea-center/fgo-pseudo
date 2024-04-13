void __fastcall ServantCollectionMaster___ctor(ServantCollectionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9CAC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E9CAC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    313,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCollectionEntity_o *__fastcall ServantCollectionMaster__GetEntity(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E9CAA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__GetEntity__,
      collectionNo,
      priority,
      method);
    byte_42E9CAA = 1;
  }
  PK = ServantCollectionEntity__CreatePK(collectionNo, priority, *(const MethodInfo **)&priority);
  return (ServantCollectionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__GetEntity__);
}


int32_t __fastcall ServantCollectionMaster__GetOverrideDisplayType(
        ServantCollectionMaster_o *this,
        UserServantCollectionEntity_o *entity,
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
  __int64 v15; // x21
  __int64 v16; // x21
  DataManager_o *v17; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v19; // x21
  __int64 v20; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x20
  const MethodInfo *v22; // x2
  WarEntity_o *entitya; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42E9CAF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12, v13, v14);
    byte_42E9CAF = 1;
  }
  entitya = 0LL;
  if ( entity )
  {
    v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v16 = **(_QWORD **)(v15 + 192);
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_AF52C4(v16);
    v17 = **(DataManager_o ***)(v16 + 184);
    if ( !v17 )
      goto LABEL_18;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           v17,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    v20 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v25.fields.currentCryptoKey = v20;
    *(_QWORD *)&v25.fields.fakeValue = v19;
    v17 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25, 0LL);
    if ( !v21 )
      goto LABEL_18;
    v17 = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                             v21,
                             &entitya,
                             (int32_t)v17,
                             (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)v17 & 1) != 0 )
    {
      if ( entitya )
        return ServantCollectionMaster__GetOverrideDisplayType_27496032(this, entitya[1].fields.startType, v22);
LABEL_18:
      sub_B5D69C(v17, entity);
    }
  }
  return -1;
}


int32_t __fastcall ServantCollectionMaster__GetOverrideDisplayType_27496032(
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
    sub_B5D69C(SortedEntities, v4);
  v5 = *(_QWORD *)&SortedEntities->max_length;
  v6 = SortedEntities;
  if ( !v5 || (int)v5 < 1 )
    return -1;
  v7 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= (unsigned int)v5 )
    {
      v10 = sub_B5D6C8(SortedEntities);
      sub_B5D668(v10, 0LL);
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x19
  __int64 v49; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v51; // x1
  __int64 v52; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v55; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v58; // x3
  System_Collections_Generic_IEnumerator_T__c *v59; // x8
  unsigned __int64 v60; // x10
  int32_t *v61; // x11
  __int64 v62; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v63; // x0
  ServantCollectionEntity_c *v64; // x1
  __int64 v65; // x10
  System_Collections_Generic_IEnumerator_T__c *v66; // x8
  unsigned __int64 v67; // x10
  int32_t *v68; // x11
  __int64 v69; // x0
  ServantCollectionMaster___c_c *v70; // x0
  struct ServantCollectionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x20
  Il2CppObject *v73; // x21
  struct ServantCollectionMaster___c_StaticFields *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7

  if ( (byte_42E9CB0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      collectionNo,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Comparison_ServantCollectionEntity___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Comparison_ServantCollectionEntity__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCollectionEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCollectionEntity__Sort__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCollectionEntity__ToArray__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCollectionEntity___ctor__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCollectionEntity__get_Count__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCollectionEntity__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&ServantCollectionEntity_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_ServantCollectionMaster___c__GetSortedEntities_b__7_0__, v42, v43, v44);
    sub_B5D5C4(&ServantCollectionMaster___c_TypeInfo, v45, v46, v47);
    byte_42E9CB0 = 1;
  }
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCollectionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v51);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v55 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v55;
        p_offset += 4;
        if ( v55 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v52);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v59 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v60 = 0LL;
      v61 = &v59->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v61 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v60;
        v61 += 4;
        if ( v60 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v62 = (__int64)&v59->vtable[*v61].method;
    }
    else
    {
LABEL_16:
      v62 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v58);
    }
    v63 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v62)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v62 + 8));
    if ( v63 )
    {
      v64 = ServantCollectionEntity_TypeInfo;
      v65 = *(&ServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v63->klass->_2.bitflags2 + 1) < (unsigned int)v65
        || (ServantCollectionEntity_c *)v63->klass->_2.typeHierarchy[v65 - 1] != ServantCollectionEntity_TypeInfo )
      {
        v63 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v63);
LABEL_43:
        sub_B5D69C(v63, v64);
      }
      if ( v63->fields.missionTargetId == collectionNo )
      {
        if ( !v48 )
          goto LABEL_43;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v48,
          v63,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCollectionEntity__Add__);
      }
    }
  }
  v66 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v67 = 0LL;
    v68 = &v66->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      ++v67;
      v68 += 4;
      if ( v67 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v69 = (__int64)&v66->vtable[*v68].method;
  }
  else
  {
LABEL_28:
    v69 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v58);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v69)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v69 + 8));
  if ( !v48 )
LABEL_44:
    sub_B5D69C(list, v49);
  if ( v48->fields._size >= 1 )
  {
    v70 = ServantCollectionMaster___c_TypeInfo;
    if ( (BYTE3(ServantCollectionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCollectionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCollectionMaster___c_TypeInfo);
      v70 = ServantCollectionMaster___c_TypeInfo;
    }
    static_fields = v70->static_fields;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v70->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70);
        static_fields = ServantCollectionMaster___c_TypeInfo->static_fields;
      }
      v73 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantCollectionEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__7_0,
        v73,
        Method_ServantCollectionMaster___c__GetSortedEntities_b__7_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_ServantCollectionEntity___ctor__);
      v74 = ServantCollectionMaster___c_TypeInfo->static_fields;
      v74->__9__7_0 = (struct System_Comparison_ServantCollectionEntity__o *)_9__7_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v74->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v48,
      (System_Comparison_T__o *)_9__7_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantCollectionEntity__Sort__);
  }
  return (ServantCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v48,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantCollectionEntity__ToArray__);
}


bool __fastcall ServantCollectionMaster__IsNeedOverrideDisplayType(
        ServantCollectionMaster_o *this,
        UserServantCollectionEntity_o *entity,
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
  __int64 v15; // x21
  __int64 v16; // x21
  DataManager_o *v17; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v19; // x21
  __int64 v20; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x20
  const MethodInfo *v22; // x2
  WarEntity_o *entitya; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_42E9CAD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12, v13, v14);
    byte_42E9CAD = 1;
  }
  entitya = 0LL;
  if ( !entity )
    return 0;
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v16 = **(_QWORD **)(v15 + 192);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AF52C4(v16);
  v17 = **(DataManager_o ***)(v16 + 184);
  if ( !v17 )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v17,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v20;
  *(_QWORD *)&v26.fields.fakeValue = v19;
  v17 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v26, 0LL);
  if ( !v21 )
LABEL_18:
    sub_B5D69C(v17, entity);
  v17 = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           v21,
                           &entitya,
                           (int32_t)v17,
                           (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)v17 & 1) == 0 )
    return 0;
  if ( !entitya )
    goto LABEL_18;
  return ServantCollectionMaster__IsNeedOverrideDisplayType_27494936(this, entitya[1].fields.startType, v22);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCollectionMaster__IsNeedOverrideDisplayType_27494936(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  ServantCollectionEntity_o *v30; // x0
  __int64 v31; // x9
  bool v32; // w20
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  int v38; // [xsp+0h] [xbp-40h]

  if ( (byte_42E9CAE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      collectionNo,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantCollectionEntity_TypeInfo, v15, v16, v17);
    byte_42E9CAE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_35:
    sub_B5D69C(list, *(_QWORD *)&collectionNo);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
    }
    v30 = (ServantCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                         Enumerator,
                                         *(_QWORD *)(v29 + 8));
    if ( v30 )
    {
      v31 = *(&ServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (ServantCollectionEntity_c *)v30->klass->_2.typeHierarchy[v31 - 1] != ServantCollectionEntity_TypeInfo )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B5D990(v30);
        goto LABEL_35;
      }
      if ( v30->fields.collectionNo == collectionNo
        && ServantCollectionEntity__IsOpenCondition(v30, (const MethodInfo *)ServantCollectionEntity_TypeInfo) )
      {
        v38 = 72;
        v32 = 1;
        goto LABEL_25;
      }
    }
  }
  v32 = 0;
  v38 = 70;
LABEL_25:
  v33 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_29:
    v36 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  if ( v38 == 70 )
    return 0;
  return v32;
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

  if ( (byte_42E9CAB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__TryGetEntity__,
      (_DWORD)entity,
      collectionNo,
      *(_QWORD *)&priority);
    byte_42E9CAB = 1;
  }
  PK = ServantCollectionEntity__CreatePK(collectionNo, priority, *(const MethodInfo **)&collectionNo);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__TryGetEntity__);
}


void __fastcall ServantCollectionMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantCollectionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D3D & 1) == 0 )
  {
    sub_B5D5C4(&ServantCollectionMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5D3D = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantCollectionMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantCollectionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCollectionMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}