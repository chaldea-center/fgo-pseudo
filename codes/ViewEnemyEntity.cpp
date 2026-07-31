void ViewEnemyEntity___cctor(const MethodInfo *method)
{
  if ( (byte_59397CC & 1) == 0 )
  {
    sub_21FFC50(&ViewEnemyEntity_TypeInfo);
    byte_59397CC = 1;
  }
  ViewEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void ViewEnemyEntity___ctor(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59397BF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59397BF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


void ViewEnemyEntity___ctor_50208952(ViewEnemyEntity_o *this, ViewEnemyEntity_o *old, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_String_o *name; // x1
  struct System_Int32_array *missionIds; // x1
  __int64 v15; // d0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  int32_t impossibleKill; // w8
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  if ( (byte_59397C0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59397C0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
  if ( !old )
    sub_21FFECC(v5, v6);
  name = old->fields.name;
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&old->fields.questId;
  this->fields.name = name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.name, (int32_t)name, v7, v8, v9, v10, v11, v12);
  missionIds = old->fields.missionIds;
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&old->fields.classId;
  v15 = *(_QWORD *)&old->fields.npcSvtId;
  this->fields.missionIds = missionIds;
  *(_QWORD *)&this->fields.npcSvtId = v15;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.missionIds,
    (int32_t)missionIds,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  enemyScript = old->fields.enemyScript;
  impossibleKill = old->fields.impossibleKill;
  this->fields.enemyScript = enemyScript;
  this->fields.impossibleKill = impossibleKill;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.enemyScript,
    (int32_t)enemyScript,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


System_String_o *ViewEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  if ( (byte_59397C2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59397C2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ViewEnemyEntity__CreatePrimaryKey(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_59397C1 & 1) == 0 )
  {
    sub_21FFC50(&ViewEnemyEntity_TypeInfo);
    byte_59397C1 = 1;
  }
  questId = this->fields.questId;
  enemyId = this->fields.enemyId;
  if ( !*(&ViewEnemyEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo, method);
  return ViewEnemyEntity__CreatePK(questId, enemyId, v2);
}


int32_t ViewEnemyEntity__GetColorType(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59397CB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18816/*"colorType"*/);
    byte_59397CB = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_18816/*"colorType"*/, 0, 0);
}


bool ViewEnemyEntity__IsAllEnableMissionTarget(
        ViewEnemyEntity_o *this,
        QuestInformationListViewItem_MissionTargetState_o missionTargetState,
        const MethodInfo *method)
{
  return (~*(_DWORD *)&missionTargetState & 0x1010101) == 0;
}


bool ViewEnemyEntity__IsGrand(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59397CA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21897/*"isGrandSvt"*/);
    byte_59397CA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_21897/*"isGrandSvt"*/, 0, 0) > 0;
}


bool ViewEnemyEntity__IsIconIdUnique(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  int32_t limitCount; // w8
  int32_t svtId; // w20
  ViewEnemyEntity_c *v5; // x0

  if ( (byte_59397C3 & 1) == 0 )
  {
    sub_21FFC50(&ViewEnemyEntity_TypeInfo);
    byte_59397C3 = 1;
  }
  limitCount = this->fields.limitCount;
  if ( limitCount > 9 )
    return 0;
  svtId = this->fields.svtId;
  v5 = ViewEnemyEntity_TypeInfo;
  if ( !*(&ViewEnemyEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo, method);
    v5 = ViewEnemyEntity_TypeInfo;
    limitCount = this->fields.limitCount;
  }
  return limitCount + v5->static_fields->SVT_ID_TO_ICON_ID * svtId != this->fields.iconId;
}


void ViewEnemyEntity__IsMissionTarget(
        ViewEnemyEntity_o *this,
        int32_t questId,
        QuestInformationListViewItem_MissionTargetState_o *missionTargetState,
        const MethodInfo *method)
{
  struct System_Int32_array *missionIds; // x8
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataManager_o *v9; // x22
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v11; // x24
  struct System_Int32_array *v12; // x23
  il2cpp_array_size_t max_length; // x8
  EventMissionCondDetailMaster_o *v14; // x25
  unsigned __int64 v15; // x20
  int32_t v16; // w22
  int monitor; // w26
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x4
  char v20; // w27
  char v21; // w26
  char v22; // w28
  char v23; // w29
  int32_t v24; // w22
  _BOOL8 v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  bool v28; // w9
  bool IsLimitMission; // w10
  bool IsCompleteMission; // w8
  int v31; // w8
  Il2CppObject *v32; // [xsp+0h] [xbp-B0h]
  Il2CppObject *v33; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_59397C4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__get_Count__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59397C4 = 1;
  }
  *missionTargetState = 0;
  missionIds = this->fields.missionIds;
  entity = 0;
  memset(&v36, 0, sizeof(v36));
  if ( missionIds && SLODWORD(missionIds->max_length) >= 1 && this->fields.impossibleKill <= 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v9 = Instance,
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionMaster___),
          v33 = DataManager__GetMasterData_object_(
                  v9,
                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventMissionMaster___),
          v32 = DataManager__GetMasterData_object_(
                  v9,
                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___),
          v11 = DataManager__GetMasterData_object_(
                  v9,
                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        v9,
                                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
          (v12 = this->fields.missionIds) == 0) )
    {
LABEL_63:
      sub_21FFECC(Instance, v8);
    }
    max_length = v12->max_length;
    if ( (int)max_length >= 1 )
    {
      v14 = (EventMissionCondDetailMaster_o *)Instance;
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)max_length )
          sub_21FFED4(Instance);
        if ( !MasterData_object )
          goto LABEL_63;
        v16 = v12->m_Items[v15];
        Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      &entity,
                                      v16,
                                      (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_63;
          if ( LODWORD(entity[1].monitor) )
            break;
        }
