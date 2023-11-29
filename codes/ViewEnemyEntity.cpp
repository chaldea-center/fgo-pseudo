void __fastcall ViewEnemyEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FF721 & 1) == 0 )
  {
    sub_B16FFC(&ViewEnemyEntity_TypeInfo, v1);
    byte_40FF721 = 1;
  }
  ViewEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void __fastcall ViewEnemyEntity___ctor(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FF716 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FF716 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ViewEnemyEntity___ctor_34371856(
        ViewEnemyEntity_o *this,
        ViewEnemyEntity_o *old,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_o *name; // x1
  struct System_Int32_array *missionIds; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FF717 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, old);
    byte_40FF717 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
  if ( !old )
    sub_B170D4();
  this->fields.questId = old->fields.questId;
  this->fields.enemyId = old->fields.enemyId;
  name = old->fields.name;
  this->fields.name = name;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.name, (System_Int32_array **)name, v5, v6, v7, v8, v9, v10);
  this->fields.classId = old->fields.classId;
  this->fields.svtId = old->fields.svtId;
  this->fields.limitCount = old->fields.limitCount;
  this->fields.iconId = old->fields.iconId;
  this->fields.npcSvtId = old->fields.npcSvtId;
  this->fields.displayType = old->fields.displayType;
  missionIds = old->fields.missionIds;
  this->fields.missionIds = missionIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.missionIds,
    (System_Int32_array **)missionIds,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.impossibleKill = old->fields.impossibleKill;
  enemyScript = old->fields.enemyScript;
  this->fields.enemyScript = enemyScript;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.enemyScript,
    (System_Int32_array **)enemyScript,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ViewEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  if ( (byte_40FF719 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&enemyId);
    byte_40FF719 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ViewEnemyEntity__CreatePrimaryKey(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_40FF718 & 1) == 0 )
  {
    sub_B16FFC(&ViewEnemyEntity_TypeInfo, method);
    byte_40FF718 = 1;
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

  if ( (byte_40FF71A & 1) == 0 )
  {
    sub_B16FFC(&ViewEnemyEntity_TypeInfo, method);
    byte_40FF71A = 1;
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
  WebViewManager_o *Instance; // x0
  DataManager_o *v21; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  QuestGroupMaster_o *v23; // x24
  EventMissionCondDetailMaster_o *MissionConditionDetailListFromMissionTargetId; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  struct System_Int32_array *v27; // x27
  __int64 v28; // x8
  EventMissionCondDetailMaster_o *v29; // x25
  unsigned __int64 v30; // x28
  int32_t v31; // w26
  int age; // w25
  _BOOL8 IsMasterMission; // x0
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x4
  bool v36; // zf
  int32_t EventId; // w26
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  char v39; // w26
  int v40; // w20
  int v41; // w8
  QuestInformationListViewItem_MissionTargetState_o v42; // w8
  EventMissionConditionMaster_o *v43; // [xsp+8h] [xbp-B8h]
  UserEventMissionMaster_o *v44; // [xsp+10h] [xbp-B0h]
  EventMissionCondDetailMaster_o *v45; // [xsp+18h] [xbp-A8h]
  int v46; // [xsp+24h] [xbp-9Ch]
  _BYTE v47[32]; // [xsp+28h] [xbp-98h] BYREF
  int v48; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_40FF71B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__get_Current__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__get_Count__, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40FF71B = 1;
  }
  entity = 0LL;
  memset(&v49, 0, sizeof(v49));
  v48 = 0;
  *missionTargetState = 0;
  missionIds = this->fields.missionIds;
  if ( missionIds && (int)missionIds->max_length >= 1 && this->fields.impossibleKill <= 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v21 = (DataManager_o *)Instance,
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___),
          v44 = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              v21,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___),
          v43 = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   v21,
                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___),
          v23 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        v21,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
          MissionConditionDetailListFromMissionTargetId = (EventMissionCondDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              v21,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
          (v27 = this->fields.missionIds) == 0LL) )
    {
LABEL_76:
      sub_B170D4();
    }
    v28 = *(_QWORD *)&v27->max_length;
    if ( (int)v28 >= 1 )
    {
      v46 = 0;
      v29 = MissionConditionDetailListFromMissionTargetId;
      v30 = 0LL;
      v45 = MissionConditionDetailListFromMissionTargetId;
      while ( 1 )
      {
        if ( v30 >= (unsigned int)v28 )
        {
          sub_B17100(MissionConditionDetailListFromMissionTargetId, v25, v26);
          sub_B170A0();
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_76;
        v31 = v27->m_Items[v30 + 1];
        MissionConditionDetailListFromMissionTargetId = (EventMissionCondDetailMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                            MasterData_WarQuestSelectionMaster,
                                                                                            &entity,
                                                                                            v31,
                                                                                            (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)MissionConditionDetailListFromMissionTargetId & 1) != 0 )
        {
          MissionConditionDetailListFromMissionTargetId = (EventMissionCondDetailMaster_o *)entity;
          if ( !entity )
            goto LABEL_76;
          if ( LODWORD(entity->fields.age) )
            break;
        }
LABEL_74:
        LODWORD(v28) = v27->max_length;
        if ( (__int64)++v30 >= (int)v28 )
          return;
      }
      if ( !EventMissionEntity__isNowMission((EventMissionEntity_o *)entity, 0LL) )
        goto LABEL_44;
      if ( !entity )
        goto LABEL_76;
      age = (int)entity->fields.age;
      IsMasterMission = EventMissionEntity__IsMasterMission((EventMissionEntity_o *)entity, 0LL);
      if ( IsMasterMission )
      {
        if ( age == 2 )
        {
          v29 = v45;
          if ( !missionTargetState->fields.IsWeeklyMission
            && ViewEnemyEntity__isMissionGoing((ViewEnemyEntity_o *)IsMasterMission, v31, v44, v43, v35) )
          {
            missionTargetState->fields.IsWeeklyMission = 1;
            if ( !v23 )
              goto LABEL_46;
            goto LABEL_45;
          }
        }
        else
        {
          v36 = age == 5;
          v29 = v45;
          if ( v36
            && !missionTargetState->fields.IsLimitMission
            && ViewEnemyEntity__isMissionGoing((ViewEnemyEntity_o *)IsMasterMission, v31, v44, v43, v35) )
          {
            missionTargetState->fields.IsLimitMission = 1;
            if ( !v23 )
              goto LABEL_46;
            goto LABEL_45;
          }
        }
        goto LABEL_44;
      }
      if ( age == 7 )
      {
        v29 = v45;
        if ( missionTargetState->fields.IsEventMission
          || !ViewEnemyEntity__isRandomMissionGoing((ViewEnemyEntity_o *)IsMasterMission, v31, v34) )
        {
          goto LABEL_44;
        }
      }
      else
      {
        if ( age == 6 )
        {
          v29 = v45;
          if ( !missionTargetState->fields.IsCompleteMission
            && ViewEnemyEntity__isMissionGoing((ViewEnemyEntity_o *)IsMasterMission, v31, v44, v43, v35) )
          {
            missionTargetState->fields.IsCompleteMission = 1;
            if ( !v23 )
              goto LABEL_46;
            goto LABEL_45;
          }
          goto LABEL_44;
        }
        v36 = age == 1;
        v29 = v45;
        if ( !v36
          || missionTargetState->fields.IsEventMission
          || !ViewEnemyEntity__isMissionGoing((ViewEnemyEntity_o *)IsMasterMission, v31, v44, v43, v35) )
        {
LABEL_44:
          if ( !v23 )
          {
LABEL_46:
            EventId = 0;
            goto LABEL_47;
          }
LABEL_45:
          EventId = QuestGroupMaster__GetEventId(v23, questId, 0LL);
LABEL_47:
          if ( !entity || !v29 )
            goto LABEL_76;
          MissionConditionDetailListFromMissionTargetId = (EventMissionCondDetailMaster_o *)EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
                                                                                              v29,
                                                                                              entity->fields.id,
                                                                                              0LL);
          if ( MissionConditionDetailListFromMissionTargetId
            && SLODWORD(MissionConditionDetailListFromMissionTargetId->fields._MasterName_k__BackingField) >= 1 )
          {
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v47,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MissionConditionDetailListFromMissionTargetId,
              (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__);
            v49 = *(System_Collections_Generic_List_Enumerator_T__o *)v47;
            while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v49,
                      (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__) )
            {
              if ( !v49.fields.current )
                sub_B170D4();
              klass = (System_Collections_Generic_IEnumerable_TSource__o *)v49.fields.current[4].klass;
              if ( !klass
                || !klass[1].monitor
                || System_Linq_Enumerable__Contains_int_(
                     klass,
                     EventId,
                     (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
              {
                v39 = 1;
                goto LABEL_59;
              }
            }
            v39 = 0;
LABEL_59:
            *(_DWORD *)&v47[4 * v46 + 24] = 491;
            v40 = ++v48;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v49,
              (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
            if ( v40 )
            {
              v41 = v40 - 1;
              if ( *(_DWORD *)&v47[4 * v40 + 20] == 491 )
              {
                --v40;
                v48 = v41;
              }
            }
            if ( (v39 & 1) != 0 )
            {
LABEL_69:
              v46 = v40;
            }
            else
            {
              if ( !entity )
                goto LABEL_76;
              v46 = v40;
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
          v42 = *missionTargetState;
          if ( HIBYTE(*(unsigned int *)missionTargetState)
            && (*(_DWORD *)&v42 & 0xFF0000) != 0
            && missionTargetState->fields.IsEventMission
            && (*(_WORD *)&v42.fields.IsEventMission & 0xFF00) != 0 )
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
  clsQuestCheck_o *v11; // x0
  int32_t v12; // w20
  clsQuestCheck_o *v13; // x0
  bool v14; // w21
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array *EnemyInfoDispNpcSvtIdList; // x0
  System_Int32_array *v17; // x20
  int32_t v18; // w0
  unsigned int v19; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  il2cpp_array_size_t max_length; // w8
  System_String_o *name; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *v27; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FF71D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v9);
    sub_B16FFC(&StringLiteral_9280, v10);
    byte_40FF71D = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v11 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v11 )
    goto LABEL_28;
  v12 = clsQuestCheck__mfGetQuestPhaseByQuestID(v11, this->fields.questId, 0LL);
  v13 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v13 )
    goto LABEL_28;
  v14 = clsQuestCheck__IsQuestClear(v13, this->fields.questId, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  if ( !QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, this->fields.questId, v12 + !v14, 0LL) )
    goto LABEL_22;
  if ( !entity )
    goto LABEL_28;
  EnemyInfoDispNpcSvtIdList = QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0LL);
  if ( !EnemyInfoDispNpcSvtIdList )
    goto LABEL_28;
  v17 = EnemyInfoDispNpcSvtIdList;
  if ( !*(_QWORD *)&EnemyInfoDispNpcSvtIdList->max_length )
    goto LABEL_22;
  v18 = System_Array__IndexOf_int_(
          EnemyInfoDispNpcSvtIdList,
          this->fields.npcSvtId,
          (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
  if ( (v18 & 0x80000000) != 0 )
    goto LABEL_22;
  v19 = v18;
  if ( !entity )
    goto LABEL_28;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0LL);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != v17->max_length) )
  {
LABEL_22:
    name = this->fields.name;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_9280, 0LL) )
      return name;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v27 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   MasterData_WarQuestSelectionMaster,
                                   this->fields.svtId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( v27 )
          return ServantEntity__getBattleName(v27, 0, -1, 0LL);
      }
    }
