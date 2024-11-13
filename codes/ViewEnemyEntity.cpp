void __fastcall ViewEnemyEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B17107 & 1) == 0 )
  {
    sub_1BCA7E0(&ViewEnemyEntity_TypeInfo, v1, v2);
    byte_4B17107 = 1;
  }
  ViewEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void __fastcall ViewEnemyEntity___ctor(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B170FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B170FC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ViewEnemyEntity___ctor_41013736(
        ViewEnemyEntity_o *this,
        ViewEnemyEntity_o *old,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_String_o *name; // x1
  struct System_Int32_array *missionIds; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B170FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, old, method);
    byte_4B170FD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  if ( !old )
    sub_1BCAA3C(v5, v6);
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&old->fields.questId;
  name = old->fields.name;
  this->fields.name = name;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.name, (int64_t)name, v7, v8, v9, v10, v11, v12);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&old->fields.classId;
  *(_QWORD *)&this->fields.npcSvtId = *(_QWORD *)&old->fields.npcSvtId;
  missionIds = old->fields.missionIds;
  this->fields.missionIds = missionIds;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.missionIds, (int64_t)missionIds, v15, v16, v17, v18, v19, v20);
  this->fields.impossibleKill = old->fields.impossibleKill;
  enemyScript = old->fields.enemyScript;
  this->fields.enemyScript = enemyScript;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.enemyScript,
    (int64_t)enemyScript,
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
  if ( (byte_4B170FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&enemyId, method);
    byte_4B170FF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ViewEnemyEntity__CreatePrimaryKey(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_4B170FE & 1) == 0 )
  {
    sub_1BCA7E0(&ViewEnemyEntity_TypeInfo, method, v2);
    byte_4B170FE = 1;
  }
  questId = this->fields.questId;
  enemyId = this->fields.enemyId;
  if ( !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo, method);
  return ViewEnemyEntity__CreatePK(questId, enemyId, v2);
}


bool __fastcall ViewEnemyEntity__IsAllEnableMissionTarget(
        ViewEnemyEntity_o *this,
        QuestInformationListViewItem_MissionTargetState_o missionTargetState,
        const MethodInfo *method)
{
  return (~*(_DWORD *)&missionTargetState & 0x1010101) == 0LL;
}


