void __fastcall ServantCollectionMaster___ctor(ServantCollectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C71B & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string___ctor__);
    byte_438C71B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    313,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCollectionEntity_o *__fastcall ServantCollectionMaster__GetEntity(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438C719 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__GetEntity__);
    byte_438C719 = 1;
  }
  PK = ServantCollectionEntity__CreatePK(collectionNo, priority, *(const MethodInfo **)&priority);
  return (ServantCollectionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_21FBCE4 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__GetEntity__);
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

  if ( (byte_438C71E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_438C71E = 1;
  }
  entitya = 0LL;
  if ( entity )
  {
    v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
      sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v6 = **(_QWORD **)(v5 + 192);
    if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
      sub_B0F2C4(v6);
    v7 = **(DataManager_o ***)(v6 + 184);
    if ( !v7 )
      goto LABEL_18;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           v7,
                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
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
    v7 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v15, 0LL);
    if ( !v11 )
      goto LABEL_18;
    v7 = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                            v11,
                            &entitya,
                            (int32_t)v7,
                            (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      if ( entitya )
        return ServantCollectionMaster__GetOverrideDisplayType_27787520(this, entitya[1].fields.startType, v12);
LABEL_18:
      sub_B7769C(v7, entity);
    }
  }
  return -1;
}


int32_t __fastcall ServantCollectionMaster__GetOverrideDisplayType_27787520(
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
    sub_B7769C(SortedEntities, v4);
  v5 = *(_QWORD *)&SortedEntities->max_length;
  v6 = SortedEntities;
  if ( !v5 || (int)v5 < 1 )
    return -1;
  v7 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= (unsigned int)v5 )
    {
      v10 = sub_B776C8(SortedEntities);
      sub_B77668(v10, 0LL);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x0
  ServantCollectionEntity_c *v19; // x1
  __int64 v20; // x10
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  ServantCollectionMaster___c_c *v25; // x0
  struct ServantCollectionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x20
  Il2CppObject *v28; // x21
  struct ServantCollectionMaster___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_438C71F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_System_Comparison_ServantCollectionEntity___ctor__);
    sub_B775C4(&System_Comparison_ServantCollectionEntity__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCollectionEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCollectionEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCollectionEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCollectionEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCollectionEntity__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_ServantCollectionEntity__TypeInfo);
    sub_B775C4(&ServantCollectionEntity_TypeInfo);
    sub_B775C4(&Method_ServantCollectionMaster___c__GetSortedEntities_b__7_0__);
    sub_B775C4(&ServantCollectionMaster___c_TypeInfo);
    byte_438C71F = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantCollectionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v17 + 8));
    if ( v18 )
    {
      v19 = ServantCollectionEntity_TypeInfo;
      v20 = *(&ServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (ServantCollectionEntity_c *)v18->klass->_2.typeHierarchy[v20 - 1] != ServantCollectionEntity_TypeInfo )
      {
        v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B77990(v18);
LABEL_43:
        sub_B7769C(v18, v19);
      }
      if ( v18->fields.missionTargetId == collectionNo )
      {
        if ( !v5 )
          goto LABEL_43;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          v18,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantCollectionEntity__Add__);
      }
    }
  }
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_28:
    v24 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v24 + 8));
  if ( !v5 )
LABEL_44:
    sub_B7769C(list, v6);
  if ( v5->fields._size >= 1 )
  {
    v25 = ServantCollectionMaster___c_TypeInfo;
    if ( (BYTE3(ServantCollectionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCollectionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCollectionMaster___c_TypeInfo);
      v25 = ServantCollectionMaster___c_TypeInfo;
    }
    static_fields = v25->static_fields;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        static_fields = ServantCollectionMaster___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_ServantCollectionEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__7_0,
        v28,
        Method_ServantCollectionMaster___c__GetSortedEntities_b__7_0__,
        (const MethodInfo_2B42C0C *)Method_System_Comparison_ServantCollectionEntity___ctor__);
      v29 = ServantCollectionMaster___c_TypeInfo->static_fields;
      v29->__9__7_0 = (struct System_Comparison_ServantCollectionEntity__o *)_9__7_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v29->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
      (System_Comparison_T__o *)_9__7_0,
      (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_ServantCollectionEntity__Sort__);
  }
  return (ServantCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                            (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_ServantCollectionEntity__ToArray__);
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

  if ( (byte_438C71C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_438C71C = 1;
  }
  entitya = 0LL;
  if ( !entity )
    return 0;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_B0F2C4(v6);
  v7 = **(DataManager_o ***)(v6 + 184);
  if ( !v7 )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v7,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  v7 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v16, 0LL);
  if ( !v11 )
LABEL_18:
    sub_B7769C(v7, entity);
  v7 = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                          v11,
                          &entitya,
                          (int32_t)v7,
                          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)v7 & 1) == 0 )
    return 0;
  if ( !entitya )
    goto LABEL_18;
  return ServantCollectionMaster__IsNeedOverrideDisplayType_27786424(this, entitya[1].fields.startType, v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCollectionMaster__IsNeedOverrideDisplayType_27786424(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  ServantCollectionEntity_o *v16; // x0
  __int64 v17; // x9
  bool v18; // w20
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  int v24; // [xsp+0h] [xbp-40h]

  if ( (byte_438C71D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&ServantCollectionEntity_TypeInfo);
    byte_438C71D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_35:
    sub_B7769C(list, *(_QWORD *)&collectionNo);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (ServantCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                         Enumerator,
                                         *(_QWORD *)(v15 + 8));
    if ( v16 )
    {
      v17 = *(&ServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (ServantCollectionEntity_c *)v16->klass->_2.typeHierarchy[v17 - 1] != ServantCollectionEntity_TypeInfo )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B77990(v16);
        goto LABEL_35;
      }
      if ( v16->fields.collectionNo == collectionNo
        && ServantCollectionEntity__IsOpenCondition(v16, (const MethodInfo *)ServantCollectionEntity_TypeInfo) )
      {
        v24 = 72;
        v18 = 1;
        goto LABEL_25;
      }
    }
  }
  v18 = 0;
  v24 = 70;
LABEL_25:
  v19 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      ++v20;
      v21 += 4;
      if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v22 = (__int64)&v19->vtable[*v21].method;
  }
  else
  {
LABEL_29:
    v22 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  if ( v24 == 70 )
    return 0;
  return v18;
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

  if ( (byte_438C71A & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__TryGetEntity__);
    byte_438C71A = 1;
  }
  PK = ServantCollectionEntity__CreatePK(collectionNo, priority, *(const MethodInfo **)&collectionNo);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__TryGetEntity__);
}


void __fastcall ServantCollectionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantCollectionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_43887FD & 1) == 0 )
  {
    sub_B775C4(&ServantCollectionMaster___c_TypeInfo);
    byte_43887FD = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ServantCollectionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantCollectionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCollectionMaster___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, a);
  return b->fields.priority - a->fields.priority;
}