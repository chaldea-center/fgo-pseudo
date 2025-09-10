void ViewEnemyEntity___cctor(const MethodInfo *method)
{
  if ( (byte_4C28383 & 1) == 0 )
  {
    sub_1C2D490(&ViewEnemyEntity_TypeInfo);
    byte_4C28383 = 1;
  }
  ViewEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void ViewEnemyEntity___ctor(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C28376 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C28376 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


void ViewEnemyEntity___ctor_43022400(ViewEnemyEntity_o *this, ViewEnemyEntity_o *old, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_String_o *name; // x1
  struct System_Int32_array *missionIds; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C28377 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C28377 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
  if ( !old )
    sub_1C2D6EC(v5, v6);
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&old->fields.questId;
  name = old->fields.name;
  this->fields.name = name;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.name, (int32_t)name, v7, v8);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&old->fields.classId;
  *(_QWORD *)&this->fields.npcSvtId = *(_QWORD *)&old->fields.npcSvtId;
  missionIds = old->fields.missionIds;
  this->fields.missionIds = missionIds;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.missionIds, (int32_t)missionIds, v11, v12);
  this->fields.impossibleKill = old->fields.impossibleKill;
  enemyScript = old->fields.enemyScript;
  this->fields.enemyScript = enemyScript;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.enemyScript, (int32_t)enemyScript, v14, v15);
}


System_String_o *ViewEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  if ( (byte_4C28379 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C28379 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ViewEnemyEntity__CreatePrimaryKey(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_4C28378 & 1) == 0 )
  {
    sub_1C2D490(&ViewEnemyEntity_TypeInfo);
    byte_4C28378 = 1;
  }
  questId = this->fields.questId;
  enemyId = this->fields.enemyId;
  if ( !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo);
  return ViewEnemyEntity__CreatePK(questId, enemyId, v2);
}


int32_t ViewEnemyEntity__GetColorType(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C28382 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18052/*"colorType"*/);
    byte_4C28382 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_18052/*"colorType"*/, 0, 0);
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
  if ( (byte_4C28381 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20910/*"isGrandSvt"*/);
    byte_4C28381 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_20910/*"isGrandSvt"*/, 0, 0) > 0;
}


bool ViewEnemyEntity__IsIconIdUnique(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  int32_t limitCount; // w8
  int32_t svtId; // w20
  ViewEnemyEntity_c *v5; // x0

  if ( (byte_4C2837A & 1) == 0 )
  {
    sub_1C2D490(&ViewEnemyEntity_TypeInfo);
    byte_4C2837A = 1;
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
  __int64 v8; // x1
  DataManager_o *v9; // x22
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v11; // x24
  __int64 v12; // x2
  struct System_Int32_array *v13; // x23
  il2cpp_array_size_t max_length; // x8
  EventMissionCondDetailMaster_o *v15; // x25
  unsigned __int64 v16; // x20
  int32_t v17; // w22
  int monitor; // w26
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x4
  char v21; // w27
  char v22; // w26
  char v23; // w29
  char v24; // w28
  int32_t v25; // w22
  _BOOL8 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  char v29; // w8
  bool v30; // w10
  bool v31; // w9
  bool v32; // w11
  Il2CppObject *v33; // [xsp+10h] [xbp-B0h]
  Il2CppObject *v34; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C2837B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__get_Count__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2837B = 1;
  }
  entity = 0;
  memset(&v37, 0, sizeof(v37));
  *missionTargetState = 0;
  missionIds = this->fields.missionIds;
  if ( missionIds && SLODWORD(missionIds->max_length) >= 1 && this->fields.impossibleKill <= 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v9 = Instance,
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionMaster___),
          v34 = DataManager__GetMasterData_object_(
                  v9,
                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventMissionMaster___),
          v33 = DataManager__GetMasterData_object_(
                  v9,
                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___),
          v11 = DataManager__GetMasterData_object_(
                  v9,
                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        v9,
                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
          (v13 = this->fields.missionIds) == 0) )
    {
LABEL_57:
      sub_1C2D6EC(Instance, v8);
    }
    max_length = v13->max_length;
    if ( (int)max_length >= 1 )
    {
      v15 = (EventMissionCondDetailMaster_o *)Instance;
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= (unsigned int)max_length )
          sub_1C2D6F4(Instance, v8, v12);
        if ( !MasterData_object )
          goto LABEL_57;
        v17 = v13->m_Items[v16];
        Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      &entity,
                                      v17,
                                      (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_57;
          if ( LODWORD(entity[1].monitor) )
            break;
        }
LABEL_49:
        LODWORD(max_length) = v13->max_length;
        if ( (__int64)++v16 >= (int)max_length )
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
                                          v17,
                                          (UserEventMissionMaster_o *)v34,
                                          (EventMissionConditionMaster_o *)v33,
                                          v20);
            v23 = (char)Instance;
            v22 = 0;
            v21 = 0;
LABEL_29:
            v24 = 0;
            if ( v11 )
            {
LABEL_30:
              Instance = (DataManager_o *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v11, questId, 0);
              v25 = (int)Instance;
              goto LABEL_36;
            }
LABEL_35:
            v25 = 0;
