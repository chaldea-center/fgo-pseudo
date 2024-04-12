void __fastcall ViewWaveEnemyMaster___ctor(ViewWaveEnemyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B5E95 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string___ctor__);
    byte_42B5E95 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    459,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ViewWaveEnemyEntity_o *__fastcall ViewWaveEnemyMaster__GetEntity(
        ViewWaveEnemyMaster_o *this,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B5E93 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__GetEntity__);
    sub_B52984(&ViewWaveEnemyEntity_TypeInfo);
    byte_42B5E93 = 1;
  }
  if ( (BYTE3(ViewWaveEnemyEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo);
  }
  PK = ViewWaveEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&enemyId);
  return (ViewWaveEnemyEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23E2728 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__GetEntity__);
}


ViewWaveEnemyEntity_array *__fastcall ViewWaveEnemyMaster__GetEntityListFromQuestId(
        ViewWaveEnemyMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *EnemyInfoDispNpcSvtIdList; // x22
  clsQuestCheck_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  int32_t v8; // w19
  bool v9; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x3
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x23
  ViewWaveEnemyEntity_c *v26; // x1
  __int64 v27; // x9
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B5E96 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&ViewWaveEnemyEntity_TypeInfo);
    byte_42B5E96 = 1;
  }
  entity = 0LL;
  EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B5299C(int___TypeInfo, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Master_WarQuestSelectionMaster = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  v8 = clsQuestCheck__mfGetQuestPhaseByQuestID(Master_WarQuestSelectionMaster, questId, 0LL);
  Master_WarQuestSelectionMaster = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  v9 = clsQuestCheck__IsQuestClear(Master_WarQuestSelectionMaster, questId, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  if ( QuestPhaseMaster__TryGetEntity(
         (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
         &entity,
         questId,
         v8 + !v9,
         0LL) )
  {
    Master_WarQuestSelectionMaster = (clsQuestCheck_o *)entity;
    if ( !entity )
      goto LABEL_51;
    EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
                                                                                       entity,
                                                                                       0LL);
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)this->fields.list;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_21:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v12);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_28;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_28:
      v22 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v18);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)v23;
    if ( !v23 )
      goto LABEL_48;
    v26 = ViewWaveEnemyEntity_TypeInfo;
    v27 = *(&ViewWaveEnemyEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 300LL) < (unsigned int)v27
      || *(ViewWaveEnemyEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * v27 - 8) != ViewWaveEnemyEntity_TypeInfo )
    {
      sub_B52D50(v23);
LABEL_48:
      sub_B52A5C(v23, v24);
    }
    if ( *(_DWORD *)(v23 + 16) == questId )
    {
      if ( !EnemyInfoDispNpcSvtIdList )
        sub_B52A5C(v23, ViewWaveEnemyEntity_TypeInfo);
      if ( !EnemyInfoDispNpcSvtIdList[1].monitor
        || (v23 = System_Linq_Enumerable__Contains_int_(
                    EnemyInfoDispNpcSvtIdList,
                    *(_DWORD *)(v23 + 52),
                    (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___),
            (v23 & 1) != 0) )
      {
        if ( !v10 )
          sub_B52A5C(v23, v26);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          v25,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__);
      }
    }
  }
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_43:
    v31 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v18);
  }
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                        Enumerator,
                                                        *(_QWORD *)(v31 + 8));
  if ( !v10 )
LABEL_51:
    sub_B52A5C(Master_WarQuestSelectionMaster, v7);
  return (ViewWaveEnemyEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                        (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ViewWaveEnemyMaster__TryGetEntity(
        ViewWaveEnemyMaster_o *this,
        ViewWaveEnemyEntity_o **entity,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B5E94 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__TryGetEntity__);
    sub_B52984(&ViewWaveEnemyEntity_TypeInfo);
    byte_42B5E94 = 1;
  }
  if ( (BYTE3(ViewWaveEnemyEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo);
  }
  PK = ViewWaveEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__TryGetEntity__);
}