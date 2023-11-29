void __fastcall ViewEnemyMaster___ctor(ViewEnemyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FF724 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string___ctor__, method);
    byte_40FF724 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    76,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ViewEnemyEntity_o *__fastcall ViewEnemyMaster__GetEntity(
        ViewEnemyMaster_o *this,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x1

  if ( (byte_40FF722 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__GetEntity__, *(_QWORD *)&questId);
    sub_B16FFC(&ViewEnemyEntity_TypeInfo, v7);
    byte_40FF722 = 1;
  }
  if ( (BYTE3(ViewEnemyEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo);
  }
  PK = ViewEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&enemyId);
  return (ViewEnemyEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266F7D8 *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ViewEnemyEntity_array *__fastcall ViewEnemyMaster__GetEntityListFromQuestId(
        ViewEnemyMaster_o *this,
        int32_t questId,
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
  System_Collections_Generic_IEnumerable_TSource__o *EnemyInfoDispNpcSvtIdList; // x22
  clsQuestCheck_o *v20; // x0
  int32_t v21; // w19
  clsQuestCheck_o *v22; // x0
  bool v23; // w23
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v41; // x23
  __int64 v42; // x9
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FF725 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v7);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&int___TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ViewEnemyEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ViewEnemyEntity__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ViewEnemyEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_ViewEnemyEntity__TypeInfo, v15);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v16);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v17);
    sub_B16FFC(&ViewEnemyEntity_TypeInfo, v18);
    byte_40FF725 = 1;
  }
  entity = 0LL;
  EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B17014(
                                                                                     int___TypeInfo,
                                                                                     0LL,
                                                                                     method);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v20 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v20 )
    goto LABEL_51;
  v21 = clsQuestCheck__mfGetQuestPhaseByQuestID(v20, questId, 0LL);
  v22 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v22 )
    goto LABEL_51;
  v23 = clsQuestCheck__IsQuestClear(v22, questId, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  if ( QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, questId, v21 + !v23, 0LL) )
  {
    if ( !entity )
      goto LABEL_51;
    EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
                                                                                       entity,
                                                                                       0LL);
  }
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ViewEnemyEntity__TypeInfo,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ViewEnemyEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v33;
        p_offset += 4;
        if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_21:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_28;
      }
      v39 = (__int64)&v36->vtable[*v38].method;
    }
    else
    {
LABEL_28:
      v39 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v40 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v39 + 8));
    v41 = v40;
    if ( !v40 )
      goto LABEL_48;
    v42 = *(&ViewEnemyEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v40->klass->_2.bitflags2 + 1) < (unsigned int)v42
      || (ViewEnemyEntity_c *)v40->klass->_2.typeHierarchy[v42 - 1] != ViewEnemyEntity_TypeInfo )
    {
      sub_B173C8(v40);
LABEL_48:
      sub_B170D4();
    }
    if ( v40->fields.missionTargetId == questId )
    {
      if ( !EnemyInfoDispNpcSvtIdList )
        sub_B170D4();
      if ( !EnemyInfoDispNpcSvtIdList[1].monitor
        || System_Linq_Enumerable__Contains_int_(
             EnemyInfoDispNpcSvtIdList,
             (int32_t)v40[1].monitor,
             (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !v29 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v41,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ViewEnemyEntity__Add__);
      }
    }
  }
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
        goto LABEL_43;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_43:
    v46 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
  if ( !v29 )
LABEL_51:
    sub_B170D4();
  return (ViewEnemyEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ViewEnemyEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ViewEnemyMaster__TryGetEntity(
        ViewEnemyMaster_o *this,
        ViewEnemyEntity_o **entity,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *PK; // x2

  if ( (byte_40FF723 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__TryGetEntity__, entity);
    sub_B16FFC(&ViewEnemyEntity_TypeInfo, v9);
    byte_40FF723 = 1;
  }
  if ( (BYTE3(ViewEnemyEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo);
  }
  PK = ViewEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__TryGetEntity__);
}