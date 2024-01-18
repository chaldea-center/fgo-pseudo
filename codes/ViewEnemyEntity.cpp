void __fastcall ViewEnemyEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418D2AE & 1) == 0 )
  {
    sub_B2C35C(&ViewEnemyEntity_TypeInfo, v1);
    byte_418D2AE = 1;
  }
  ViewEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void __fastcall ViewEnemyEntity___ctor(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418D2A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418D2A3 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ViewEnemyEntity___ctor_34363392(
        ViewEnemyEntity_o *this,
        ViewEnemyEntity_o *old,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_String_o *name; // x1
  struct System_Int32_array *missionIds; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_418D2A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, old);
    byte_418D2A4 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
  if ( !old )
    sub_B2C434(v5, v6);
  this->fields.questId = old->fields.questId;
  this->fields.enemyId = old->fields.enemyId;
  name = old->fields.name;
  this->fields.name = name;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.name, (System_Int32_array **)name, v7, v8, v9, v10, v11, v12);
  this->fields.classId = old->fields.classId;
  this->fields.svtId = old->fields.svtId;
  this->fields.limitCount = old->fields.limitCount;
  this->fields.iconId = old->fields.iconId;
  this->fields.npcSvtId = old->fields.npcSvtId;
  this->fields.displayType = old->fields.displayType;
  missionIds = old->fields.missionIds;
  this->fields.missionIds = missionIds;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.missionIds,
    (System_Int32_array **)missionIds,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.impossibleKill = old->fields.impossibleKill;
  enemyScript = old->fields.enemyScript;
  this->fields.enemyScript = enemyScript;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.enemyScript,
    (System_Int32_array **)enemyScript,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ViewEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  if ( (byte_418D2A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&enemyId);
    byte_418D2A6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ViewEnemyEntity__CreatePrimaryKey(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_418D2A5 & 1) == 0 )
  {
    sub_B2C35C(&ViewEnemyEntity_TypeInfo, method);
    byte_418D2A5 = 1;
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

  if ( (byte_418D2A7 & 1) == 0 )
  {
    sub_B2C35C(&ViewEnemyEntity_TypeInfo, method);
    byte_418D2A7 = 1;
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
  __int64 v21; // x1
  DataManager_o *v22; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  QuestGroupMaster_o *v24; // x24
  struct System_Int32_array *v25; // x27
  __int64 v26; // x8
  EventMissionCondDetailMaster_o *v27; // x25
  unsigned __int64 v28; // x28
  int32_t v29; // w26
  int age; // w25
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x4
  bool v33; // zf
  int32_t v34; // w26
  _BOOL8 v35; // x0
  __int64 v36; // x1
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  char v38; // w26
  int v39; // w20
  int v40; // w8
  QuestInformationListViewItem_MissionTargetState_o v41; // w8
  __int64 v42; // x0
  EventMissionConditionMaster_o *v43; // [xsp+8h] [xbp-B8h]
  UserEventMissionMaster_o *v44; // [xsp+10h] [xbp-B0h]
  EventMissionCondDetailMaster_o *v45; // [xsp+18h] [xbp-A8h]
  int v46; // [xsp+24h] [xbp-9Ch]
  _BYTE v47[32]; // [xsp+28h] [xbp-98h] BYREF
  int v48; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_418D2A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__get_Current__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__get_Count__, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_418D2A8 = 1;
  }
  entity = 0LL;
  memset(&v49, 0, sizeof(v49));
  v48 = 0;
  *missionTargetState = 0;
  missionIds = this->fields.missionIds;
  if ( missionIds && (int)missionIds->max_length >= 1 && this->fields.impossibleKill <= 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v22 = Instance,
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                Instance,
                                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___),
          v44 = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              v22,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___),
          v43 = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   v22,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___),
          v24 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        v22,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___),
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        v22,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
          (v25 = this->fields.missionIds) == 0LL) )
    {
LABEL_76:
      sub_B2C434(Instance, v21);
    }
    v26 = *(_QWORD *)&v25->max_length;
    if ( (int)v26 >= 1 )
    {
      v46 = 0;
      v27 = (EventMissionCondDetailMaster_o *)Instance;
      v28 = 0LL;
      v45 = (EventMissionCondDetailMaster_o *)Instance;
      while ( 1 )
      {
        if ( v28 >= (unsigned int)v26 )
        {
          v42 = sub_B2C460(Instance);
          sub_B2C400(v42, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_76;
        v29 = v25->m_Items[v28 + 1];
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      &entity,
                                      v29,
                                      (const MethodInfo_24E412C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_76;
          if ( LODWORD(entity->fields.age) )
            break;
        }
LABEL_74:
        LODWORD(v26) = v25->max_length;
        if ( (__int64)++v28 >= (int)v26 )
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
          v27 = v45;
          if ( !missionTargetState->fields.IsWeeklyMission )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v29,
                                          v44,
                                          v43,
                                          v32);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              missionTargetState->fields.IsWeeklyMission = 1;
              if ( !v24 )
                goto LABEL_46;
              goto LABEL_45;
            }
          }
        }
        else
        {
          v33 = age == 5;
          v27 = v45;
          if ( v33 && !missionTargetState->fields.IsLimitMission )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v29,
                                          v44,
                                          v43,
                                          v32);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              missionTargetState->fields.IsLimitMission = 1;
              if ( !v24 )
                goto LABEL_46;
              goto LABEL_45;
            }
          }
        }
        goto LABEL_44;
      }
      if ( age == 7 )
      {
        v27 = v45;
        if ( missionTargetState->fields.IsEventMission )
          goto LABEL_44;
        Instance = (DataManager_o *)ViewEnemyEntity__isRandomMissionGoing((ViewEnemyEntity_o *)Instance, v29, v31);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_44;
      }
      else
      {
        if ( age == 6 )
        {
          v27 = v45;
          if ( !missionTargetState->fields.IsCompleteMission )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v29,
                                          v44,
                                          v43,
                                          v32);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              missionTargetState->fields.IsCompleteMission = 1;
              if ( !v24 )
                goto LABEL_46;
              goto LABEL_45;
            }
          }
          goto LABEL_44;
        }
        v33 = age == 1;
        v27 = v45;
        if ( !v33
          || missionTargetState->fields.IsEventMission
          || (Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                            (ViewEnemyEntity_o *)Instance,
                                            v29,
                                            v44,
                                            v43,
                                            v32),
              ((unsigned __int8)Instance & 1) == 0) )
        {
LABEL_44:
          if ( !v24 )
          {
LABEL_46:
            v34 = 0;
            goto LABEL_47;
          }
LABEL_45:
          Instance = (DataManager_o *)QuestGroupMaster__GetEventId(v24, questId, 0LL);
          v34 = (int)Instance;
LABEL_47:
          if ( !entity || !v27 )
            goto LABEL_76;
          Instance = (DataManager_o *)EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
                                        v27,
                                        entity->fields.id,
                                        0LL);
          if ( Instance && SLODWORD(Instance->fields.datalist) >= 1 )
          {
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v47,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
              (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__);
            v49 = *(System_Collections_Generic_List_Enumerator_T__o *)v47;
            while ( 1 )
            {
              v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v49,
                      (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__);
              if ( !v35 )
                break;
              if ( !v49.fields.current )
                sub_B2C434(v35, v36);
              klass = (System_Collections_Generic_IEnumerable_TSource__o *)v49.fields.current[4].klass;
              if ( !klass
                || !klass[1].monitor
                || System_Linq_Enumerable__Contains_int_(
                     klass,
                     v34,
                     (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___) )
              {
                v38 = 1;
                goto LABEL_59;
              }
            }
            v38 = 0;
LABEL_59:
            *(_DWORD *)&v47[4 * v46 + 24] = 491;
            v39 = ++v48;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v49,
              (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
            if ( v39 )
            {
              v40 = v39 - 1;
              if ( *(_DWORD *)&v47[4 * v39 + 20] == 491 )
              {
                --v39;
                v48 = v40;
              }
            }
            if ( (v38 & 1) != 0 )
            {
LABEL_69:
              v46 = v39;
            }
            else
            {
              if ( !entity )
                goto LABEL_76;
              v46 = v39;
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
          v41 = *missionTargetState;
          if ( HIBYTE(*(unsigned int *)missionTargetState)
            && (*(_DWORD *)&v41 & 0xFF0000) != 0
            && missionTargetState->fields.IsEventMission
            && (*(_WORD *)&v41.fields.IsEventMission & 0xFF00) != 0 )
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
  __int64 v12; // x1
  int32_t v13; // w20
  bool v14; // w21
  clsQuestCheck_o *v15; // x20
  int32_t v16; // w0
  unsigned int v17; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  il2cpp_array_size_t max_length; // w8
  System_String_o *name; // x20
  __int64 v22; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418D2AA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v9);
    sub_B2C35C(&StringLiteral_9310/*"NONE"*/, v10);
    byte_418D2AA = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Master_WarQuestSelectionMaster = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  v13 = clsQuestCheck__mfGetQuestPhaseByQuestID(Master_WarQuestSelectionMaster, this->fields.questId, 0LL);
  Master_WarQuestSelectionMaster = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  v14 = clsQuestCheck__IsQuestClear(Master_WarQuestSelectionMaster, this->fields.questId, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
          &entity,
          this->fields.questId,
          v13 + !v14,
          0LL) )
    goto LABEL_22;
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_28;
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  v15 = Master_WarQuestSelectionMaster;
  if ( !Master_WarQuestSelectionMaster->fields.cQuestReleaseListP )
    goto LABEL_22;
  v16 = System_Array__IndexOf_int_(
          (System_Int32_array *)Master_WarQuestSelectionMaster,
          this->fields.npcSvtId,
          (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
  if ( (v16 & 0x80000000) != 0 )
    goto LABEL_22;
  v17 = v16;
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_28;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0LL);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != LODWORD(v15->fields.cQuestReleaseListP)) )
  {
LABEL_22:
    name = this->fields.name;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_9310/*"NONE"*/, 0LL) )
      return name;
    Master_WarQuestSelectionMaster = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Master_WarQuestSelectionMaster,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                              this->fields.svtId,
                                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Master_WarQuestSelectionMaster )
          return ServantEntity__getBattleName((ServantEntity_o *)Master_WarQuestSelectionMaster, 0, -1, 0LL);
      }
    }
LABEL_28:
    sub_B2C434(Master_WarQuestSelectionMaster, v12);
  }
  if ( v17 >= max_length )
  {
    v22 = sub_B2C460(EnemyInfoOverwriteNpcSvtNameList);
    sub_B2C400(v22, 0LL);
  }
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v17];
}


int32_t __fastcall ViewEnemyEntity__getEnemyNameEffect(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418D2AC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18368/*"enemyNameEffect"*/, method);
    byte_418D2AC = 1;
  }
  return ViewEnemyEntity__getScript(this, (System_String_o *)StringLiteral_18368/*"enemyNameEffect"*/, 0, v2);
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
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  int32_t result; // w0
  const MethodInfo *v13; // x0

  if ( (byte_418D2AD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    byte_418D2AD = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(Item, v10);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  sub_B2C728(Item);
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
  __int64 v9; // x1
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418D2A9 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, *(_QWORD *)&id);
    byte_418D2A9 = 1;
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
    sub_B2C434(UserId, v9);
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
  __int64 v6; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_418D2AB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, *(_QWORD *)&missionId);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    byte_418D2AB = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v6);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(Master_WarQuestSelectionMaster, missionId, 0LL);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0LL);
  return (char)MissionEntity;
}