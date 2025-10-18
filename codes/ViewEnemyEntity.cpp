void ViewEnemyEntity___cctor(const MethodInfo *method)
{
  if ( (byte_4C44080 & 1) == 0 )
  {
    sub_1C37058(&ViewEnemyEntity_TypeInfo);
    byte_4C44080 = 1;
  }
  ViewEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void ViewEnemyEntity___ctor(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C44073 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C44073 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
}


void ViewEnemyEntity___ctor_43257464(ViewEnemyEntity_o *this, ViewEnemyEntity_o *old, const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_String_o *name; // x1
  struct System_Int32_array *missionIds; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C44074 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C44074 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
  if ( !old )
    sub_1C372B4(v5);
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&old->fields.questId;
  name = old->fields.name;
  this->fields.name = name;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.name, (int32_t)name, v6, v7);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&old->fields.classId;
  *(_QWORD *)&this->fields.npcSvtId = *(_QWORD *)&old->fields.npcSvtId;
  missionIds = old->fields.missionIds;
  this->fields.missionIds = missionIds;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.missionIds, (int32_t)missionIds, v10, v11);
  this->fields.impossibleKill = old->fields.impossibleKill;
  enemyScript = old->fields.enemyScript;
  this->fields.enemyScript = enemyScript;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.enemyScript, (int32_t)enemyScript, v13, v14);
}


System_String_o *ViewEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  if ( (byte_4C44076 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C44076 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_30E5DE0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ViewEnemyEntity__CreatePrimaryKey(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_4C44075 & 1) == 0 )
  {
    sub_1C37058(&ViewEnemyEntity_TypeInfo);
    byte_4C44075 = 1;
  }
  questId = this->fields.questId;
  enemyId = this->fields.enemyId;
  if ( !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo);
  return ViewEnemyEntity__CreatePK(questId, enemyId, v2);
}


int32_t ViewEnemyEntity__GetColorType(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C4407F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18058/*"colorType"*/);
    byte_4C4407F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_18058/*"colorType"*/, 0, 0);
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
  if ( (byte_4C4407E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20925/*"isGrandSvt"*/);
    byte_4C4407E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_20925/*"isGrandSvt"*/, 0, 0) > 0;
}


bool ViewEnemyEntity__IsIconIdUnique(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  int32_t limitCount; // w8
  int32_t svtId; // w20
  ViewEnemyEntity_c *v5; // x0

  if ( (byte_4C44077 & 1) == 0 )
  {
    sub_1C37058(&ViewEnemyEntity_TypeInfo);
    byte_4C44077 = 1;
  }
  limitCount = this->fields.limitCount;
  if ( limitCount > 9 )
    return 0;
  svtId = this->fields.svtId;
  v5 = ViewEnemyEntity_TypeInfo;
  if ( !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo);
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
  DataManager_o *v8; // x22
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v10; // x24
  struct System_Int32_array *v11; // x23
  il2cpp_array_size_t max_length; // x8
  EventMissionCondDetailMaster_o *v13; // x25
  unsigned __int64 v14; // x20
  int32_t v15; // w22
  int monitor; // w26
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x4
  char v19; // w27
  char v20; // w26
  char v21; // w29
  char v22; // w28
  int32_t v23; // w22
  _BOOL8 v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  char v26; // w8
  bool v27; // w10
  bool v28; // w9
  bool v29; // w11
  Il2CppObject *v30; // [xsp+10h] [xbp-B0h]
  Il2CppObject *v31; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C44078 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C37058(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__get_Count__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C44078 = 1;
  }
  entity = 0;
  memset(&v34, 0, sizeof(v34));
  *missionTargetState = 0;
  missionIds = this->fields.missionIds;
  if ( missionIds && SLODWORD(missionIds->max_length) >= 1 && this->fields.impossibleKill <= 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v8 = Instance,
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionMaster___),
          v31 = DataManager__GetMasterData_object_(
                  v8,
                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventMissionMaster___),
          v30 = DataManager__GetMasterData_object_(
                  v8,
                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___),
          v10 = DataManager__GetMasterData_object_(
                  v8,
                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        v8,
                                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
          (v11 = this->fields.missionIds) == 0) )
    {
LABEL_57:
      sub_1C372B4(Instance);
    }
    max_length = v11->max_length;
    if ( (int)max_length >= 1 )
    {
      v13 = (EventMissionCondDetailMaster_o *)Instance;
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)max_length )
          sub_1C372BC(Instance);
        if ( !MasterData_object )
          goto LABEL_57;
        v15 = v11->m_Items[v14];
        Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      &entity,
                                      v15,
                                      (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_57;
          if ( LODWORD(entity[1].monitor) )
            break;
        }
