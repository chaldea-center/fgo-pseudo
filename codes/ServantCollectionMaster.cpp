void __fastcall ServantCollectionMaster___ctor(ServantCollectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189E98 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string___ctor__, method);
    byte_4189E98 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    312,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCollectionEntity_o *__fastcall ServantCollectionMaster__GetEntity(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4189E96 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__GetEntity__,
      *(_QWORD *)&collectionNo);
    byte_4189E96 = 1;
  }
  PK = ServantCollectionEntity__CreatePK(collectionNo, priority, *(const MethodInfo **)&priority);
  return (ServantCollectionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__GetEntity__);
}


int32_t __fastcall ServantCollectionMaster__GetOverrideDisplayType(
        ServantCollectionMaster_o *this,
        UserServantCollectionEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x21
  DataManager_o *v10; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x20
  const MethodInfo *v15; // x2
  WarEntity_o *entitya; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4189E9B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, entity);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_4189E9B = 1;
  }
  entitya = 0LL;
  if ( entity )
  {
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v9 = **(_QWORD **)(v8 + 192);
    if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
      sub_AC505C(v9);
    v10 = **(DataManager_o ***)(v9 + 184);
    if ( !v10 )
      goto LABEL_18;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           v10,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    v13 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v18.fields.currentCryptoKey = v13;
    *(_QWORD *)&v18.fields.fakeValue = v12;
    v10 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL);
    if ( !v14 )
      goto LABEL_18;
    v10 = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                             v14,
                             &entitya,
                             (int32_t)v10,
                             (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
      if ( entitya )
        return ServantCollectionMaster__GetOverrideDisplayType_29196388(this, entitya[1].fields.startType, v15);
LABEL_18:
      sub_B2C434(v10, entity);
    }
  }
  return -1;
}


int32_t __fastcall ServantCollectionMaster__GetOverrideDisplayType_29196388(
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
    sub_B2C434(SortedEntities, v4);
  v5 = *(_QWORD *)&SortedEntities->max_length;
  v6 = SortedEntities;
  if ( !v5 || (int)v5 < 1 )
    return -1;
  v7 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= (unsigned int)v5 )
    {
      v10 = sub_B2C460(SortedEntities);
      sub_B2C400(v10, 0LL);
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


// local variable allocation has failed, the output may be wrong!
ServantCollectionEntity_array *__fastcall ServantCollectionMaster__GetSortedEntities(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v22; // x1
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x3
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x0
  ServantCollectionEntity_c *v35; // x1
  __int64 v36; // x10
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  ServantCollectionMaster___c_c *v41; // x0
  struct ServantCollectionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x20
  Il2CppObject *v44; // x21
  struct ServantCollectionMaster___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_4189E9C & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&collectionNo);
    sub_B2C35C(&Method_System_Comparison_ServantCollectionEntity___ctor__, v5);
    sub_B2C35C(&System_Comparison_ServantCollectionEntity__TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCollectionEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCollectionEntity__Sort__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCollectionEntity__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCollectionEntity___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCollectionEntity__get_Count__, v14);
    sub_B2C35C(&System_Collections_Generic_List_ServantCollectionEntity__TypeInfo, v15);
    sub_B2C35C(&ServantCollectionEntity_TypeInfo, v16);
    sub_B2C35C(&Method_ServantCollectionMaster___c__GetSortedEntities_b__7_0__, v17);
    sub_B2C35C(&ServantCollectionMaster___c_TypeInfo, v18);
    byte_4189E9C = 1;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCollectionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_16:
      v33 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v29);
    }
    v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v33 + 8));
    if ( v34 )
    {
      v35 = ServantCollectionEntity_TypeInfo;
      v36 = *(&ServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v34->klass->_2.bitflags2 + 1) < (unsigned int)v36
        || (ServantCollectionEntity_c *)v34->klass->_2.typeHierarchy[v36 - 1] != ServantCollectionEntity_TypeInfo )
      {
        sub_B2C728(v34);
LABEL_43:
        sub_B2C434(v34, v35);
      }
      if ( v34->fields.missionTargetId == collectionNo )
      {
        if ( !v19 )
          goto LABEL_43;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v19,
          v34,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCollectionEntity__Add__);
      }
    }
  }
  v37 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_28:
    v40 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v29);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v40 + 8));
  if ( !v19 )
