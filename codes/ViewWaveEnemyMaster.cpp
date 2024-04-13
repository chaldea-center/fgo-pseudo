void __fastcall ViewWaveEnemyMaster___ctor(ViewWaveEnemyMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE6FD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EE6FD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    459,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ViewWaveEnemyEntity_o *__fastcall ViewWaveEnemyMaster__GetEntity(
        ViewWaveEnemyMaster_o *this,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *PK; // x1

  if ( (byte_42EE6FB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__GetEntity__,
      questId,
      enemyId,
      method);
    sub_B5D5C4(&ViewWaveEnemyEntity_TypeInfo, v7, v8, v9);
    byte_42EE6FB = 1;
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
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__GetEntity__);
}


ViewWaveEnemyEntity_array *__fastcall ViewWaveEnemyMaster__GetEntityListFromQuestId(
        ViewWaveEnemyMaster_o *this,
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
  System_Collections_Generic_IEnumerable_TSource__o *EnemyInfoDispNpcSvtIdList; // x22
  clsQuestCheck_o *Master_WarQuestSelectionMaster; // x0
  __int64 v50; // x1
  int32_t v51; // w19
  bool v52; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x19
  __int64 v54; // x1
  __int64 v55; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v58; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v61; // x3
  System_Collections_Generic_IEnumerator_T__c *v62; // x8
  unsigned __int64 v63; // x10
  int32_t *v64; // x11
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v68; // x23
  ViewWaveEnemyEntity_c *v69; // x1
  __int64 v70; // x9
  System_Collections_Generic_IEnumerator_T__c *v71; // x8
  unsigned __int64 v72; // x10
  int32_t *v73; // x11
  __int64 v74; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EE6FE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v12, v13, v14);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&int___TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&ViewWaveEnemyEntity_TypeInfo, v45, v46, v47);
    byte_42EE6FE = 1;
  }
  entity = 0LL;
  EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B5D5DC(int___TypeInfo, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Master_WarQuestSelectionMaster = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  v51 = clsQuestCheck__mfGetQuestPhaseByQuestID(Master_WarQuestSelectionMaster, questId, 0LL);
  Master_WarQuestSelectionMaster = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  v52 = clsQuestCheck__IsQuestClear(Master_WarQuestSelectionMaster, questId, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  if ( QuestPhaseMaster__TryGetEntity(
         (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
         &entity,
         questId,
         v51 + !v52,
         0LL) )
  {
    Master_WarQuestSelectionMaster = (clsQuestCheck_o *)entity;
    if ( !entity )
      goto LABEL_51;
    EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
                                                                                       entity,
                                                                                       0LL);
  }
  v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v53,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)this->fields.list;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v54);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v58 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v58;
        p_offset += 4;
        if ( v58 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_21:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v55);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v62 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v63 = 0LL;
      v64 = &v62->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v64 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v63;
        v64 += 4;
        if ( v63 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_28;
      }
      v65 = (__int64)&v62->vtable[*v64].method;
    }
    else
    {
LABEL_28:
      v65 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v61);
    }
    v66 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v65)(
            Enumerator,
            *(_QWORD *)(v65 + 8));
    v68 = (EventMissionProgressRequest_Argument_ProgressData_o *)v66;
    if ( !v66 )
      goto LABEL_48;
    v69 = ViewWaveEnemyEntity_TypeInfo;
    v70 = *(&ViewWaveEnemyEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v66 + 300LL) < (unsigned int)v70
      || *(ViewWaveEnemyEntity_c **)(*(_QWORD *)(*(_QWORD *)v66 + 200LL) + 8 * v70 - 8) != ViewWaveEnemyEntity_TypeInfo )
    {
      sub_B5D990(v66);
LABEL_48:
      sub_B5D69C(v66, v67);
    }
    if ( *(_DWORD *)(v66 + 16) == questId )
    {
      if ( !EnemyInfoDispNpcSvtIdList )
        sub_B5D69C(v66, ViewWaveEnemyEntity_TypeInfo);
      if ( !EnemyInfoDispNpcSvtIdList[1].monitor
        || (v66 = System_Linq_Enumerable__Contains_int_(
                    EnemyInfoDispNpcSvtIdList,
                    *(_DWORD *)(v66 + 52),
                    (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___),
            (v66 & 1) != 0) )
      {
        if ( !v53 )
          sub_B5D69C(v66, v69);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v53,
          v68,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__);
      }
    }
  }
  v71 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v72 = 0LL;
    v73 = &v71->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
    {
      ++v72;
      v73 += 4;
      if ( v72 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v74 = (__int64)&v71->vtable[*v73].method;
  }
  else
  {
LABEL_43:
    v74 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v61);
  }
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v74)(
                                                        Enumerator,
                                                        *(_QWORD *)(v74 + 8));
  if ( !v53 )
LABEL_51:
    sub_B5D69C(Master_WarQuestSelectionMaster, v50);
  return (ViewWaveEnemyEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v53,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ViewWaveEnemyMaster__TryGetEntity(
        ViewWaveEnemyMaster_o *this,
        ViewWaveEnemyEntity_o **entity,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *PK; // x2

  if ( (byte_42EE6FC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__TryGetEntity__,
      (_DWORD)entity,
      questId,
      *(_QWORD *)&enemyId);
    sub_B5D5C4(&ViewWaveEnemyEntity_TypeInfo, v9, v10, v11);
    byte_42EE6FC = 1;
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
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__TryGetEntity__);
}