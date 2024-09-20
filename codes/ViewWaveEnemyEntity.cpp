void __fastcall ViewWaveEnemyEntity___cctor(const MethodInfo *method)
{
  if ( (byte_4A5C066 & 1) == 0 )
  {
    sub_1B885B0(&ViewWaveEnemyEntity_TypeInfo);
    byte_4A5C066 = 1;
  }
  ViewWaveEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void __fastcall ViewWaveEnemyEntity___ctor(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C05C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C05C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ViewWaveEnemyEntity___ctor_40287864(
        ViewWaveEnemyEntity_o *this,
        ViewWaveEnemyEntity_o *old,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_String_o *name; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5C05D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C05D = 1;
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
  *(_QWORD *)&this->fields.displayType = *(_QWORD *)&old->fields.displayType;
  this->fields.wave = old->fields.wave;
  enemyScript = old->fields.enemyScript;
  this->fields.enemyScript = enemyScript;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enemyScript, (int32_t)enemyScript, v11, v12);
}


System_String_o *__fastcall ViewWaveEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  if ( (byte_4A5C05F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5C05F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ViewWaveEnemyEntity__CreatePrimaryKey(
        ViewWaveEnemyEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_4A5C05E & 1) == 0 )
  {
    sub_1B885B0(&ViewWaveEnemyEntity_TypeInfo);
    byte_4A5C05E = 1;
  }
  questId = this->fields.questId;
  enemyId = this->fields.enemyId;
  if ( !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo);
  return ViewWaveEnemyEntity__CreatePK(questId, enemyId, v2);
}


System_String_o *__fastcall ViewWaveEnemyEntity__GetBattleName(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  clsQuestCheck_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w20
  bool v7; // w21
  clsQuestCheck_o *v8; // x20
  int32_t v9; // w0
  unsigned int v10; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  __int64 v12; // x1
  il2cpp_array_size_t max_length; // w8
  System_String_o *name; // x20
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5C061 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&StringLiteral_9251/*"NONE"*/);
    sub_1B885B0(&StringLiteral_15515/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/);
    byte_4A5C061 = 1;
  }
  entity = 0LL;
  if ( ViewWaveEnemyEntity__IsHideName(this, method) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_15515/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/, 0LL);
  }
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v6 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, this->fields.questId, 0LL);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v7 = clsQuestCheck__IsQuestClear(Instance, this->fields.questId, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_29;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, this->fields.questId, v6 + !v7, 0LL) )
    goto LABEL_22;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_29;
  Instance = (clsQuestCheck_o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0LL);
  if ( !Instance )
    goto LABEL_29;
  v8 = Instance;
  if ( !Instance->fields.cQuestReleaseListP )
    goto LABEL_22;
  v9 = System_Array__IndexOf_int_(
         (System_Int32_array *)Instance,
         this->fields.npcSvtId,
         (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_22;
  v10 = v9;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_29;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0LL);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != LODWORD(v8->fields.cQuestReleaseListP)) )
  {
LABEL_22:
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
LABEL_29:
    sub_1B8880C(Instance, v5);
  }
  if ( v10 >= max_length )
    sub_1B88814(EnemyInfoOverwriteNpcSvtNameList, v12);
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v10];
}


int32_t __fastcall ViewWaveEnemyEntity__GetEnemyNameEffect(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C062 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19025/*"enemyNameEffect"*/);
    byte_4A5C062 = 1;
  }
  return ViewWaveEnemyEntity__GetScript(this, (System_String_o *)StringLiteral_19025/*"enemyNameEffect"*/, 0, v2);
}


int32_t __fastcall ViewWaveEnemyEntity__GetScript(
        ViewWaveEnemyEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  ViewWaveEnemyEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4A5C063 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5C063 = 1;
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
  return ViewWaveEnemyEntity__IsDispDanger(v13, v14);
}


bool __fastcall ViewWaveEnemyEntity__IsDispDanger(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C064 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24560/*"viewWaveEnemyDispDanger"*/);
    byte_4A5C064 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_24560/*"viewWaveEnemyDispDanger"*/, 0, 0LL) > 0;
}


bool __fastcall ViewWaveEnemyEntity__IsHideName(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  int32_t IntValue; // w0
  int32_t v4; // w19
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v7; // x1

  if ( (byte_4A5C065 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24561/*"viewWaveEnemyHideName"*/);
    byte_4A5C065 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_24561/*"viewWaveEnemyHideName"*/, 0, 0LL);
  if ( IntValue < 1 )
    return 0;
  v4 = IntValue;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    sub_1B8880C(UserId, v7);
  return UserQuestMaster__getClearCountsFromId((UserQuestMaster_o *)Master_object, UserId, v4, 0LL) == 0;
}


bool __fastcall ViewWaveEnemyEntity__IsIconIdUnique(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  int32_t limitCount; // w8
  int32_t svtId; // w20
  ViewWaveEnemyEntity_c *v5; // x0

  if ( (byte_4A5C060 & 1) == 0 )
  {
    sub_1B885B0(&ViewWaveEnemyEntity_TypeInfo);
    byte_4A5C060 = 1;
  }
  limitCount = this->fields.limitCount;
  if ( limitCount > 9 )
    return 0;
  svtId = this->fields.svtId;
  v5 = ViewWaveEnemyEntity_TypeInfo;
  if ( !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo);
    v5 = ViewWaveEnemyEntity_TypeInfo;
    limitCount = this->fields.limitCount;
  }
  return limitCount + v5->static_fields->SVT_ID_TO_ICON_ID * svtId != this->fields.iconId;
}