LABEL_44:
    sub_B2C434(list, v20);
  if ( v19->fields._size >= 1 )
  {
    v41 = ServantCollectionMaster___c_TypeInfo;
    if ( (BYTE3(ServantCollectionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCollectionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCollectionMaster___c_TypeInfo);
      v41 = ServantCollectionMaster___c_TypeInfo;
    }
    static_fields = v41->static_fields;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        static_fields = ServantCollectionMaster___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantCollectionEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__7_0,
        v44,
        Method_ServantCollectionMaster___c__GetSortedEntities_b__7_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantCollectionEntity___ctor__);
      v45 = ServantCollectionMaster___c_TypeInfo->static_fields;
      v45->__9__7_0 = (struct System_Comparison_ServantCollectionEntity__o *)_9__7_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v45->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v19,
      (System_Comparison_T__o *)_9__7_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantCollectionEntity__Sort__);
  }
  return (ServantCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantCollectionEntity__ToArray__);
}


bool __fastcall ServantCollectionMaster__IsNeedOverrideDisplayType(
        ServantCollectionMaster_o *this,
        UserServantCollectionEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x21
  DataManager_o *v10; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x20
  const MethodInfo *v15; // x2
  WarEntity_o *entitya; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4189E99 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, entity);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_4189E99 = 1;
  }
  entitya = 0LL;
  if ( !entity )
    return 0;
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AC505C(v9);
  v10 = **(DataManager_o ***)(v9 + 184);
  if ( !v10 )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v10,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v13;
  *(_QWORD *)&v19.fields.fakeValue = v12;
  v10 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
  if ( !v14 )
LABEL_18:
    sub_B2C434(v10, entity);
  v10 = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           v14,
                           &entitya,
                           (int32_t)v10,
                           (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)v10 & 1) == 0 )
    return 0;
  if ( !entitya )
    goto LABEL_18;
  return ServantCollectionMaster__IsNeedOverrideDisplayType_29195292(this, entitya[1].fields.startType, v15);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCollectionMaster__IsNeedOverrideDisplayType_29195292(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  ServantCollectionEntity_o *v21; // x0
  __int64 v22; // x9
  bool v23; // w20
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  int v29; // [xsp+0h] [xbp-40h]

  if ( (byte_4189E9A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&collectionNo);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&ServantCollectionEntity_TypeInfo, v8);
    byte_4189E9A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_35:
    sub_B2C434(list, *(_QWORD *)&collectionNo);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v10);
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
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v21 = (ServantCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                         Enumerator,
                                         *(_QWORD *)(v20 + 8));
    if ( v21 )
    {
      v22 = *(&ServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v22
        || (ServantCollectionEntity_c *)v21->klass->_2.typeHierarchy[v22 - 1] != ServantCollectionEntity_TypeInfo )
      {
        sub_B2C728(v21);
        goto LABEL_35;
      }
      if ( v21->fields.collectionNo == collectionNo
        && ServantCollectionEntity__IsOpenCondition(v21, (const MethodInfo *)ServantCollectionEntity_TypeInfo) )
      {
        v29 = 72;
        v23 = 1;
        goto LABEL_25;
      }
    }
  }
  v23 = 0;
  v29 = 70;
LABEL_25:
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
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_29:
    v27 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  if ( v29 == 70 )
    return 0;
  return v23;
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

  if ( (byte_4189E97 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__TryGetEntity__, entity);
    byte_4189E97 = 1;
  }
  PK = ServantCollectionEntity__CreatePK(collectionNo, priority, *(const MethodInfo **)&collectionNo);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__TryGetEntity__);
}


void __fastcall ServantCollectionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantCollectionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41853CD & 1) == 0 )
  {
    sub_B2C35C(&ServantCollectionMaster___c_TypeInfo, v1);
    byte_41853CD = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantCollectionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantCollectionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCollectionMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}