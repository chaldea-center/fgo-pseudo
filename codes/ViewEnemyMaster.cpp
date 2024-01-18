void __fastcall ViewEnemyMaster___ctor(ViewEnemyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D2B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string___ctor__, method);
    byte_418D2B1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    76,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string___ctor__);
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

  if ( (byte_418D2AF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__GetEntity__, *(_QWORD *)&questId);
    sub_B2C35C(&ViewEnemyEntity_TypeInfo, v7);
    byte_418D2AF = 1;
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
                                (const MethodInfo_24E4520 *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__GetEntity__);
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
  clsQuestCheck_o *Master_WarQuestSelectionMaster; // x0
  __int64 v21; // x1
  int32_t v22; // w19
  bool v23; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  __int64 v25; // x1
  __int64 v26; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v32; // x3
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x23
  ViewEnemyEntity_c *v40; // x1
  __int64 v41; // x9
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418D2B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&int___TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ViewEnemyEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ViewEnemyEntity__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ViewEnemyEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_ViewEnemyEntity__TypeInfo, v15);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v16);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v17);
    sub_B2C35C(&ViewEnemyEntity_TypeInfo, v18);
    byte_418D2B2 = 1;
  }
  entity = 0LL;
  EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B2C374(int___TypeInfo, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Master_WarQuestSelectionMaster = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  v22 = clsQuestCheck__mfGetQuestPhaseByQuestID(Master_WarQuestSelectionMaster, questId, 0LL);
  Master_WarQuestSelectionMaster = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  v23 = clsQuestCheck__IsQuestClear(Master_WarQuestSelectionMaster, questId, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  if ( QuestPhaseMaster__TryGetEntity(
         (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
         &entity,
         questId,
         v22 + !v23,
         0LL) )
  {
    Master_WarQuestSelectionMaster = (clsQuestCheck_o *)entity;
    if ( !entity )
      goto LABEL_51;
    EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
                                                                                       entity,
                                                                                       0LL);
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ViewEnemyEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ViewEnemyEntity___ctor__);
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)this->fields.list;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v29;
        p_offset += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_21:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v26);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v33 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_28;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_28:
      v36 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v32);
    }
    v37 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
            Enumerator,
            *(_QWORD *)(v36 + 8));
    v39 = (EventMissionProgressRequest_Argument_ProgressData_o *)v37;
    if ( !v37 )
      goto LABEL_48;
    v40 = ViewEnemyEntity_TypeInfo;
    v41 = *(&ViewEnemyEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v37 + 300LL) < (unsigned int)v41
      || *(ViewEnemyEntity_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v41 - 8) != ViewEnemyEntity_TypeInfo )
    {
      sub_B2C728(v37);
LABEL_48:
      sub_B2C434(v37, v38);
    }
    if ( *(_DWORD *)(v37 + 16) == questId )
    {
      if ( !EnemyInfoDispNpcSvtIdList )
        sub_B2C434(v37, ViewEnemyEntity_TypeInfo);
      if ( !EnemyInfoDispNpcSvtIdList[1].monitor
        || (v37 = System_Linq_Enumerable__Contains_int_(
                    EnemyInfoDispNpcSvtIdList,
                    *(_DWORD *)(v37 + 48),
                    (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___),
            (v37 & 1) != 0) )
      {
        if ( !v24 )
          sub_B2C434(v37, v40);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          v39,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ViewEnemyEntity__Add__);
      }
    }
  }
  v42 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_43:
    v45 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v32);
  }
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                                                        Enumerator,
                                                        *(_QWORD *)(v45 + 8));
  if ( !v24 )
LABEL_51:
    sub_B2C434(Master_WarQuestSelectionMaster, v21);
  return (ViewEnemyEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ViewEnemyEntity__ToArray__);
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

  if ( (byte_418D2B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__TryGetEntity__, entity);
    sub_B2C35C(&ViewEnemyEntity_TypeInfo, v9);
    byte_418D2B0 = 1;
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
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__TryGetEntity__);
}