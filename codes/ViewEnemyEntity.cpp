void __fastcall ViewEnemyEntity___cctor(const MethodInfo *method)
{
  if ( (byte_4A5C04E & 1) == 0 )
  {
    sub_1B885B0(&ViewEnemyEntity_TypeInfo);
    byte_4A5C04E = 1;
  }
  ViewEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void __fastcall ViewEnemyEntity___ctor(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C043 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C043 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ViewEnemyEntity___ctor_40282184(
        ViewEnemyEntity_o *this,
        ViewEnemyEntity_o *old,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_String_o *name; // x1
  struct System_Int32_array *missionIds; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5C044 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C044 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  if ( !old )
    sub_1B8880C(v5, v6);
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&old->fields.questId;
  name = old->fields.name;
  this->fields.name = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.name, (int32_t)name, v7, v8);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&old->fields.classId;
  *(_QWORD *)&this->fields.npcSvtId = *(_QWORD *)&old->fields.npcSvtId;
  missionIds = old->fields.missionIds;
  this->fields.missionIds = missionIds;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.missionIds, (int32_t)missionIds, v11, v12);
  this->fields.impossibleKill = old->fields.impossibleKill;
  enemyScript = old->fields.enemyScript;
  this->fields.enemyScript = enemyScript;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enemyScript, (int32_t)enemyScript, v14, v15);
}


System_String_o *__fastcall ViewEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  if ( (byte_4A5C046 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5C046 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ViewEnemyEntity__CreatePrimaryKey(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_4A5C045 & 1) == 0 )
  {
    sub_1B885B0(&ViewEnemyEntity_TypeInfo);
    byte_4A5C045 = 1;
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

  if ( (byte_4A5C047 & 1) == 0 )
  {
    sub_1B885B0(&ViewEnemyEntity_TypeInfo);
    byte_4A5C047 = 1;
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


void __fastcall ViewEnemyEntity__IsMissionTarget(
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
  __int64 v13; // x8
  EventMissionCondDetailMaster_o *v14; // x25
  unsigned __int64 v15; // x20
  int32_t v16; // w22
  int monitor; // w26
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x4
  char v20; // w27
  char v21; // w26
  char v22; // w29
  char v23; // w28
  int32_t v24; // w22
  _BOOL8 v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  char v28; // w8
  bool v29; // w10
  bool v30; // w9
  bool v31; // w11
  Il2CppObject *v32; // [xsp+10h] [xbp-B0h]
  Il2CppObject *v33; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A5C048 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__get_Count__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C048 = 1;
  }
  entity = 0LL;
  memset(&v36, 0, sizeof(v36));
  *missionTargetState = 0;
  missionIds = this->fields.missionIds;
  if ( missionIds && (int)missionIds->max_length >= 1 && this->fields.impossibleKill <= 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v9 = Instance,
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___),
          v33 = DataManager__GetMasterData_object_(
                  v9,
                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionMaster___),
          v32 = DataManager__GetMasterData_object_(
                  v9,
                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___),
          v11 = DataManager__GetMasterData_object_(
                  v9,
                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        v9,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
          (v12 = this->fields.missionIds) == 0LL) )
    {
LABEL_57:
      sub_1B8880C(Instance, v8);
    }
    v13 = *(_QWORD *)&v12->max_length;
    if ( (int)v13 >= 1 )
    {
      v14 = (EventMissionCondDetailMaster_o *)Instance;
      v15 = 0LL;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)v13 )
          sub_1B88814(Instance, v8);
        if ( !MasterData_object )
          goto LABEL_57;
        v16 = v12->m_Items[v15 + 1];
        Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      &entity,
                                      v16,
                                      (const MethodInfo_311D988 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_57;
          if ( LODWORD(entity[1].monitor) )
            break;
        }
LABEL_49:
        LODWORD(v13) = v12->max_length;
        if ( (__int64)++v15 >= (int)v13 )
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
              Instance = (DataManager_o *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v11, questId, 0LL);
              v24 = (int)Instance;
              goto LABEL_36;
            }
LABEL_35:
            v24 = 0;
