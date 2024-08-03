void __fastcall ViewEnemyEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FD2D4 & 1) == 0 )
  {
    sub_1B640C8(&ViewEnemyEntity_TypeInfo, v1);
    byte_49FD2D4 = 1;
  }
  ViewEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void __fastcall ViewEnemyEntity___ctor(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FD2C9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FD2C9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ViewEnemyEntity___ctor_39950016(
        ViewEnemyEntity_o *this,
        ViewEnemyEntity_o *old,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_o *name; // x1
  struct System_Int32_array *missionIds; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FD2CA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, old);
    byte_49FD2CA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
  if ( !old )
    sub_1B64324(v5);
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&old->fields.questId;
  name = old->fields.name;
  this->fields.name = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.name, (int32_t)name, v6, v7);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&old->fields.classId;
  *(_QWORD *)&this->fields.npcSvtId = *(_QWORD *)&old->fields.npcSvtId;
  missionIds = old->fields.missionIds;
  this->fields.missionIds = missionIds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.missionIds, (int32_t)missionIds, v10, v11);
  this->fields.impossibleKill = old->fields.impossibleKill;
  enemyScript = old->fields.enemyScript;
  this->fields.enemyScript = enemyScript;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.enemyScript, (int32_t)enemyScript, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ViewEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  if ( (byte_49FD2CC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&enemyId);
    byte_49FD2CC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_2E37610 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ViewEnemyEntity__CreatePrimaryKey(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_49FD2CB & 1) == 0 )
  {
    sub_1B640C8(&ViewEnemyEntity_TypeInfo, method);
    byte_49FD2CB = 1;
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


bool __fastcall ViewEnemyEntity__IsIconIdUnique(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  int32_t limitCount; // w8
  int32_t svtId; // w20
  ViewEnemyEntity_c *v5; // x0

  if ( (byte_49FD2CD & 1) == 0 )
  {
    sub_1B640C8(&ViewEnemyEntity_TypeInfo, method);
    byte_49FD2CD = 1;
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
  DataManager_o *v20; // x22
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v22; // x24
  __int64 v23; // x1
  struct System_Int32_array *v24; // x23
  __int64 v25; // x8
  EventMissionCondDetailMaster_o *v26; // x25
  unsigned __int64 v27; // x20
  int32_t v28; // w22
  int monitor; // w26
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x4
  char v32; // w27
  char v33; // w26
  char v34; // w29
  char v35; // w28
  int32_t v36; // w22
  _BOOL8 v37; // x0
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  char v39; // w8
  bool v40; // w10
  bool v41; // w9
  bool v42; // w11
  Il2CppObject *v43; // [xsp+10h] [xbp-B0h]
  Il2CppObject *v44; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_49FD2CE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__get_Count__, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_49FD2CE = 1;
  }
  entity = 0LL;
  memset(&v47, 0, sizeof(v47));
  *missionTargetState = 0;
  missionIds = this->fields.missionIds;
  if ( missionIds && (int)missionIds->max_length >= 1 && this->fields.impossibleKill <= 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v20 = Instance,
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionMaster___),
          v44 = DataManager__GetMasterData_object_(
                  v20,
                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___),
          v43 = DataManager__GetMasterData_object_(
                  v20,
                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___),
          v22 = DataManager__GetMasterData_object_(
                  v20,
                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___),
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        v20,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
          (v24 = this->fields.missionIds) == 0LL) )
    {
LABEL_57:
      sub_1B64324(Instance);
    }
    v25 = *(_QWORD *)&v24->max_length;
    if ( (int)v25 >= 1 )
    {
      v26 = (EventMissionCondDetailMaster_o *)Instance;
      v27 = 0LL;
      while ( 1 )
      {
        if ( v27 >= (unsigned int)v25 )
          sub_1B6432C(Instance, v23);
        if ( !MasterData_object )
          goto LABEL_57;
        v28 = v24->m_Items[v27 + 1];
        Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      &entity,
                                      v28,
                                      (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_57;
          if ( LODWORD(entity[1].monitor) )
            break;
        }
LABEL_49:
        LODWORD(v25) = v24->max_length;
        if ( (__int64)++v27 >= (int)v25 )
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
                                          v28,
                                          (UserEventMissionMaster_o *)v44,
                                          (EventMissionConditionMaster_o *)v43,
                                          v31);
            v34 = (char)Instance;
            v33 = 0;
            v32 = 0;
LABEL_29:
            v35 = 0;
            if ( v22 )
            {
LABEL_30:
              Instance = (DataManager_o *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v22, questId, 0LL);
              v36 = (int)Instance;
              goto LABEL_36;
            }
LABEL_35:
            v36 = 0;
LABEL_36:
            if ( !entity || !v26 )
              goto LABEL_57;
            Instance = (DataManager_o *)EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
                                          v26,
                                          (int32_t)entity[1].klass,
                                          0LL);
            if ( Instance && SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
            {
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v46,
                (System_Collections_Generic_List_object__o *)Instance,
                (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__);
              v47 = v46;
              while ( 1 )
              {
                v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v47,
                        (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__);
                if ( !v37 )
                  break;
                if ( !v47.fields._current )
                  sub_1B64324(v37);
                klass = (System_Collections_Generic_IEnumerable_TSource__o *)v47.fields._current[4].klass;
                if ( !klass
                  || !klass[1].monitor
                  || System_Linq_Enumerable__Contains_int_(
                       klass,
                       v36,
                       (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___) )
                {
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v47,
                    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
                  goto LABEL_47;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v47,
                (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
              if ( !entity )
                goto LABEL_57;
              v39 = 0;
              switch ( LODWORD(entity[1].monitor) )
              {
                case 1:
                case 7:
                  v35 = 0;
                  goto LABEL_47;
                case 2:
                  break;
                case 5:
                  v32 = 0;
                  goto LABEL_47;
                case 6:
                  v33 = 0;
                  goto LABEL_47;
                default:
                  goto LABEL_47;
              }
            }
            else
            {
LABEL_47:
              v39 = v34;
            }
            v40 = missionTargetState->fields.IsEventMission | v35 & 1;
            v41 = missionTargetState->fields.IsLimitMission | v32 & 1;
            v42 = missionTargetState->fields.IsCompleteMission | v33 & 1;
            missionTargetState->fields.IsWeeklyMission |= v39 & 1;
            missionTargetState->fields.IsEventMission = v40;
            missionTargetState->fields.IsLimitMission = v41;
            missionTargetState->fields.IsCompleteMission = v42;
            if ( (~*(_DWORD *)missionTargetState & 0x1010101) == 0 )
              return;
            goto LABEL_49;
          }
          if ( monitor == 5 )
          {
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v28,
                                          (UserEventMissionMaster_o *)v44,
                                          (EventMissionConditionMaster_o *)v43,
                                          v31);
            v32 = (char)Instance;
            v33 = 0;
LABEL_28:
            v34 = 0;
            goto LABEL_29;
          }
          goto LABEL_26;
        }
        switch ( monitor )
        {
          case 7:
            Instance = (DataManager_o *)ViewEnemyEntity__isRandomMissionGoing((ViewEnemyEntity_o *)Instance, v28, v30);
LABEL_34:
            v35 = (char)Instance;
            v33 = 0;
            v32 = 0;
            v34 = 0;
            if ( v22 )
              goto LABEL_30;
            goto LABEL_35;
          case 6:
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v28,
                                          (UserEventMissionMaster_o *)v44,
                                          (EventMissionConditionMaster_o *)v43,
                                          v31);
            v33 = (char)Instance;
            goto LABEL_27;
          case 1:
            Instance = (DataManager_o *)ViewEnemyEntity__isMissionGoing(
                                          (ViewEnemyEntity_o *)Instance,
                                          v28,
                                          (UserEventMissionMaster_o *)v44,
                                          (EventMissionConditionMaster_o *)v43,
                                          v31);
            goto LABEL_34;
        }
      }
