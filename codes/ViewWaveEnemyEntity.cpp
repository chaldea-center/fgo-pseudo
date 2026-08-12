void ViewWaveEnemyEntity___cctor(const MethodInfo *method)
{
  if ( (byte_59719A8 & 1) == 0 )
  {
    sub_2213A60(&ViewWaveEnemyEntity_TypeInfo);
    byte_59719A8 = 1;
  }
  ViewWaveEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void ViewWaveEnemyEntity___ctor(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597199B & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_597199B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


void ViewWaveEnemyEntity___ctor_50278284(
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

  if ( (byte_597199C & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_597199C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
  if ( !old )
    sub_2213CDC(v5, v6);
  name = old->fields.name;
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&old->fields.questId;
  this->fields.name = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.name, (int32_t)name, v7, v8, v9, v10, v11, v12);
  enemyScript = old->fields.enemyScript;
  v15 = *(_OWORD *)&old->fields.classId;
  this->fields.enemyScript = enemyScript;
  *(_OWORD *)&this->fields.classId = v15;
  *(_QWORD *)&this->fields.displayType = *(_QWORD *)&old->fields.displayType;
  this->fields.wave = old->fields.wave;
  sub_2213A04(
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
  if ( (byte_597199E & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_597199E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ViewWaveEnemyEntity__CreatePrimaryKey(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_597199D & 1) == 0 )
  {
    sub_2213A60(&ViewWaveEnemyEntity_TypeInfo);
    byte_597199D = 1;
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

  if ( (byte_59719A0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&StringLiteral_9661/*"NONE"*/);
    sub_2213A60(&StringLiteral_16118/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/);
    byte_59719A0 = 1;
  }
  entity = 0;
  if ( !ViewWaveEnemyEntity__IsHideName(this, method) )
  {
    Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( Instance )
    {
      v7 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, this->fields.questId, 0);
      Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( Instance )
      {
        v9 = clsQuestCheck__IsQuestClear(Instance, this->fields.questId, 0, 0);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
        Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
                      (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
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
                      sub_2213CE4(EnemyInfoOverwriteNpcSvtNameList);
                    return EnemyInfoOverwriteNpcSvtNameList->m_Items[v12];
                  }
                }
              }
            }
          }
          name = this->fields.name;
          if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_9661/*"NONE"*/, 0) )
            return name;
          Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
            if ( Instance )
            {
              Instance = (clsQuestCheck_o *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                              this->fields.svtId,
                                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( Instance )
                return ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0);
            }
          }
        }
      }
    }
LABEL_28:
    sub_2213CDC(Instance, v6);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3);
  return LocalizationManager__Get((System_String_o *)StringLiteral_16118/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/, 0);
}


int32_t ViewWaveEnemyEntity__GetEnemyNameEffect(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_59719A1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19926/*"enemyNameEffect"*/);
    byte_59719A1 = 1;
  }
  return ViewWaveEnemyEntity__GetScript(this, (System_String_o *)StringLiteral_19926/*"enemyNameEffect"*/, 0, v2);
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

  if ( (byte_59719A2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_59719A2 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_2213CDC(Item, v8);
  }
  if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v10);
  sub_221405C(Item, qword_5984368, v10);
  return ViewWaveEnemyEntity__IsDispDanger(v12, v13);
}


System_Collections_Generic_Dictionary_string__object__o *ViewWaveEnemyEntity__GetUnknownDispInfo(
        ViewWaveEnemyEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_59719A5 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_Dictionary_string__object____);
    sub_2213A60(&StringLiteral_15727/*"UnknownDispInfo"*/);
    byte_59719A5 = 1;
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                      this->fields.enemyScript,
                                                                      (System_String_o *)StringLiteral_15727/*"UnknownDispInfo"*/,
                                                                      0,
                                                                      (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
}


bool ViewWaveEnemyEntity__IsDispDanger(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59719A3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26056/*"viewWaveEnemyDispDanger"*/);
    byte_59719A3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_26056/*"viewWaveEnemyDispDanger"*/, 0, 0) > 0;
}


bool ViewWaveEnemyEntity__IsGrand(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59719A7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21939/*"isGrandSvt"*/);
    byte_59719A7 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_21939/*"isGrandSvt"*/, 0, 0) > 0;
}


bool ViewWaveEnemyEntity__IsHideName(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  int32_t IntValue; // w0
  __int64 v4; // x1
  int32_t v5; // w19
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v8; // x0

  if ( (byte_59719A4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_26057/*"viewWaveEnemyHideName"*/);
    byte_59719A4 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_26057/*"viewWaveEnemyHideName"*/, 0, 0);
  if ( IntValue < 1 )
    return 0;
  v5 = IntValue;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
    v8 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_2213CDC(v8, v6);
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

  if ( (byte_597199F & 1) == 0 )
  {
    sub_2213A60(&ViewWaveEnemyEntity_TypeInfo);
    byte_597199F = 1;
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

  if ( (byte_59719A6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18783/*"className"*/);
    sub_2213A60(&StringLiteral_20283/*"faceSprite"*/);
    sub_2213A60(&StringLiteral_18781/*"classIconImage"*/);
    sub_2213A60(&StringLiteral_19925/*"enemyName"*/);
    byte_59719A6 = 1;
  }
  if ( unknownDispInfo
    || (v7 = ViewWaveEnemyEntity__GetUnknownDispInfo(this, *(const MethodInfo **)&kind), (unknownDispInfo = v7) != 0) )
  {
    LOBYTE(v7) = (unsigned int)kind <= 3
              && EntityScriptUtil__GetIntValue(
                   unknownDispInfo,
                   *(System_String_o **)*(&off_52CA878 + (unsigned int)kind),
                   0,
                   0) > 0;
  }
  return (char)v7;
}