LABEL_48:
        LODWORD(max_length) = v12->max_length;
        if ( (__int64)++v15 >= (int)max_length )
          return;
      }
      Instance = (DataManager_o *)EventMissionEntity__isNowMission((EventMissionEntity_o *)entity, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (DataManager_o *)entity;
        if ( !entity )
          goto LABEL_63;
        monitor = (int)entity[1].monitor;
        Instance = (DataManager_o *)EventMissionEntity__IsMasterMission((EventMissionEntity_o *)entity, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( monitor == 2 )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v16,
                                          (UserEventMissionMaster_o *)v33,
                                          (EventMissionConditionMaster_o *)v32,
                                          v19);
            v22 = (char)Instance;
            v21 = 0;
            v20 = 0;
LABEL_29:
            v23 = 0;
            if ( v11 )
            {
LABEL_30:
              Instance = (DataManager_o *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v11, questId, 0);
              v24 = (int)Instance;
LABEL_36:
              if ( !entity || !v14 )
                goto LABEL_63;
              Instance = (DataManager_o *)EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
                                            v14,
                                            (int32_t)entity[1].klass,
                                            0);
              if ( !Instance || SLODWORD(Instance->fields.m_CancellationTokenSource) < 1 )
                goto LABEL_47;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v35,
                (System_Collections_Generic_List_object__o *)Instance,
                (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__);
              v36 = v35;
              v35.fields._list = 0;
              *(_QWORD *)&v35.fields._index = &v36;
              while ( 1 )
              {
                v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v36,
                        (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__);
                if ( !v25 )
                  break;
                if ( !v36.fields._current )
                  sub_21FFECC(v25, v26);
                klass = (System_Collections_Generic_IEnumerable_TSource__o *)v36.fields._current[4].klass;
                if ( !klass
                  || !klass[1].monitor
                  || System_Linq_Enumerable__Contains_int_(
                       klass,
                       v24,
                       (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___) )
                {
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v36,
                    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
                  goto LABEL_47;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v36,
                (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
              if ( !entity )
                goto LABEL_63;
              v31 = (int)entity[1].monitor;
              if ( v31 <= 4 )
              {
                if ( v31 != 1 )
                {
                  if ( v31 == 2 )
                    v22 = 0;
                  goto LABEL_47;
                }
              }
              else
              {
                if ( v31 == 5 )
                {
                  v20 = 0;
                  goto LABEL_47;
                }
                if ( v31 == 6 )
                {
                  v21 = 0;
                  goto LABEL_47;
                }
                if ( v31 != 7 )
                {
LABEL_47:
                  v28 = missionTargetState->fields.IsEventMission | v23 & 1;
                  IsLimitMission = missionTargetState->fields.IsLimitMission;
                  missionTargetState->fields.IsWeeklyMission |= v22 & 1;
                  IsCompleteMission = missionTargetState->fields.IsCompleteMission;
                  missionTargetState->fields.IsEventMission = v28;
                  missionTargetState->fields.IsLimitMission = IsLimitMission | v20 & 1;
                  missionTargetState->fields.IsCompleteMission = IsCompleteMission | v21 & 1;
                  if ( (~*(_DWORD *)missionTargetState & 0x1010101) == 0 )
                    return;
                  goto LABEL_48;
                }
              }
              v23 = 0;
              goto LABEL_47;
            }
LABEL_35:
            v24 = 0;
            goto LABEL_36;
          }
          if ( monitor == 5 )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v16,
                                          (UserEventMissionMaster_o *)v33,
                                          (EventMissionConditionMaster_o *)v32,
                                          v19);
            v20 = (char)Instance;
            v21 = 0;
LABEL_28:
            v22 = 0;
            goto LABEL_29;
          }
          goto LABEL_26;
        }
        switch ( monitor )
        {
          case 7:
            Instance = (DataManager_o *)ViewEnemyEntity__isRandomMissionGoing((ViewEnemyEntity_o *)Instance, v16, v18);
LABEL_34:
            v23 = (char)Instance;
            v21 = 0;
            v20 = 0;
            v22 = 0;
            if ( v11 )
              goto LABEL_30;
            goto LABEL_35;
          case 6:
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v16,
                                          (UserEventMissionMaster_o *)v33,
                                          (EventMissionConditionMaster_o *)v32,
                                          v19);
            v21 = (char)Instance;
            goto LABEL_27;
          case 1:
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v16,
                                          (UserEventMissionMaster_o *)v33,
                                          (EventMissionConditionMaster_o *)v32,
                                          v19);
            goto LABEL_34;
        }
      }