LABEL_28:
    sub_B170D4();
  }
  if ( v19 >= max_length )
  {
    sub_B17100(EnemyInfoOverwriteNpcSvtNameList, v21, v22);
    sub_B170A0();
  }
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v19];
}


int32_t __fastcall ViewEnemyEntity__getEnemyNameEffect(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FF71F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18299, method);
    byte_40FF71F = 1;
  }
  return ViewEnemyEntity__getScript(this, (System_String_o *)StringLiteral_18299, 0, v2);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  int32_t result; // w0
  const MethodInfo *v13; // x0

  if ( (byte_40FF720 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&long_TypeInfo, v8);
    byte_40FF720 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v10 = this->fields.enemyScript;
  if ( !v10
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  sub_B173C8(Item);
  ViewEnemyEntity___cctor(v13);
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

  if ( (byte_40FF71C & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, *(_QWORD *)&id);
    byte_40FF71C = 1;
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
  if ( !UserEventMissionMaster__TryGetEntity(usrEvMissionMst, &entity, UserId, id, 0LL) )
  {
    if ( missionCondMst )
      return EventMissionConditionMaster__IsMissionRunning(missionCondMst, id, 0LL);
LABEL_13:
    sub_B170D4();
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

  if ( (byte_40FF71E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, *(_QWORD *)&missionId);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    byte_40FF71E = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(Master_WarQuestSelectionMaster, missionId, 0LL);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0LL);
  return (char)MissionEntity;
}