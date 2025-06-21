void __fastcall ViewEnemyEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B1D580 & 1) == 0 )
  {
    sub_1BCAFF8(&ViewEnemyEntity_TypeInfo, v1);
    byte_4B1D580 = 1;
  }
  ViewEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void __fastcall ViewEnemyEntity___ctor(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D574 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1D574 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ViewEnemyEntity___ctor_42391340(
        ViewEnemyEntity_o *this,
        ViewEnemyEntity_o *old,
        const MethodInfo *method)
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

  if ( (byte_4B1D575 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, old);
    byte_4B1D575 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
  if ( !old )
    sub_1BCB254(v5, v6);
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&old->fields.questId;
  name = old->fields.name;
  this->fields.name = name;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.name, (int32_t)name, v7, v8);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&old->fields.classId;
  *(_QWORD *)&this->fields.npcSvtId = *(_QWORD *)&old->fields.npcSvtId;
  missionIds = old->fields.missionIds;
  this->fields.missionIds = missionIds;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.missionIds, (int32_t)missionIds, v11, v12);
  this->fields.impossibleKill = old->fields.impossibleKill;
  enemyScript = old->fields.enemyScript;
  this->fields.enemyScript = enemyScript;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.enemyScript, (int32_t)enemyScript, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ViewEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  if ( (byte_4B1D577 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&enemyId);
    byte_4B1D577 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_3018C2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ViewEnemyEntity__CreatePrimaryKey(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_4B1D576 & 1) == 0 )
  {
    sub_1BCAFF8(&ViewEnemyEntity_TypeInfo, method);
    byte_4B1D576 = 1;
  }
  questId = this->fields.questId;
  enemyId = this->fields.enemyId;
  if ( !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo);
  return ViewEnemyEntity__CreatePK(questId, enemyId, v2);
}


bool __fastcall ViewEnemyEntity__IsAllEnableMissionTarget(
        ViewEnemyEntity_o *this,
        QuestInformationListViewItem_MissionTargetState_o missionTargetState,
        const MethodInfo *method)
{
  return (~*(_DWORD *)&missionTargetState & 0x1010101) == 0LL;
}


bool __fastcall ViewEnemyEntity__IsGrand(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D57F & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20737/*"isGrandSvt"*/, method);
    byte_4B1D57F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_20737/*"isGrandSvt"*/, 0, 0LL) > 0;
}