LABEL_49:
        LODWORD(max_length) = v11->max_length;
        if ( (__int64)++v14 >= (int)max_length )
          return;
      }
      Instance = (DataManager_o *)EventMissionEntity__isNowMission((EventMissionEntity_o *)entity, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (DataManager_o *)entity;
        if ( !entity )
          goto LABEL_57;
        monitor = (int)entity[1].monitor;
        Instance = (DataManager_o *)EventMissionEntity__IsMasterMission((EventMissionEntity_o *)entity, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( monitor == 2 )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v15,
                                          (UserEventMissionMaster_o *)v31,
                                          (EventMissionConditionMaster_o *)v30,
                                          v18);
            v21 = (char)Instance;
            v20 = 0;
            v19 = 0;
LABEL_29:
            v22 = 0;
            if ( v10 )
            {
LABEL_30:
              Instance = (DataManager_o *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v10, questId, 0);
              v23 = (int)Instance;
              goto LABEL_36;
            }
LABEL_35:
            v23 = 0;
LABEL_36:
            if ( !entity || !v13 )
              goto LABEL_57;
            Instance = (DataManager_o *)EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
                                          v13,
                                          (int32_t)entity[1].klass,
                                          0);
            if ( Instance && SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
            {
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v33,
                (System_Collections_Generic_List_object__o *)Instance,
                (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__);
              v34 = v33;
              while ( 1 )
              {
                v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v34,
                        (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__);
                if ( !v24 )
                  break;
                if ( !v34.fields._current )
                  sub_1C372B4(v24);
                klass = (System_Collections_Generic_IEnumerable_TSource__o *)v34.fields._current[4].klass;
                if ( !klass
                  || !klass[1].monitor
                  || System_Linq_Enumerable__Contains_int_(
                       klass,
                       v23,
                       (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___) )
                {
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v34,
                    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
                  goto LABEL_47;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v34,
                (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
              if ( !entity )
                goto LABEL_57;
              v26 = 0;
              switch ( LODWORD(entity[1].monitor) )
              {
                case 1:
                case 7:
                  v22 = 0;
                  goto LABEL_47;
                case 2:
                  break;
                case 5:
                  v19 = 0;
                  goto LABEL_47;
                case 6:
                  v20 = 0;
                  goto LABEL_47;
                default:
                  goto LABEL_47;
              }
            }
            else
            {
LABEL_47:
              v26 = v21;
            }
            v27 = missionTargetState->fields.IsEventMission | v22 & 1;
            v28 = missionTargetState->fields.IsLimitMission | v19 & 1;
            v29 = missionTargetState->fields.IsCompleteMission | v20 & 1;
            missionTargetState->fields.IsWeeklyMission |= v26 & 1;
            missionTargetState->fields.IsEventMission = v27;
            missionTargetState->fields.IsLimitMission = v28;
            missionTargetState->fields.IsCompleteMission = v29;
            if ( (~*(_DWORD *)missionTargetState & 0x1010101) == 0 )
              return;
            goto LABEL_49;
          }
          if ( monitor == 5 )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v15,
                                          (UserEventMissionMaster_o *)v31,
                                          (EventMissionConditionMaster_o *)v30,
                                          v18);
            v19 = (char)Instance;
            v20 = 0;
LABEL_28:
            v21 = 0;
            goto LABEL_29;
          }
          goto LABEL_26;
        }
        switch ( monitor )
        {
          case 7:
            Instance = (DataManager_o *)ViewEnemyEntity__isRandomMissionGoing((ViewEnemyEntity_o *)Instance, v15, v17);
LABEL_34:
            v22 = (char)Instance;
            v20 = 0;
            v19 = 0;
            v21 = 0;
            if ( v10 )
              goto LABEL_30;
            goto LABEL_35;
          case 6:
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v15,
                                          (UserEventMissionMaster_o *)v31,
                                          (EventMissionConditionMaster_o *)v30,
                                          v18);
            v20 = (char)Instance;
            goto LABEL_27;
          case 1:
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v15,
                                          (UserEventMissionMaster_o *)v31,
                                          (EventMissionConditionMaster_o *)v30,
                                          v18);
            goto LABEL_34;
        }
      }