LABEL_26:
      v21 = 0;
LABEL_27:
      v20 = 0;
      goto LABEL_28;
    }
  }
}


System_String_o *ViewEnemyEntity__getBattleName(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  clsQuestCheck_o *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w20
  __int64 v6; // x1
  bool v7; // w21
  clsQuestCheck_o *v8; // x20
  int32_t v9; // w0
  unsigned int v10; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  unsigned int max_length; // w8
  System_String_o *name; // x20
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59397C6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_int___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_21FFC50(&StringLiteral_9648/*"NONE"*/);
    byte_59397C6 = 1;
  }
  entity = 0;
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v5 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, this->fields.questId, 0);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v7 = clsQuestCheck__IsQuestClear(Instance, this->fields.questId, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_24;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, this->fields.questId, v5 + !v7, 0) )
    goto LABEL_18;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_24;
  Instance = (clsQuestCheck_o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0);
  if ( !Instance )
    goto LABEL_24;
  v8 = Instance;
  if ( !Instance->fields.cQuestReleaseListP )
    goto LABEL_18;
  v9 = System_Array__IndexOf_int_(
         (System_Int32_array *)Instance,
         this->fields.npcSvtId,
         (const MethodInfo_39FAFC4 *)Method_System_Array_IndexOf_int___);
  if ( v9 < 0 )
    goto LABEL_18;
  v10 = v9;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_24;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != LODWORD(v8->fields.cQuestReleaseListP)) )
  {
LABEL_18:
    name = this->fields.name;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_9648/*"NONE"*/, 0) )
      return name;
    Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Instance = (clsQuestCheck_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        this->fields.svtId,
                                        (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Instance )
          return ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0);
      }
    }
LABEL_24:
    sub_21FFECC(Instance, v4);
  }
  if ( v10 >= max_length )
    sub_21FFED4(EnemyInfoOverwriteNpcSvtNameList);
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v10];
}


int32_t ViewEnemyEntity__getEnemyNameEffect(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_59397C8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19884/*"enemyNameEffect"*/);
    byte_59397C8 = 1;
  }
  return ViewEnemyEntity__getScript(this, (System_String_o *)StringLiteral_19884/*"enemyNameEffect"*/, 0, v2);
}


int32_t ViewEnemyEntity__getScript(
        ViewEnemyEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  ViewEnemyEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_59397C9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_59397C9 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_21FFECC(Item, v8);
  }
  if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, qword_594C090, v10);
  sub_220024C(Item, qword_594C090, v10);
  return ViewEnemyEntity__IsGrand(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
bool ViewEnemyEntity__isMissionGoing(
        ViewEnemyEntity_o *this,
        int32_t id,
        UserEventMissionMaster_o *usrEvMissionMst,
        EventMissionConditionMaster_o *missionCondMst,
        const MethodInfo *method)
{
  NetworkManager_c *v8; // x0
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59397C5 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59397C5 = 1;
  }
  entity = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&id);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&id);
    v8 = NetworkManager_TypeInfo;
  }
  if ( !usrEvMissionMst )
    goto LABEL_16;
  v8 = (NetworkManager_c *)UserEventMissionMaster__TryGetEntity(
                             usrEvMissionMst,
                             &entity,
                             v8->static_fields->userIdNumber,
                             id,
                             0);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    if ( missionCondMst )
      return EventMissionConditionMaster__IsMissionRunning(missionCondMst, id, 0);
LABEL_16:
    sub_21FFECC(v8, *(_QWORD *)&id);
  }
  if ( !entity )
    goto LABEL_16;
  return entity->fields.missionProgressType == 3;
}


// local variable allocation has failed, the output may be wrong!
bool ViewEnemyEntity__isRandomMissionGoing(ViewEnemyEntity_o *this, int32_t missionId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_59397C7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_59397C7 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&missionId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v5);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(
                    (UserEventRandomMissionMaster_o *)Master_object,
                    missionId,
                    0);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0);
  return (char)MissionEntity;
}