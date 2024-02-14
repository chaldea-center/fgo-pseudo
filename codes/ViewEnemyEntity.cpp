void __fastcall ViewEnemyEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421A292 & 1) == 0 )
  {
    sub_B0D8A4(&ViewEnemyEntity_TypeInfo, v1);
    byte_421A292 = 1;
  }
  ViewEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void __fastcall ViewEnemyEntity___ctor(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_421A287 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_421A287 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ViewEnemyEntity___ctor_34343148(
        ViewEnemyEntity_o *this,
        ViewEnemyEntity_o *old,
        const MethodInfo *method)
{
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_String_o *name; // x1
  struct System_Int32_array *missionIds; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_421A288 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, old);
    byte_421A288 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
  if ( !old )
    sub_B0D97C(v5);
  this->fields.questId = old->fields.questId;
  this->fields.enemyId = old->fields.enemyId;
  name = old->fields.name;
  this->fields.name = name;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.name, (System_Int32_array **)name, v6, v7, v8, v9, v10, v11);
  this->fields.classId = old->fields.classId;
  this->fields.svtId = old->fields.svtId;
  this->fields.limitCount = old->fields.limitCount;
  this->fields.iconId = old->fields.iconId;
  this->fields.npcSvtId = old->fields.npcSvtId;
  this->fields.displayType = old->fields.displayType;
  missionIds = old->fields.missionIds;
  this->fields.missionIds = missionIds;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.missionIds,
    (System_Int32_array **)missionIds,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.impossibleKill = old->fields.impossibleKill;
  enemyScript = old->fields.enemyScript;
  this->fields.enemyScript = enemyScript;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.enemyScript,
    (System_Int32_array **)enemyScript,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ViewEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  if ( (byte_421A28A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&enemyId);
    byte_421A28A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_171341C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ViewEnemyEntity__CreatePrimaryKey(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_421A289 & 1) == 0 )
  {
    sub_B0D8A4(&ViewEnemyEntity_TypeInfo, method);
    byte_421A289 = 1;
  }
  questId = this->fields.questId;
  enemyId = this->fields.enemyId;
  if ( (BYTE3(ViewEnemyEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo);
  }
  return ViewEnemyEntity__CreatePK(questId, enemyId, v2);
}


bool __fastcall ViewEnemyEntity__IsAllEnableMissionTarget(
        ViewEnemyEntity_o *this,
        QuestInformationListViewItem_MissionTargetState_o missionTargetState,
        const MethodInfo *method)
{
  return missionTargetState.fields.IsCompleteMission
      && (*(_DWORD *)&missionTargetState & 0xFF0000) != 0
      && missionTargetState.fields.IsEventMission
      && (*(_WORD *)&missionTargetState.fields.IsEventMission & 0xFF00) != 0;
}


