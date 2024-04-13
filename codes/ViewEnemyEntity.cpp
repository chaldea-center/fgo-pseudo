void __fastcall ViewEnemyEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE6E7 & 1) == 0 )
  {
    sub_B5D5C4(&ViewEnemyEntity_TypeInfo, v1, v2, v3);
    byte_42EE6E7 = 1;
  }
  ViewEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void __fastcall ViewEnemyEntity___ctor(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE6DC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EE6DC = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ViewEnemyEntity___ctor_35264848(
        ViewEnemyEntity_o *this,
        ViewEnemyEntity_o *old,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_String_o *name; // x1
  struct System_Int32_array *missionIds; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42EE6DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)old, (_DWORD)method, v3);
    byte_42EE6DD = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  if ( !old )
    sub_B5D69C(v6, v7);
  this->fields.questId = old->fields.questId;
  this->fields.enemyId = old->fields.enemyId;
  name = old->fields.name;
  this->fields.name = name;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.name,
    (System_Int32_array **)name,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.classId = old->fields.classId;
  this->fields.svtId = old->fields.svtId;
  this->fields.limitCount = old->fields.limitCount;
  this->fields.iconId = old->fields.iconId;
  this->fields.npcSvtId = old->fields.npcSvtId;
  this->fields.displayType = old->fields.displayType;
  missionIds = old->fields.missionIds;
  this->fields.missionIds = missionIds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.missionIds,
    (System_Int32_array **)missionIds,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.impossibleKill = old->fields.impossibleKill;
  enemyScript = old->fields.enemyScript;
  this->fields.enemyScript = enemyScript;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.enemyScript,
    (System_Int32_array **)enemyScript,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