bool __fastcall ViewEnemyEntity__IsIconIdUnique(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  int32_t limitCount; // w8
  int32_t svtId; // w20
  ViewEnemyEntity_c *v5; // x0

  if ( (byte_4B1D578 & 1) == 0 )
  {
    sub_1BCAFF8(&ViewEnemyEntity_TypeInfo, method);
    byte_4B1D578 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ViewEnemyEntity__IsMissionTarget(
        ViewEnemyEntity_o *this,
        int32_t questId,
        QuestInformationListViewItem_MissionTargetState_o *missionTargetState,
        const MethodInfo *method)
{
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
  struct System_Int32_array *missionIds; // x8
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  DataManager_o *v21; // x22
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v23; // x24
  __int64 v24; // x2
  struct System_Int32_array *v25; // x23
  __int64 v26; // x8
  EventMissionCondDetailMaster_o *v27; // x25
  unsigned __int64 v28; // x20
  int32_t v29; // w22
  int monitor; // w26
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x4
  char v33; // w27
  char v34; // w26
  char v35; // w29
  char v36; // w28
  int32_t v37; // w22
  _BOOL8 v38; // x0
  __int64 v39; // x1
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  char v41; // w8
  bool v42; // w10
  bool v43; // w9
  bool v44; // w11
  Il2CppObject *v45; // [xsp+10h] [xbp-B0h]
  Il2CppObject *v46; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B1D579 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMissionMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v9);
    sub_1BCAFF8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v10);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__get_Current__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__get_Count__, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B1D579 = 1;
  }
  entity = 0LL;
  memset(&v49, 0, sizeof(v49));
  *missionTargetState = 0;
  missionIds = this->fields.missionIds;
  if ( missionIds && (int)missionIds->max_length >= 1 && this->fields.impossibleKill <= 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v21 = Instance,
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMissionMaster___),
          v46 = DataManager__GetMasterData_object_(
                  v21,
                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMissionMaster___),
          v45 = DataManager__GetMasterData_object_(
                  v21,
                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___),
          v23 = DataManager__GetMasterData_object_(
                  v21,
                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        v21,
                                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
          (v25 = this->fields.missionIds) == 0LL) )
    {
LABEL_57:
      sub_1BCB254(Instance, v20);
    }
    v26 = *(_QWORD *)&v25->max_length;
    if ( (int)v26 >= 1 )
    {
      v27 = (EventMissionCondDetailMaster_o *)Instance;
      v28 = 0LL;
      while ( 1 )
      {
        if ( v28 >= (unsigned int)v26 )
          sub_1BCB25C(Instance, v20, v24);
        if ( !MasterData_object )
          goto LABEL_57;
        v29 = v25->m_Items[v28 + 1];
        Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      &entity,
                                      v29,
                                      (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_57;
          if ( LODWORD(entity[1].monitor) )
            break;
        }
LABEL_49:
        LODWORD(v26) = v25->max_length;
        if ( (__int64)++v28 >= (int)v26 )
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
                                          v29,
                                          (UserEventMissionMaster_o *)v46,
                                          (EventMissionConditionMaster_o *)v45,
                                          v32);
            v35 = (char)Instance;
            v34 = 0;
            v33 = 0;
LABEL_29:
            v36 = 0;
            if ( v23 )
            {
LABEL_30:
              Instance = (DataManager_o *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v23, questId, 0LL);
              v37 = (int)Instance;
              goto LABEL_36;
            }
LABEL_35:
            v37 = 0;
LABEL_36:
            if ( !entity || !v27 )
              goto LABEL_57;
            Instance = (DataManager_o *)EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
                                          v27,
                                          (int32_t)entity[1].klass,
                                          0LL);
            if ( Instance && SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
            {
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v48,
                (System_Collections_Generic_List_object__o *)Instance,
                (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__);
              v49 = v48;
              while ( 1 )
              {
                v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v49,
                        (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__);
                if ( !v38 )
                  break;
                if ( !v49.fields._current )
                  sub_1BCB254(v38, v39);
                klass = (System_Collections_Generic_IEnumerable_TSource__o *)v49.fields._current[4].klass;
                if ( !klass
                  || !klass[1].monitor
                  || System_Linq_Enumerable__Contains_int_(
                       klass,
                       v37,
                       (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___) )
                {
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v49,
                    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
                  goto LABEL_47;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v49,
                (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
              if ( !entity )
                goto LABEL_57;
              v41 = 0;
              switch ( LODWORD(entity[1].monitor) )
              {
                case 1:
                case 7:
                  v36 = 0;
                  goto LABEL_47;
                case 2:
                  break;
                case 5:
                  v33 = 0;
                  goto LABEL_47;
                case 6:
                  v34 = 0;
                  goto LABEL_47;
                default:
                  goto LABEL_47;
              }
            }
            else
            {
LABEL_47:
              v41 = v35;
            }
            v42 = missionTargetState->fields.IsEventMission | v36 & 1;
            v43 = missionTargetState->fields.IsLimitMission | v33 & 1;
            v44 = missionTargetState->fields.IsCompleteMission | v34 & 1;
            missionTargetState->fields.IsWeeklyMission |= v41 & 1;
            missionTargetState->fields.IsEventMission = v42;
            missionTargetState->fields.IsLimitMission = v43;
            missionTargetState->fields.IsCompleteMission = v44;
            if ( (~*(_DWORD *)missionTargetState & 0x1010101) == 0 )
              return;
            goto LABEL_49;
          }
          if ( monitor == 5 )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v29,
                                          (UserEventMissionMaster_o *)v46,
                                          (EventMissionConditionMaster_o *)v45,
                                          v32);
            v33 = (char)Instance;
            v34 = 0;
LABEL_28:
            v35 = 0;
            goto LABEL_29;
          }
          goto LABEL_26;
        }
        switch ( monitor )
        {
          case 7:
            Instance = (DataManager_o *)ViewEnemyEntity__isRandomMissionGoing((ViewEnemyEntity_o *)Instance, v29, v31);
LABEL_34:
            v36 = (char)Instance;
            v34 = 0;
            v33 = 0;
            v35 = 0;
            if ( v23 )
              goto LABEL_30;
            goto LABEL_35;
          case 6:
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v29,
                                          (UserEventMissionMaster_o *)v46,
                                          (EventMissionConditionMaster_o *)v45,
                                          v32);
            v34 = (char)Instance;
            goto LABEL_27;
          case 1:
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v29,
                                          (UserEventMissionMaster_o *)v46,
                                          (EventMissionConditionMaster_o *)v45,
                                          v32);
            goto LABEL_34;
        }
      }