LABEL_36:
            if ( !entity || !v15 )
              goto LABEL_57;
            Instance = (DataManager_o *)EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
                                          v15,
                                          (int32_t)entity[1].klass,
                                          0);
            if ( Instance && SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
            {
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v36,
                (System_Collections_Generic_List_object__o *)Instance,
                (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__);
              v37 = v36;
              while ( 1 )
              {
                v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v37,
                        (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__);
                if ( !v26 )
                  break;
                if ( !v37.fields._current )
                  sub_1C2D6EC(v26, v27);
                klass = (System_Collections_Generic_IEnumerable_TSource__o *)v37.fields._current[4].klass;
                if ( !klass
                  || !klass[1].monitor
                  || System_Linq_Enumerable__Contains_int_(
                       klass,
                       v25,
                       (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___) )
                {
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v37,
                    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
                  goto LABEL_47;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v37,
                (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
              if ( !entity )
                goto LABEL_57;
              v29 = 0;
              switch ( LODWORD(entity[1].monitor) )
              {
                case 1:
                case 7:
                  v24 = 0;
                  goto LABEL_47;
                case 2:
                  break;
                case 5:
                  v21 = 0;
                  goto LABEL_47;
                case 6:
                  v22 = 0;
                  goto LABEL_47;
                default:
                  goto LABEL_47;
              }
            }
            else
            {
LABEL_47:
              v29 = v23;
            }
            v30 = missionTargetState->fields.IsEventMission | v24 & 1;
            v31 = missionTargetState->fields.IsLimitMission | v21 & 1;
            v32 = missionTargetState->fields.IsCompleteMission | v22 & 1;
            missionTargetState->fields.IsWeeklyMission |= v29 & 1;
            missionTargetState->fields.IsEventMission = v30;
            missionTargetState->fields.IsLimitMission = v31;
            missionTargetState->fields.IsCompleteMission = v32;
            if ( (~*(_DWORD *)missionTargetState & 0x1010101) == 0 )
              return;
            goto LABEL_49;
          }
          if ( monitor == 5 )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v17,
                                          (UserEventMissionMaster_o *)v34,
                                          (EventMissionConditionMaster_o *)v33,
                                          v20);
            v21 = (char)Instance;
            v22 = 0;
LABEL_28:
            v23 = 0;
            goto LABEL_29;
          }
          goto LABEL_26;
        }
        switch ( monitor )
        {
          case 7:
            Instance = (DataManager_o *)ViewEnemyEntity__isRandomMissionGoing((ViewEnemyEntity_o *)Instance, v17, v19);
LABEL_34:
            v24 = (char)Instance;
            v22 = 0;
            v21 = 0;
            v23 = 0;
            if ( v11 )
              goto LABEL_30;
            goto LABEL_35;
          case 6:
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v17,
                                          (UserEventMissionMaster_o *)v34,
                                          (EventMissionConditionMaster_o *)v33,
                                          v20);
            v22 = (char)Instance;
            goto LABEL_27;
          case 1:
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v17,
                                          (UserEventMissionMaster_o *)v34,
                                          (EventMissionConditionMaster_o *)v33,
                                          v20);
            goto LABEL_34;
        }
      }
LABEL_26:
      v22 = 0;
LABEL_27:
      v21 = 0;
      goto LABEL_28;
    }
  }
}


System_String_o *ViewEnemyEntity__getBattleName(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  clsQuestCheck_o *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w20
  bool v6; // w21
  clsQuestCheck_o *v7; // x20
  int32_t v8; // w0
  unsigned int v9; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  unsigned int max_length; // w8
  System_String_o *name; // x20
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2837D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&StringLiteral_9269/*"NONE"*/);
    byte_4C2837D = 1;
  }
  entity = 0;
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v5 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, this->fields.questId, 0);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v6 = clsQuestCheck__IsQuestClear(Instance, this->fields.questId, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_24;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, this->fields.questId, v5 + !v6, 0) )
    goto LABEL_18;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_24;
  Instance = (clsQuestCheck_o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0);
  if ( !Instance )
    goto LABEL_24;
  v7 = Instance;
  if ( !Instance->fields.cQuestReleaseListP )
    goto LABEL_18;
  v8 = System_Array__IndexOf_int_(
         (System_Int32_array *)Instance,
         this->fields.npcSvtId,
         (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___);
  if ( v8 < 0 )
    goto LABEL_18;
  v9 = v8;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_24;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != LODWORD(v7->fields.cQuestReleaseListP)) )
  {
LABEL_18:
    name = this->fields.name;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_9269/*"NONE"*/, 0) )
      return name;
    Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Instance = (clsQuestCheck_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        this->fields.svtId,
                                        (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Instance )
          return ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0);
      }
    }
LABEL_24:
    sub_1C2D6EC(Instance, v4);
  }
  if ( v9 >= max_length )
    sub_1C2D6F4(EnemyInfoOverwriteNpcSvtNameList, v11, v12);
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v9];
}


int32_t ViewEnemyEntity__getEnemyNameEffect(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2837F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19026/*"enemyNameEffect"*/);
    byte_4C2837F = 1;
  }
  return ViewEnemyEntity__getScript(this, (System_String_o *)StringLiteral_19026/*"enemyNameEffect"*/, 0, v2);
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
  __int64 v11; // x3
  ViewEnemyEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4C28380 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&long_TypeInfo);
    byte_4C28380 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C2D6EC(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
  sub_1C2D9AC(Item);
  return ViewEnemyEntity__IsGrand(v13, v14);
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

  if ( (byte_4C2837C & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C2837C = 1;
  }
  entity = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
    sub_1C2D6EC(v8, *(_QWORD *)&id);
  }
  if ( !entity )
    goto LABEL_16;
  return entity->fields.missionProgressType == 3;
}


bool ViewEnemyEntity__isRandomMissionGoing(ViewEnemyEntity_o *this, int32_t missionId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4C2837E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C2837E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v5);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(
                    (UserEventRandomMissionMaster_o *)Master_object,
                    missionId,
                    0);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0);
  return (char)MissionEntity;
}