LABEL_26:
      v20 = 0;
LABEL_27:
      v19 = 0;
      goto LABEL_28;
    }
  }
}


System_String_o *ViewEnemyEntity__getBattleName(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  clsQuestCheck_o *Instance; // x0
  int32_t v4; // w20
  bool v5; // w21
  clsQuestCheck_o *v6; // x20
  int32_t v7; // w0
  unsigned int v8; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  unsigned int max_length; // w8
  System_String_o *name; // x20
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C4407A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_IndexOf_int___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&StringLiteral_9276/*"NONE"*/);
    byte_4C4407A = 1;
  }
  entity = 0;
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v4 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, this->fields.questId, 0);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v5 = clsQuestCheck__IsQuestClear(Instance, this->fields.questId, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_24;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, this->fields.questId, v4 + !v5, 0) )
    goto LABEL_18;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_24;
  Instance = (clsQuestCheck_o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0);
  if ( !Instance )
    goto LABEL_24;
  v6 = Instance;
  if ( !Instance->fields.cQuestReleaseListP )
    goto LABEL_18;
  v7 = System_Array__IndexOf_int_(
         (System_Int32_array *)Instance,
         this->fields.npcSvtId,
         (const MethodInfo_31EECD8 *)Method_System_Array_IndexOf_int___);
  if ( v7 < 0 )
    goto LABEL_18;
  v8 = v7;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_24;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != LODWORD(v6->fields.cQuestReleaseListP)) )
  {
LABEL_18:
    name = this->fields.name;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_9276/*"NONE"*/, 0) )
      return name;
    Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Instance = (clsQuestCheck_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        this->fields.svtId,
                                        (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Instance )
          return ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0);
      }
    }
LABEL_24:
    sub_1C372B4(Instance);
  }
  if ( v8 >= max_length )
    sub_1C372BC(EnemyInfoOverwriteNpcSvtNameList);
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v8];
}


int32_t ViewEnemyEntity__getEnemyNameEffect(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4407C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19038/*"enemyNameEffect"*/);
    byte_4C4407C = 1;
  }
  return ViewEnemyEntity__getScript(this, (System_String_o *)StringLiteral_19038/*"enemyNameEffect"*/, 0, v2);
}


int32_t ViewEnemyEntity__getScript(
        ViewEnemyEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  ViewEnemyEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4C4407D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&long_TypeInfo);
    byte_4C4407D = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C372B4(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
  sub_1C37574(Item);
  return ViewEnemyEntity__IsGrand(v12, v13);
}


bool ViewEnemyEntity__isMissionGoing(
        ViewEnemyEntity_o *this,
        int32_t id,
        UserEventMissionMaster_o *usrEvMissionMst,
        EventMissionConditionMaster_o *missionCondMst,
        const MethodInfo *method)
{
  NetworkManager_c *v8; // x0
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C44079 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C44079 = 1;
  }
  entity = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1C372B4(v8);
  }
  if ( !entity )
    goto LABEL_16;
  return entity->fields.missionProgressType == 3;
}


bool ViewEnemyEntity__isRandomMissionGoing(ViewEnemyEntity_o *this, int32_t missionId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4C4407B & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C4407B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(
                    (UserEventRandomMissionMaster_o *)Master_object,
                    missionId,
                    0);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0);
  return (char)MissionEntity;
}