bool __fastcall ViewEnemyEntity__IsIconIdUnique(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t limitCount; // w8
  int32_t svtId; // w20
  ViewEnemyEntity_c *v6; // x0

  if ( (byte_4B17100 & 1) == 0 )
  {
    sub_1BCA7E0(&ViewEnemyEntity_TypeInfo, method, v2);
    byte_4B17100 = 1;
  }
  limitCount = this->fields.limitCount;
  if ( limitCount > 9 )
    return 0;
  svtId = this->fields.svtId;
  v6 = ViewEnemyEntity_TypeInfo;
  if ( !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo, method);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  struct System_Int32_array *missionIds; // x8
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  DataManager_o *v33; // x22
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v35; // x24
  struct System_Int32_array *v36; // x23
  __int64 v37; // x8
  EventMissionCondDetailMaster_o *v38; // x25
  unsigned __int64 v39; // x20
  int32_t v40; // w22
  int monitor; // w26
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x4
  char v44; // w27
  char v45; // w26
  char v46; // w29
  char v47; // w28
  int32_t v48; // w22
  _BOOL8 v49; // x0
  __int64 v50; // x1
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  char v52; // w8
  bool v53; // w10
  bool v54; // w9
  bool v55; // w11
  Il2CppObject *v56; // [xsp+10h] [xbp-B0h]
  Il2CppObject *v57; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B17101 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_EventMissionCondDetailMaster___,
      *(_QWORD *)&questId,
      missionTargetState);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__, v20, v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__get_Current__,
      v22,
      v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__get_Count__, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    byte_4B17101 = 1;
  }
  entity = 0LL;
  memset(&v60, 0, sizeof(v60));
  *missionTargetState = 0;
  missionIds = this->fields.missionIds;
  if ( missionIds && (int)missionIds->max_length >= 1 && this->fields.impossibleKill <= 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v33 = Instance,
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___),
          v57 = DataManager__GetMasterData_object_(
                  v33,
                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___),
          v56 = DataManager__GetMasterData_object_(
                  v33,
                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___),
          v35 = DataManager__GetMasterData_object_(
                  v33,
                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        v33,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
          (v36 = this->fields.missionIds) == 0LL) )
    {
LABEL_57:
      sub_1BCAA3C(Instance, v32);
    }
    v37 = *(_QWORD *)&v36->max_length;
    if ( (int)v37 >= 1 )
    {
      v38 = (EventMissionCondDetailMaster_o *)Instance;
      v39 = 0LL;
      while ( 1 )
      {
        if ( v39 >= (unsigned int)v37 )
          sub_1BCAA44(Instance, v32);
        if ( !MasterData_object )
          goto LABEL_57;
        v40 = v36->m_Items[v39 + 1];
        Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      &entity,
                                      v40,
                                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_57;
          if ( LODWORD(entity[1].monitor) )
            break;
        }
LABEL_49:
        LODWORD(v37) = v36->max_length;
        if ( (__int64)++v39 >= (int)v37 )
          return;
      }
      Instance = (DataManager_o *)EventMissionEntity__isNowMission((EventMissionEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (DataManager_o *)entity;
        if ( !entity )
          goto LABEL_57;
        monitor = (int)entity[1].monitor;
        Instance = (DataManager_o *)EventMissionEntity__IsMasterMission((EventMissionEntity_o *)entity, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( monitor == 2 )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v40,
                                          (UserEventMissionMaster_o *)v57,
                                          (EventMissionConditionMaster_o *)v56,
                                          v43);
            v46 = (char)Instance;
            v45 = 0;
            v44 = 0;
LABEL_29:
            v47 = 0;
            if ( v35 )
            {
LABEL_30:
              Instance = (DataManager_o *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v35, questId, 0LL);
              v48 = (int)Instance;
              goto LABEL_36;
            }
LABEL_35:
            v48 = 0;
LABEL_36:
            if ( !entity || !v38 )
              goto LABEL_57;
            Instance = (DataManager_o *)EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
                                          v38,
                                          (int32_t)entity[1].klass,
                                          0LL);
            if ( Instance && SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
            {
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v59,
                (System_Collections_Generic_List_object__o *)Instance,
                (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__);
              v60 = v59;
              while ( 1 )
              {
                v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v60,
                        (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__);
                if ( !v49 )
                  break;
                if ( !v60.fields._current )
                  sub_1BCAA3C(v49, v50);
                klass = (System_Collections_Generic_IEnumerable_TSource__o *)v60.fields._current[4].klass;
                if ( !klass
                  || !klass[1].monitor
                  || System_Linq_Enumerable__Contains_int_(
                       klass,
                       v48,
                       (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
                {
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v60,
                    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
                  goto LABEL_47;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v60,
                (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
              if ( !entity )
                goto LABEL_57;
              v52 = 0;
              switch ( LODWORD(entity[1].monitor) )
              {
                case 1:
                case 7:
                  v47 = 0;
                  goto LABEL_47;
                case 2:
                  break;
                case 5:
                  v44 = 0;
                  goto LABEL_47;
                case 6:
                  v45 = 0;
                  goto LABEL_47;
                default:
                  goto LABEL_47;
              }
            }
            else
            {
LABEL_47:
              v52 = v46;
            }
            v53 = missionTargetState->fields.IsEventMission | v47 & 1;
            v54 = missionTargetState->fields.IsLimitMission | v44 & 1;
            v55 = missionTargetState->fields.IsCompleteMission | v45 & 1;
            missionTargetState->fields.IsWeeklyMission |= v52 & 1;
            missionTargetState->fields.IsEventMission = v53;
            missionTargetState->fields.IsLimitMission = v54;
            missionTargetState->fields.IsCompleteMission = v55;
            if ( (~*(_DWORD *)missionTargetState & 0x1010101) == 0 )
              return;
            goto LABEL_49;
          }
          if ( monitor == 5 )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v40,
                                          (UserEventMissionMaster_o *)v57,
                                          (EventMissionConditionMaster_o *)v56,
                                          v43);
            v44 = (char)Instance;
            v45 = 0;
LABEL_28:
            v46 = 0;
            goto LABEL_29;
          }
          goto LABEL_26;
        }
        switch ( monitor )
        {
          case 7:
            Instance = (DataManager_o *)ViewEnemyEntity__isRandomMissionGoing((ViewEnemyEntity_o *)Instance, v40, v42);
LABEL_34:
            v47 = (char)Instance;
            v45 = 0;
            v44 = 0;
            v46 = 0;
            if ( v35 )
              goto LABEL_30;
            goto LABEL_35;
          case 6:
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v40,
                                          (UserEventMissionMaster_o *)v57,
                                          (EventMissionConditionMaster_o *)v56,
                                          v43);
            v45 = (char)Instance;
            goto LABEL_27;
          case 1:
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v40,
                                          (UserEventMissionMaster_o *)v57,
                                          (EventMissionConditionMaster_o *)v56,
                                          v43);
            goto LABEL_34;
        }
      }
LABEL_26:
      v45 = 0;
LABEL_27:
      v44 = 0;
      goto LABEL_28;
    }
  }
}