bool __fastcall ViewEnemyEntity__IsIconIdUnique(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  int32_t limitCount; // w8
  int32_t svtId; // w20
  ViewEnemyEntity_c *v6; // x0

  if ( (byte_421A28B & 1) == 0 )
  {
    sub_B0D8A4(&ViewEnemyEntity_TypeInfo, method);
    byte_421A28B = 1;
  }
  limitCount = this->fields.limitCount;
  if ( limitCount > 9 )
    return 0;
  svtId = this->fields.svtId;
  v6 = ViewEnemyEntity_TypeInfo;
  if ( (BYTE3(ViewEnemyEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo);
    v6 = ViewEnemyEntity_TypeInfo;
    limitCount = this->fields.limitCount;
  }
  return limitCount + v6->static_fields->SVT_ID_TO_ICON_ID * svtId != this->fields.iconId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ViewEnemyEntity__IsMissionTarget(
        ViewEnemyEntity_o *this,
        int32_t questId,
        QuestInformationListViewItem_MissionTargetState_o *missionTargetState,
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
  struct System_Int32_array *missionIds; // x8
  DataManager_o *Instance; // x0
  DataManager_o *v21; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  QuestGroupMaster_o *v23; // x24
  struct System_Int32_array *v24; // x27
  __int64 v25; // x8
  EventMissionCondDetailMaster_o *v26; // x25
  unsigned __int64 v27; // x28
  int32_t v28; // w26
  int age; // w25
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x4
  bool v32; // zf
  int32_t v33; // w26
  _BOOL8 v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  char v36; // w26
  int v37; // w20
  int v38; // w8
  QuestInformationListViewItem_MissionTargetState_o v39; // w8
  __int64 v40; // x0
  EventMissionConditionMaster_o *v41; // [xsp+8h] [xbp-B8h]
  UserEventMissionMaster_o *v42; // [xsp+10h] [xbp-B0h]
  EventMissionCondDetailMaster_o *v43; // [xsp+18h] [xbp-A8h]
  int v44; // [xsp+24h] [xbp-9Ch]
  _BYTE v45[32]; // [xsp+28h] [xbp-98h] BYREF
  int v46; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_421A28C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v10);
    sub_B0D8A4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__get_Current__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__get_Count__, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_421A28C = 1;
  }
  entity = 0LL;
  memset(&v47, 0, sizeof(v47));
  v46 = 0;
  *missionTargetState = 0;
  missionIds = this->fields.missionIds;
  if ( missionIds && (int)missionIds->max_length >= 1 && this->fields.impossibleKill <= 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v21 = Instance,
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                Instance,
                                                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___),
          v42 = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              v21,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___),
          v41 = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   v21,
                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___),
          v23 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        v21,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        v21,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
          (v24 = this->fields.missionIds) == 0LL) )
    {
LABEL_76:
      sub_B0D97C(Instance);
    }
    v25 = *(_QWORD *)&v24->max_length;
    if ( (int)v25 >= 1 )
    {
      v44 = 0;
      v26 = (EventMissionCondDetailMaster_o *)Instance;
      v27 = 0LL;
      v43 = (EventMissionCondDetailMaster_o *)Instance;
      while ( 1 )
      {
        if ( v27 >= (unsigned int)v25 )
        {
          v40 = sub_B0D9A8(Instance);
          sub_B0D948(v40, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_76;
        v28 = v24->m_Items[v27 + 1];
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      &entity,
                                      v28,
                                      (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_76;
          if ( LODWORD(entity->fields.age) )
            break;
        }
LABEL_74:
        LODWORD(v25) = v24->max_length;
        if ( (__int64)++v27 >= (int)v25 )
          return;
      }
      Instance = (DataManager_o *)EventMissionEntity__isNowMission((EventMissionEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_44;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_76;
      age = (int)entity->fields.age;
      Instance = (DataManager_o *)EventMissionEntity__IsMasterMission((EventMissionEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( age == 2 )
        {
          v26 = v43;
          if ( !missionTargetState->fields.IsWeeklyMission )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v28,
                                          v42,
                                          v41,
                                          v31);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              missionTargetState->fields.IsWeeklyMission = 1;
              if ( !v23 )
                goto LABEL_46;
              goto LABEL_45;
            }
          }
        }
        else
        {
          v32 = age == 5;
          v26 = v43;
          if ( v32 && !missionTargetState->fields.IsLimitMission )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v28,
                                          v42,
                                          v41,
                                          v31);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              missionTargetState->fields.IsLimitMission = 1;
              if ( !v23 )
                goto LABEL_46;
              goto LABEL_45;
            }
          }
        }
        goto LABEL_44;
      }
      if ( age == 7 )
      {
        v26 = v43;
        if ( missionTargetState->fields.IsEventMission )
          goto LABEL_44;
        Instance = (DataManager_o *)ViewEnemyEntity__isRandomMissionGoing((ViewEnemyEntity_o *)Instance, v28, v30);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_44;
      }
      else
      {
        if ( age == 6 )
        {
          v26 = v43;
          if ( !missionTargetState->fields.IsCompleteMission )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v28,
                                          v42,
                                          v41,
                                          v31);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              missionTargetState->fields.IsCompleteMission = 1;
              if ( !v23 )
                goto LABEL_46;
              goto LABEL_45;
            }
          }
          goto LABEL_44;
        }
        v32 = age == 1;
        v26 = v43;
        if ( !v32
          || missionTargetState->fields.IsEventMission
          || (Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                            (ViewEnemyEntity_o *)Instance,
                                            v28,
                                            v42,
                                            v41,
                                            v31),
              ((unsigned __int8)Instance & 1) == 0) )
        {
LABEL_44:
          if ( !v23 )
          {
LABEL_46:
            v33 = 0;
            goto LABEL_47;
          }
LABEL_45:
          Instance = (DataManager_o *)QuestGroupMaster__GetEventId(v23, questId, 0LL);
          v33 = (int)Instance;
LABEL_47:
          if ( !entity || !v26 )
            goto LABEL_76;
          Instance = (DataManager_o *)EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
                                        v26,
                                        entity->fields.id,
                                        0LL);
          if ( Instance && SLODWORD(Instance->fields.datalist) >= 1 )
          {
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v45,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
              (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__);
            v47 = *(System_Collections_Generic_List_Enumerator_T__o *)v45;
            while ( 1 )
            {
              v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v47,
                      (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__);
              if ( !v34 )
                break;
              if ( !v47.fields.current )
                sub_B0D97C(v34);
              klass = (System_Collections_Generic_IEnumerable_TSource__o *)v47.fields.current[4].klass;
              if ( !klass
                || !klass[1].monitor
                || System_Linq_Enumerable__Contains_int_(
                     klass,
                     v33,
                     (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___) )
              {
                v36 = 1;
                goto LABEL_59;
              }
            }
            v36 = 0;
LABEL_59:
            *(_DWORD *)&v45[4 * v44 + 24] = 491;
            v37 = ++v46;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v47,
              (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
            if ( v37 )
            {
              v38 = v37 - 1;
              if ( *(_DWORD *)&v45[4 * v37 + 20] == 491 )
              {
                --v37;
                v46 = v38;
              }
            }
            if ( (v36 & 1) != 0 )
            {
LABEL_69:
              v44 = v37;
            }
            else
            {
              if ( !entity )
                goto LABEL_76;
              v44 = v37;
              switch ( LODWORD(entity->fields.age) )
              {
                case 1:
                case 7:
                  missionTargetState->fields.IsEventMission = 0;
                  goto LABEL_69;
                case 2:
                  missionTargetState->fields.IsWeeklyMission = 0;
                  goto LABEL_69;
                case 3:
                case 4:
                  break;
                case 5:
                  missionTargetState->fields.IsLimitMission = 0;
                  goto LABEL_69;
                case 6:
                  missionTargetState->fields.IsCompleteMission = 0;
                  goto LABEL_69;
                default:
                  goto LABEL_69;
              }
            }
          }
          v39 = *missionTargetState;
          if ( HIBYTE(*(unsigned int *)missionTargetState)
            && (*(_DWORD *)&v39 & 0xFF0000) != 0
            && missionTargetState->fields.IsEventMission
            && (*(_WORD *)&v39.fields.IsEventMission & 0xFF00) != 0 )
          {
            return;
          }
          goto LABEL_74;
        }
      }
      missionTargetState->fields.IsEventMission = 1;
      goto LABEL_44;
    }
  }
}