LABEL_26:
      v33 = 0;
LABEL_27:
      v32 = 0;
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
  int32_t v11; // w20
  bool v12; // w21
  clsQuestCheck_o *v13; // x20
  int32_t v14; // w0
  unsigned int v15; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  __int64 v17; // x1
  il2cpp_array_size_t max_length; // w8
  System_String_o *name; // x20
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FD2D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_1B640C8(&StringLiteral_9209/*"NONE"*/, v9);
    byte_49FD2D0 = 1;
  }
  entity = 0LL;
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v11 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, this->fields.questId, 0LL);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v12 = clsQuestCheck__IsQuestClear(Instance, this->fields.questId, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_24;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, this->fields.questId, v11 + !v12, 0LL) )
    goto LABEL_18;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_24;
  Instance = (clsQuestCheck_o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0LL);
  if ( !Instance )
    goto LABEL_24;
  v13 = Instance;
  if ( !Instance->fields.cQuestReleaseListP )
    goto LABEL_18;
  v14 = System_Array__IndexOf_int_(
          (System_Int32_array *)Instance,
          this->fields.npcSvtId,
          (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
  if ( (v14 & 0x80000000) != 0 )
    goto LABEL_18;
  v15 = v14;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_24;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0LL);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != LODWORD(v13->fields.cQuestReleaseListP)) )
  {
LABEL_18:
    name = this->fields.name;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_9209/*"NONE"*/, 0LL) )
      return name;
    Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Instance = (clsQuestCheck_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        this->fields.svtId,
                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Instance )
          return ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
      }
    }
LABEL_24:
    sub_1B64324(Instance);
  }
  if ( v15 >= max_length )
    sub_1B6432C(EnemyInfoOverwriteNpcSvtNameList, v17);
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v15];
}


int32_t __fastcall ViewEnemyEntity__getEnemyNameEffect(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FD2D2 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18952/*"enemyNameEffect"*/, method);
    byte_49FD2D2 = 1;
  }
  return ViewEnemyEntity__getScript(this, (System_String_o *)StringLiteral_18952/*"enemyNameEffect"*/, 0, v2);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  int32_t result; // w0
  const MethodInfo *v14; // x0

  if ( (byte_49FD2D3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B640C8(&long_TypeInfo, v8);
    byte_49FD2D3 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64324(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12);
  sub_1B645E4(Item);
  ViewEnemyEntity___cctor(v14);
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
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FD2CF & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, *(_QWORD *)&id);
    byte_49FD2CF = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !usrEvMissionMst )
    goto LABEL_12;
  UserId = UserEventMissionMaster__TryGetEntity(usrEvMissionMst, &entity, UserId, id, 0LL);
  if ( (UserId & 1) == 0 )
  {
    if ( missionCondMst )
      return EventMissionConditionMaster__IsMissionRunning(missionCondMst, id, 0LL);
LABEL_12:
    sub_1B64324(UserId);
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
  Il2CppObject *Master_object; // x0
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_49FD2D1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, *(_QWORD *)&missionId);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    byte_49FD2D1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(
                    (UserEventRandomMissionMaster_o *)Master_object,
                    missionId,
                    0LL);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0LL);
  return (char)MissionEntity;
}