System_String_o *__fastcall ViewEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EE6DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, enemyId, (_DWORD)method, v3);
    byte_42EE6DF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ViewEnemyEntity__CreatePrimaryKey(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_42EE6DE & 1) == 0 )
  {
    sub_B5D5C4(&ViewEnemyEntity_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EE6DE = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int32_t limitCount; // w8
  int32_t svtId; // w20
  ViewEnemyEntity_c *v8; // x0

  if ( (byte_42EE6E0 & 1) == 0 )
  {
    sub_B5D5C4(&ViewEnemyEntity_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE6E0 = 1;
  }
  limitCount = this->fields.limitCount;
  if ( limitCount > 9 )
    return 0;
  svtId = this->fields.svtId;
  v8 = ViewEnemyEntity_TypeInfo;
  if ( (BYTE3(ViewEnemyEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo);
    v8 = ViewEnemyEntity_TypeInfo;
    limitCount = this->fields.limitCount;
  }
  return limitCount + v8->static_fields->SVT_ID_TO_ICON_ID * svtId != this->fields.iconId;
}


void __fastcall ViewEnemyEntity__IsMissionTarget(
        ViewEnemyEntity_o *this,
        int32_t questId,
        QuestInformationListViewItem_MissionTargetState_o *missionTargetState,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  struct System_Int32_array *missionIds; // x8
  DataManager_o *Instance; // x0
  __int64 v45; // x1
  DataManager_o *v46; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  QuestGroupMaster_o *v48; // x24
  struct System_Int32_array *v49; // x27
  __int64 v50; // x8
  EventMissionCondDetailMaster_o *v51; // x25
  unsigned __int64 v52; // x28
  int32_t v53; // w26
  int age; // w25
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x4
  bool v57; // zf
  int32_t v58; // w26
  _BOOL8 v59; // x0
  __int64 v60; // x1
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  char v62; // w26
  int v63; // w20
  int v64; // w8
  QuestInformationListViewItem_MissionTargetState_o v65; // w8
  __int64 v66; // x0
  EventMissionConditionMaster_o *v67; // [xsp+8h] [xbp-B8h]
  UserEventMissionMaster_o *v68; // [xsp+10h] [xbp-B0h]
  EventMissionCondDetailMaster_o *v69; // [xsp+18h] [xbp-A8h]
  int v70; // [xsp+24h] [xbp-9Ch]
  _BYTE v71[32]; // [xsp+28h] [xbp-98h] BYREF
  int v72; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42EE6E1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_EventMissionCondDetailMaster___,
      questId,
      (_DWORD)missionTargetState,
      method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v22, v23, v24);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__,
      v25,
      v26,
      v27);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__,
      v28,
      v29,
      v30);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__get_Current__,
      v31,
      v32,
      v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__get_Count__, v37, v38, v39);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41, v42);
    byte_42EE6E1 = 1;
  }
  entity = 0LL;
  memset(&v73, 0, sizeof(v73));
  v72 = 0;
  *missionTargetState = 0;
  missionIds = this->fields.missionIds;
  if ( missionIds && (int)missionIds->max_length >= 1 && this->fields.impossibleKill <= 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v46 = Instance,
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                Instance,
                                                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___),
          v68 = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              v46,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___),
          v67 = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   v46,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___),
          v48 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        v46,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___),
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        v46,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
          (v49 = this->fields.missionIds) == 0LL) )
    {
LABEL_76:
      sub_B5D69C(Instance, v45);
    }
    v50 = *(_QWORD *)&v49->max_length;
    if ( (int)v50 >= 1 )
    {
      v70 = 0;
      v51 = (EventMissionCondDetailMaster_o *)Instance;
      v52 = 0LL;
      v69 = (EventMissionCondDetailMaster_o *)Instance;
      while ( 1 )
      {
        if ( v52 >= (unsigned int)v50 )
        {
          v66 = sub_B5D6C8(Instance);
          sub_B5D668(v66, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_76;
        v53 = v49->m_Items[v52 + 1];
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      &entity,
                                      v53,
                                      (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_76;
          if ( LODWORD(entity->fields.age) )
            break;
        }
LABEL_74:
        LODWORD(v50) = v49->max_length;
        if ( (__int64)++v52 >= (int)v50 )
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
          v51 = v69;
          if ( !missionTargetState->fields.IsWeeklyMission )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v53,
                                          v68,
                                          v67,
                                          v56);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              missionTargetState->fields.IsWeeklyMission = 1;
              if ( !v48 )
                goto LABEL_46;
              goto LABEL_45;
            }
          }
        }
        else
        {
          v57 = age == 5;
          v51 = v69;
          if ( v57 && !missionTargetState->fields.IsLimitMission )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v53,
                                          v68,
                                          v67,
                                          v56);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              missionTargetState->fields.IsLimitMission = 1;
              if ( !v48 )
                goto LABEL_46;
              goto LABEL_45;
            }
          }
        }
        goto LABEL_44;
      }
      if ( age == 7 )
      {
        v51 = v69;
        if ( missionTargetState->fields.IsEventMission )
          goto LABEL_44;
        Instance = (DataManager_o *)ViewEnemyEntity__isRandomMissionGoing((ViewEnemyEntity_o *)Instance, v53, v55);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_44;
      }
      else
      {
        if ( age == 6 )
        {
          v51 = v69;
          if ( !missionTargetState->fields.IsCompleteMission )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v53,
                                          v68,
                                          v67,
                                          v56);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              missionTargetState->fields.IsCompleteMission = 1;
              if ( !v48 )
                goto LABEL_46;
              goto LABEL_45;
            }
          }
          goto LABEL_44;
        }
        v57 = age == 1;
        v51 = v69;
        if ( !v57
          || missionTargetState->fields.IsEventMission
          || (Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                            (ViewEnemyEntity_o *)Instance,
                                            v53,
                                            v68,
                                            v67,
                                            v56),
              ((unsigned __int8)Instance & 1) == 0) )
        {
LABEL_44:
          if ( !v48 )
          {
LABEL_46:
            v58 = 0;
            goto LABEL_47;
          }
LABEL_45:
          Instance = (DataManager_o *)QuestGroupMaster__GetEventId(v48, questId, 0LL);
          v58 = (int)Instance;
LABEL_47:
          if ( !entity || !v51 )
            goto LABEL_76;
          Instance = (DataManager_o *)EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
                                        v51,
                                        entity->fields.id,
                                        0LL);
          if ( Instance && SLODWORD(Instance->fields.datalist) >= 1 )
          {
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v71,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
              (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__);
            v73 = *(System_Collections_Generic_List_Enumerator_T__o *)v71;
            while ( 1 )
            {
              v59 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v73,
                      (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__);
              if ( !v59 )
                break;
              if ( !v73.fields.current )
                sub_B5D69C(v59, v60);
              klass = (System_Collections_Generic_IEnumerable_TSource__o *)v73.fields.current[4].klass;
              if ( !klass
                || !klass[1].monitor
                || System_Linq_Enumerable__Contains_int_(
                     klass,
                     v58,
                     (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___) )
              {
                v62 = 1;
                goto LABEL_59;
              }
            }
            v62 = 0;
LABEL_59:
            *(_DWORD *)&v71[4 * v70 + 24] = 491;
            v63 = ++v72;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v73,
              (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
            if ( v63 )
            {
              v64 = v63 - 1;
              if ( *(_DWORD *)&v71[4 * v63 + 20] == 491 )
              {
                --v63;
                v72 = v64;
              }
            }
            if ( (v62 & 1) != 0 )
            {
LABEL_69:
              v70 = v63;
            }
            else
            {
              if ( !entity )
                goto LABEL_76;
              v70 = v63;
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
          v65 = *missionTargetState;
          if ( HIBYTE(*(unsigned int *)missionTargetState)
            && (*(_DWORD *)&v65 & 0xFF0000) != 0
            && missionTargetState->fields.IsEventMission
            && (*(_WORD *)&v65.fields.IsEventMission & 0xFF00) != 0 )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  clsQuestCheck_o *Master_WarQuestSelectionMaster; // x0
  __int64 v30; // x1
  int32_t v31; // w20
  bool v32; // w21
  clsQuestCheck_o *v33; // x20
  int32_t v34; // w0
  unsigned int v35; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  il2cpp_array_size_t max_length; // w8
  System_String_o *name; // x20
  __int64 v40; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE6E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_9405/*"NONE"*/, v26, v27, v28);
    byte_42EE6E3 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Master_WarQuestSelectionMaster = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  v31 = clsQuestCheck__mfGetQuestPhaseByQuestID(Master_WarQuestSelectionMaster, this->fields.questId, 0LL);
  Master_WarQuestSelectionMaster = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  v32 = clsQuestCheck__IsQuestClear(Master_WarQuestSelectionMaster, this->fields.questId, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
          &entity,
          this->fields.questId,
          v31 + !v32,
          0LL) )
    goto LABEL_22;
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_28;
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  v33 = Master_WarQuestSelectionMaster;
  if ( !Master_WarQuestSelectionMaster->fields.cQuestReleaseListP )
    goto LABEL_22;
  v34 = System_Array__IndexOf_int_(
          (System_Int32_array *)Master_WarQuestSelectionMaster,
          this->fields.npcSvtId,
          (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
  if ( (v34 & 0x80000000) != 0 )
    goto LABEL_22;
  v35 = v34;
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_28;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0LL);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != LODWORD(v33->fields.cQuestReleaseListP)) )
  {
LABEL_22:
    name = this->fields.name;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_9405/*"NONE"*/, 0LL) )
      return name;
    Master_WarQuestSelectionMaster = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Master_WarQuestSelectionMaster,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                              this->fields.svtId,
                                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Master_WarQuestSelectionMaster )
          return ServantEntity__getBattleName((ServantEntity_o *)Master_WarQuestSelectionMaster, 0, -1, 0LL);
      }
    }
