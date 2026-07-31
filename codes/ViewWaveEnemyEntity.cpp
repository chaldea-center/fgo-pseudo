void ViewWaveEnemyEntity___cctor(const MethodInfo *method)
{
  if ( (byte_59397E7 & 1) == 0 )
  {
    sub_21FFC50(&ViewWaveEnemyEntity_TypeInfo);
    byte_59397E7 = 1;
  }
  ViewWaveEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void ViewWaveEnemyEntity___ctor(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59397DA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59397DA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


void ViewWaveEnemyEntity___ctor_50214700(
        ViewWaveEnemyEntity_o *this,
        ViewWaveEnemyEntity_o *old,
        const MethodInfo *method)
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
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  __int128 v15; // q0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_59397DB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59397DB = 1;
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
  enemyScript = old->fields.enemyScript;
  v15 = *(_OWORD *)&old->fields.classId;
  this->fields.enemyScript = enemyScript;
  *(_OWORD *)&this->fields.classId = v15;
  *(_QWORD *)&this->fields.displayType = *(_QWORD *)&old->fields.displayType;
  this->fields.wave = old->fields.wave;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.enemyScript,
    (int32_t)enemyScript,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


System_String_o *ViewWaveEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  if ( (byte_59397DD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59397DD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ViewWaveEnemyEntity__CreatePrimaryKey(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_59397DC & 1) == 0 )
  {
    sub_21FFC50(&ViewWaveEnemyEntity_TypeInfo);
    byte_59397DC = 1;
  }
  questId = this->fields.questId;
  enemyId = this->fields.enemyId;
  if ( !*(&ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo, method);
  return ViewWaveEnemyEntity__CreatePK(questId, enemyId, v2);
}


System_String_o *ViewWaveEnemyEntity__GetBattleName(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  clsQuestCheck_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w20
  __int64 v8; // x1
  bool v9; // w21
  clsQuestCheck_o *v10; // x20
  int32_t v11; // w0
  unsigned int v12; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  unsigned int max_length; // w8
  System_String_o *name; // x20
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59397DF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_int___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_21FFC50(&StringLiteral_9648/*"NONE"*/);
    sub_21FFC50(&StringLiteral_16087/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/);
    byte_59397DF = 1;
  }
  entity = 0;
  if ( !ViewWaveEnemyEntity__IsHideName(this, method) )
  {
    Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( Instance )
    {
      v7 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, this->fields.questId, 0);
      Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( Instance )
      {
        v9 = clsQuestCheck__IsQuestClear(Instance, this->fields.questId, 0, 0);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
        Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( Instance )
        {
          if ( QuestPhaseMaster__TryGetEntity(
                 (QuestPhaseMaster_o *)Instance,
                 &entity,
                 this->fields.questId,
                 v7 + !v9,
                 0) )
          {
            Instance = (clsQuestCheck_o *)entity;
            if ( !entity )
              goto LABEL_28;
            Instance = (clsQuestCheck_o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0);
            if ( !Instance )
              goto LABEL_28;
            v10 = Instance;
            if ( Instance->fields.cQuestReleaseListP )
            {
              v11 = System_Array__IndexOf_int_(
                      (System_Int32_array *)Instance,
                      this->fields.npcSvtId,
                      (const MethodInfo_39FAFC4 *)Method_System_Array_IndexOf_int___);
              if ( (v11 & 0x80000000) == 0 )
              {
                v12 = v11;
                Instance = (clsQuestCheck_o *)entity;
                if ( !entity )
                  goto LABEL_28;
                EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0);
                if ( EnemyInfoOverwriteNpcSvtNameList )
                {
                  max_length = EnemyInfoOverwriteNpcSvtNameList->max_length;
                  if ( max_length == LODWORD(v10->fields.cQuestReleaseListP) )
                  {
                    if ( v12 >= max_length )
                      sub_21FFED4(EnemyInfoOverwriteNpcSvtNameList);
                    return EnemyInfoOverwriteNpcSvtNameList->m_Items[v12];
                  }
                }
              }
            }
          }
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
        }
      }
    }
LABEL_28:
    sub_21FFECC(Instance, v6);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3);
  return LocalizationManager__Get((System_String_o *)StringLiteral_16087/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/, 0);
}