LABEL_36:
            if ( !entity || !v14 )
              goto LABEL_57;
            Instance = (DataManager_o *)EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
                                          v14,
                                          (int32_t)entity[1].klass,
                                          0LL);
            if ( Instance && SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
            {
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v35,
                (System_Collections_Generic_List_object__o *)Instance,
                (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity__GetEnumerator__);
              v36 = v35;
              while ( 1 )
              {
                v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v36,
                        (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__MoveNext__);
                if ( !v25 )
                  break;
                if ( !v36.fields._current )
                  sub_1B8880C(v25, v26);
                klass = (System_Collections_Generic_IEnumerable_TSource__o *)v36.fields._current[4].klass;
                if ( !klass
                  || !klass[1].monitor
                  || System_Linq_Enumerable__Contains_int_(
                       klass,
                       v24,
                       (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___) )
                {
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v36,
                    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
                  goto LABEL_47;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v36,
                (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMissionCondDetailEntity__Dispose__);
              if ( !entity )
                goto LABEL_57;
              v28 = 0;
              switch ( LODWORD(entity[1].monitor) )
              {
                case 1:
                case 7:
                  v23 = 0;
                  goto LABEL_47;
                case 2:
                  break;
                case 5:
                  v20 = 0;
                  goto LABEL_47;
                case 6:
                  v21 = 0;
                  goto LABEL_47;
                default:
                  goto LABEL_47;
              }
            }
            else
            {
LABEL_47:
              v28 = v22;
            }
            v29 = missionTargetState->fields.IsEventMission | v23 & 1;
            v30 = missionTargetState->fields.IsLimitMission | v20 & 1;
            v31 = missionTargetState->fields.IsCompleteMission | v21 & 1;
            missionTargetState->fields.IsWeeklyMission |= v28 & 1;
            missionTargetState->fields.IsEventMission = v29;
            missionTargetState->fields.IsLimitMission = v30;
            missionTargetState->fields.IsCompleteMission = v31;
            if ( (~*(_DWORD *)missionTargetState & 0x1010101) == 0 )
              return;
            goto LABEL_49;
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


System_String_o *__fastcall ViewEnemyEntity__getBattleName(ViewEnemyEntity_o *this, const MethodInfo *method)
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
  il2cpp_array_size_t max_length; // w8
  System_String_o *name; // x20
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5C04A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&StringLiteral_9251/*"NONE"*/);
    byte_4A5C04A = 1;
  }
  entity = 0LL;
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v5 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, this->fields.questId, 0LL);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v6 = clsQuestCheck__IsQuestClear(Instance, this->fields.questId, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_24;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, this->fields.questId, v5 + !v6, 0LL) )
    goto LABEL_18;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_24;
  Instance = (clsQuestCheck_o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0LL);
  if ( !Instance )
    goto LABEL_24;
  v7 = Instance;
  if ( !Instance->fields.cQuestReleaseListP )
    goto LABEL_18;
  v8 = System_Array__IndexOf_int_(
         (System_Int32_array *)Instance,
         this->fields.npcSvtId,
         (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
  if ( (v8 & 0x80000000) != 0 )
    goto LABEL_18;
  v9 = v8;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_24;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0LL);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != LODWORD(v7->fields.cQuestReleaseListP)) )
  {
LABEL_18:
    name = this->fields.name;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_9251/*"NONE"*/, 0LL) )
      return name;
    Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Instance = (clsQuestCheck_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        this->fields.svtId,
                                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Instance )
          return ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
      }
    }
LABEL_24:
    sub_1B8880C(Instance, v4);
  }
  if ( v9 >= max_length )
    sub_1B88814(EnemyInfoOverwriteNpcSvtNameList, v11);
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v9];
}


int32_t __fastcall ViewEnemyEntity__getEnemyNameEffect(ViewEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C04C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19025/*"enemyNameEffect"*/);
    byte_4A5C04C = 1;
  }
  return ViewEnemyEntity__getScript(this, (System_String_o *)StringLiteral_19025/*"enemyNameEffect"*/, 0, v2);
}


int32_t __fastcall ViewEnemyEntity__getScript(
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
  int32_t result; // w0
  const MethodInfo *v13; // x0

  if ( (byte_4A5C04D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5C04D = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
  sub_1B88ACC(Item);
  ViewEnemyEntity___cctor(v13);
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
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5C049 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5C049 = 1;
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
    sub_1B8880C(UserId, v9);
  }
  if ( !entity )
    goto LABEL_12;
  return entity->fields.missionProgressType == 3;
}


bool __fastcall ViewEnemyEntity__isRandomMissionGoing(
        ViewEnemyEntity_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4A5C04B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5C04B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v5);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(
                    (UserEventRandomMissionMaster_o *)Master_object,
                    missionId,
                    0LL);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0LL);
  return (char)MissionEntity;
}