LABEL_28:
    sub_B5D69C(Master_WarQuestSelectionMaster, v30);
  }
  if ( v35 >= max_length )
  {
    v40 = sub_B5D6C8(EnemyInfoOverwriteNpcSvtNameList);
    sub_B5D668(v40, 0LL);
  }
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v35];
}


int32_t __fastcall ViewEnemyEntity__getEnemyNameEffect(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EE6E5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18597/*"enemyNameEffect"*/, (_DWORD)method, v2, v3);
    byte_42EE6E5 = 1;
  }
  return ViewEnemyEntity__getScript(this, (System_String_o *)StringLiteral_18597/*"enemyNameEffect"*/, 0, v3);
}


int32_t __fastcall ViewEnemyEntity__getScript(
        ViewEnemyEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  int32_t result; // w0
  const MethodInfo *v17; // x0

  v4 = defVal;
  if ( (byte_42EE6E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)key, defVal, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    sub_B5D5C4(&long_TypeInfo, v10, v11, v12);
    byte_42EE6E6 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(Item, v14);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  sub_B5D990(Item);
  ViewEnemyEntity___cctor(v17);
  return result;
}


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

  if ( (byte_42EE6E2 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, id, (_DWORD)usrEvMissionMst, missionCondMst);
    byte_42EE6E2 = 1;
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
    sub_B5D69C(UserId, v9);
  }
  if ( !entity )
    goto LABEL_13;
  return entity->fields.missionProgressType == 3;
}


bool __fastcall ViewEnemyEntity__isRandomMissionGoing(
        ViewEnemyEntity_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_42EE6E4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, missionId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42EE6E4 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(Master_WarQuestSelectionMaster, missionId, 0LL);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0LL);
  return (char)MissionEntity;
}