System_String_o *__fastcall ViewEnemyEntity__getBattleName(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  clsQuestCheck_o *Master_WarQuestSelectionMaster; // x0
  int32_t v12; // w20
  bool v13; // w21
  clsQuestCheck_o *v14; // x20
  int32_t v15; // w0
  unsigned int v16; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  il2cpp_array_size_t max_length; // w8
  System_String_o *name; // x20
  __int64 v21; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421A28E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_9333/*"NONE"*/, v10);
    byte_421A28E = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Master_WarQuestSelectionMaster = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  v12 = clsQuestCheck__mfGetQuestPhaseByQuestID(Master_WarQuestSelectionMaster, this->fields.questId, 0LL);
  Master_WarQuestSelectionMaster = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  v13 = clsQuestCheck__IsQuestClear(Master_WarQuestSelectionMaster, this->fields.questId, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
          &entity,
          this->fields.questId,
          v12 + !v13,
          0LL) )
    goto LABEL_22;
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_28;
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  v14 = Master_WarQuestSelectionMaster;
  if ( !Master_WarQuestSelectionMaster->fields.cQuestReleaseListP )
    goto LABEL_22;
  v15 = System_Array__IndexOf_int_(
          (System_Int32_array *)Master_WarQuestSelectionMaster,
          this->fields.npcSvtId,
          (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
  if ( (v15 & 0x80000000) != 0 )
    goto LABEL_22;
  v16 = v15;
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_28;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0LL);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != LODWORD(v14->fields.cQuestReleaseListP)) )
  {
LABEL_22:
    name = this->fields.name;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_9333/*"NONE"*/, 0LL) )
      return name;
    Master_WarQuestSelectionMaster = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Master_WarQuestSelectionMaster,
                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                              this->fields.svtId,
                                                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Master_WarQuestSelectionMaster )
          return ServantEntity__getBattleName((ServantEntity_o *)Master_WarQuestSelectionMaster, 0, -1, 0LL);
      }
    }
LABEL_28:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  if ( v16 >= max_length )
  {
    v21 = sub_B0D9A8(EnemyInfoOverwriteNpcSvtNameList);
    sub_B0D948(v21, 0LL);
  }
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v16];
}


int32_t __fastcall ViewEnemyEntity__getEnemyNameEffect(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421A290 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18425/*"enemyNameEffect"*/, method);
    byte_421A290 = 1;
  }
  return ViewEnemyEntity__getScript(this, (System_String_o *)StringLiteral_18425/*"enemyNameEffect"*/, 0, v2);
}


int32_t __fastcall ViewEnemyEntity__getScript(
        ViewEnemyEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  int32_t result; // w0
  const MethodInfo *v12; // x0

  if ( (byte_421A291 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B0D8A4(&long_TypeInfo, v8);
    byte_421A291 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B0D97C(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  sub_B0DC70(Item);
  ViewEnemyEntity___cctor(v12);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ViewEnemyEntity__isMissionGoing(
        ViewEnemyEntity_o *this,
        int32_t id,
        UserEventMissionMaster_o *usrEvMissionMst,
        EventMissionConditionMaster_o *missionCondMst,
        const MethodInfo *method)
{
  int64_t UserId; // x0
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421A28D & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, *(_QWORD *)&id);
    byte_421A28D = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !usrEvMissionMst )
    goto LABEL_13;
  UserId = UserEventMissionMaster__TryGetEntity(usrEvMissionMst, &entity, UserId, id, 0LL);
  if ( (UserId & 1) == 0 )
  {
    if ( missionCondMst )
      return EventMissionConditionMaster__IsMissionRunning(missionCondMst, id, 0LL);
LABEL_13:
    sub_B0D97C(UserId);
  }
  if ( !entity )
    goto LABEL_13;
  return entity->fields.missionProgressType == 3;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ViewEnemyEntity__isRandomMissionGoing(
        ViewEnemyEntity_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_421A28F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, *(_QWORD *)&missionId);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    byte_421A28F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(Master_WarQuestSelectionMaster, missionId, 0LL);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0LL);
  return (char)MissionEntity;
}