int32_t ViewWaveEnemyEntity__GetEnemyNameEffect(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_59397E0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19884/*"enemyNameEffect"*/);
    byte_59397E0 = 1;
  }
  return ViewWaveEnemyEntity__GetScript(this, (System_String_o *)StringLiteral_19884/*"enemyNameEffect"*/, 0, v2);
}


int32_t ViewWaveEnemyEntity__GetScript(
        ViewWaveEnemyEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  ViewWaveEnemyEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_59397E1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_59397E1 = 1;
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
  return ViewWaveEnemyEntity__IsDispDanger(v12, v13);
}


System_Collections_Generic_Dictionary_string__object__o *ViewWaveEnemyEntity__GetUnknownDispInfo(
        ViewWaveEnemyEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_59397E4 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_Dictionary_string__object____);
    sub_21FFC50(&StringLiteral_15697/*"UnknownDispInfo"*/);
    byte_59397E4 = 1;
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                      this->fields.enemyScript,
                                                                      (System_String_o *)StringLiteral_15697/*"UnknownDispInfo"*/,
                                                                      0,
                                                                      (const MethodInfo_37E0CE0 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
}


bool ViewWaveEnemyEntity__IsDispDanger(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59397E2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26008/*"viewWaveEnemyDispDanger"*/);
    byte_59397E2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_26008/*"viewWaveEnemyDispDanger"*/, 0, 0) > 0;
}


bool ViewWaveEnemyEntity__IsGrand(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59397E6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21897/*"isGrandSvt"*/);
    byte_59397E6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_21897/*"isGrandSvt"*/, 0, 0) > 0;
}


bool ViewWaveEnemyEntity__IsHideName(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  int32_t IntValue; // w0
  __int64 v4; // x1
  int32_t v5; // w19
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v8; // x0

  if ( (byte_59397E3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26009/*"viewWaveEnemyHideName"*/);
    byte_59397E3 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_26009/*"viewWaveEnemyHideName"*/, 0, 0);
  if ( IntValue < 1 )
    return 0;
  v5 = IntValue;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
    v8 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_21FFECC(v8, v6);
  return UserQuestMaster__getClearCountsFromId(
           (UserQuestMaster_o *)Master_object,
           v8->static_fields->userIdNumber,
           v5,
           0) == 0;
}


bool ViewWaveEnemyEntity__IsIconIdUnique(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  int32_t limitCount; // w8
  int32_t svtId; // w20
  ViewWaveEnemyEntity_c *v5; // x0

  if ( (byte_59397DE & 1) == 0 )
  {
    sub_21FFC50(&ViewWaveEnemyEntity_TypeInfo);
    byte_59397DE = 1;
  }
  limitCount = this->fields.limitCount;
  if ( limitCount > 9 )
    return 0;
  svtId = this->fields.svtId;
  v5 = ViewWaveEnemyEntity_TypeInfo;
  if ( !*(&ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo, method);
    v5 = ViewWaveEnemyEntity_TypeInfo;
    limitCount = this->fields.limitCount;
  }
  return limitCount + v5->static_fields->SVT_ID_TO_ICON_ID * svtId != this->fields.iconId;
}


// local variable allocation has failed, the output may be wrong!
bool ViewWaveEnemyEntity__IsUnknownDispInfo(
        ViewWaveEnemyEntity_o *this,
        int32_t kind,
        System_Collections_Generic_Dictionary_string__object__o *unknownDispInfo,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *v7; // x0

  if ( (byte_59397E5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18745/*"className"*/);
    sub_21FFC50(&StringLiteral_20241/*"faceSprite"*/);
    sub_21FFC50(&StringLiteral_18743/*"classIconImage"*/);
    sub_21FFC50(&StringLiteral_19883/*"enemyName"*/);
    byte_59397E5 = 1;
  }
  if ( unknownDispInfo
    || (v7 = ViewWaveEnemyEntity__GetUnknownDispInfo(this, *(const MethodInfo **)&kind), (unknownDispInfo = v7) != 0) )
  {
    LOBYTE(v7) = (unsigned int)kind <= 3
              && EntityScriptUtil__GetIntValue(
                   unknownDispInfo,
                   *(System_String_o **)*(&off_5296708 + (unsigned int)kind),
                   0,
                   0) > 0;
  }
  return (char)v7;
}