LABEL_26:
      v34 = 0;
LABEL_27:
      v33 = 0;
      goto LABEL_28;
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
  clsQuestCheck_o *Instance; // x0
  __int64 v11; // x1
  int32_t v12; // w20
  bool v13; // w21
  clsQuestCheck_o *v14; // x20
  int32_t v15; // w0
  unsigned int v16; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  il2cpp_array_size_t max_length; // w8
  System_String_o *name; // x20
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1D57B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_IndexOf_int___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_1BCAFF8(&StringLiteral_9205/*"NONE"*/, v9);
    byte_4B1D57B = 1;
  }
  entity = 0LL;
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v12 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, this->fields.questId, 0LL);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v13 = clsQuestCheck__IsQuestClear(Instance, this->fields.questId, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_24;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, this->fields.questId, v12 + !v13, 0LL) )
    goto LABEL_18;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_24;
  Instance = (clsQuestCheck_o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0LL);
  if ( !Instance )
    goto LABEL_24;
  v14 = Instance;
  if ( !Instance->fields.cQuestReleaseListP )
    goto LABEL_18;
  v15 = System_Array__IndexOf_int_(
          (System_Int32_array *)Instance,
          this->fields.npcSvtId,
          (const MethodInfo_3119038 *)Method_System_Array_IndexOf_int___);
  if ( (v15 & 0x80000000) != 0 )
    goto LABEL_18;
  v16 = v15;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_24;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0LL);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != LODWORD(v14->fields.cQuestReleaseListP)) )
  {
LABEL_18:
    name = this->fields.name;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_9205/*"NONE"*/, 0LL) )
      return name;
    Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Instance = (clsQuestCheck_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        this->fields.svtId,
                                        (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Instance )
          return ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
      }
    }
LABEL_24:
    sub_1BCB254(Instance, v11);
  }
  if ( v16 >= max_length )
    sub_1BCB25C(EnemyInfoOverwriteNpcSvtNameList, v18, v19);
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v16];
}


int32_t __fastcall ViewEnemyEntity__getEnemyNameEffect(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1D57D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18870/*"enemyNameEffect"*/, method);
    byte_4B1D57D = 1;
  }
  return ViewEnemyEntity__getScript(this, (System_String_o *)StringLiteral_18870/*"enemyNameEffect"*/, 0, v2);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  ViewEnemyEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4B1D57E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BCAFF8(&long_TypeInfo, v8);
    byte_4B1D57E = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCB254(Item, v10);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
  sub_1BCB514(Item);
  return ViewEnemyEntity__IsGrand(v15, v16);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ViewEnemyEntity__isMissionGoing(
        ViewEnemyEntity_o *this,
        int32_t id,
        UserEventMissionMaster_o *usrEvMissionMst,
        EventMissionConditionMaster_o *missionCondMst,
        const MethodInfo *method)
{
  NetworkManager_c *v8; // x0
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1D57A & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&id);
    byte_4B1D57A = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&id);
    byte_4B165D1 = 1;
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
                             0LL);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    if ( missionCondMst )
      return EventMissionConditionMaster__IsMissionRunning(missionCondMst, id, 0LL);
LABEL_16:
    sub_1BCB254(v8, *(_QWORD *)&id);
  }
  if ( !entity )
    goto LABEL_16;
  return entity->fields.missionProgressType == 3;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ViewEnemyEntity__isRandomMissionGoing(
        ViewEnemyEntity_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4B1D57C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, *(_QWORD *)&missionId);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    byte_4B1D57C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1BCB254(0LL, v6);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(
                    (UserEventRandomMissionMaster_o *)Master_object,
                    missionId,
                    0LL);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0LL);
  return (char)MissionEntity;
}