System_String_o *__fastcall ViewEnemyEntity__getBattleName(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  clsQuestCheck_o *Instance; // x0
  __int64 v19; // x1
  int32_t v20; // w20
  __int64 v21; // x1
  bool v22; // w21
  clsQuestCheck_o *v23; // x20
  int32_t v24; // w0
  unsigned int v25; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  __int64 v27; // x1
  il2cpp_array_size_t max_length; // w8
  System_String_o *name; // x20
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B17103 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_9382/*"NONE"*/, v16, v17);
    byte_4B17103 = 1;
  }
  entity = 0LL;
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v20 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, this->fields.questId, 0LL);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v22 = clsQuestCheck__IsQuestClear(Instance, this->fields.questId, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_24;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, this->fields.questId, v20 + !v22, 0LL) )
    goto LABEL_18;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_24;
  Instance = (clsQuestCheck_o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0LL);
  if ( !Instance )
    goto LABEL_24;
  v23 = Instance;
  if ( !Instance->fields.cQuestReleaseListP )
    goto LABEL_18;
  v24 = System_Array__IndexOf_int_(
          (System_Int32_array *)Instance,
          this->fields.npcSvtId,
          (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
  if ( (v24 & 0x80000000) != 0 )
    goto LABEL_18;
  v25 = v24;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_24;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0LL);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != LODWORD(v23->fields.cQuestReleaseListP)) )
  {
LABEL_18:
    name = this->fields.name;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_9382/*"NONE"*/, 0LL) )
      return name;
    Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Instance = (clsQuestCheck_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        this->fields.svtId,
                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Instance )
          return ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
      }
    }
LABEL_24:
    sub_1BCAA3C(Instance, v19);
  }
  if ( v25 >= max_length )
    sub_1BCAA44(EnemyInfoOverwriteNpcSvtNameList, v27);
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v25];
}


int32_t __fastcall ViewEnemyEntity__getEnemyNameEffect(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B17105 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19222/*"enemyNameEffect"*/, method, v2);
    byte_4B17105 = 1;
  }
  return ViewEnemyEntity__getScript(this, (System_String_o *)StringLiteral_19222/*"enemyNameEffect"*/, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ViewEnemyEntity__getScript(
        ViewEnemyEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  int32_t result; // w0
  const MethodInfo *v17; // x0

  v4 = defVal;
  if ( (byte_4B17106 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, *(_QWORD *)&defVal);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&long_TypeInfo, v9, v10);
    byte_4B17106 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(Item, v12);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v14, v15);
  sub_1BCACFC(Item);
  ViewEnemyEntity___cctor(v17);
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
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B17102 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, *(_QWORD *)&id, usrEvMissionMst);
    byte_4B17102 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&id);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !usrEvMissionMst )
    goto LABEL_12;
  UserId = UserEventMissionMaster__TryGetEntity(usrEvMissionMst, &entity, UserId, id, 0LL);
  if ( (UserId & 1) == 0 )
  {
    if ( missionCondMst )
      return EventMissionConditionMaster__IsMissionRunning(missionCondMst, id, 0LL);
LABEL_12:
    sub_1BCAA3C(UserId, v9);
  }
  if ( !entity )
    goto LABEL_12;
  return entity->fields.missionProgressType == 3;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ViewEnemyEntity__isRandomMissionGoing(
        ViewEnemyEntity_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4B17104 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, *(_QWORD *)&missionId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B17104 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&missionId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v7);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(
                    (UserEventRandomMissionMaster_o *)Master_object,
                    missionId,
                    0LL);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0LL);
  return (char)MissionEntity;
}