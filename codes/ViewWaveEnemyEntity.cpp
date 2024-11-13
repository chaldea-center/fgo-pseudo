void __fastcall ViewWaveEnemyEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1711F & 1) == 0 )
  {
    sub_1BCA7E0(&ViewWaveEnemyEntity_TypeInfo, v1, v2);
    byte_4B1711F = 1;
  }
  ViewWaveEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void __fastcall ViewWaveEnemyEntity___ctor(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17115 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B17115 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ViewWaveEnemyEntity___ctor_41019416(
        ViewWaveEnemyEntity_o *this,
        ViewWaveEnemyEntity_o *old,
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
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B17116 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, old, method);
    byte_4B17116 = 1;
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
  *(_QWORD *)&this->fields.displayType = *(_QWORD *)&old->fields.displayType;
  this->fields.wave = old->fields.wave;
  enemyScript = old->fields.enemyScript;
  this->fields.enemyScript = enemyScript;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.enemyScript,
    (int64_t)enemyScript,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ViewWaveEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  if ( (byte_4B17118 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&enemyId, method);
    byte_4B17118 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ViewWaveEnemyEntity__CreatePrimaryKey(
        ViewWaveEnemyEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_4B17117 & 1) == 0 )
  {
    sub_1BCA7E0(&ViewWaveEnemyEntity_TypeInfo, method, v2);
    byte_4B17117 = 1;
  }
  questId = this->fields.questId;
  enemyId = this->fields.enemyId;
  if ( !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo, method);
  return ViewWaveEnemyEntity__CreatePK(questId, enemyId, v2);
}


System_String_o *__fastcall ViewWaveEnemyEntity__GetBattleName(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  clsQuestCheck_o *Instance; // x0
  __int64 v25; // x1
  int32_t v26; // w20
  __int64 v27; // x1
  bool v28; // w21
  clsQuestCheck_o *v29; // x20
  int32_t v30; // w0
  unsigned int v31; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  __int64 v33; // x1
  il2cpp_array_size_t max_length; // w8
  System_String_o *name; // x20
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1711A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v16, v17);
    sub_1BCA7E0(&StringLiteral_9382/*"NONE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_15682/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/, v20, v21);
    byte_4B1711A = 1;
  }
  entity = 0LL;
  if ( ViewWaveEnemyEntity__IsHideName(this, method) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    return LocalizationManager__Get((System_String_o *)StringLiteral_15682/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/, 0LL);
  }
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v26 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, this->fields.questId, 0LL);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v28 = clsQuestCheck__IsQuestClear(Instance, this->fields.questId, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_29;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, this->fields.questId, v26 + !v28, 0LL) )
    goto LABEL_22;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_29;
  Instance = (clsQuestCheck_o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0LL);
  if ( !Instance )
    goto LABEL_29;
  v29 = Instance;
  if ( !Instance->fields.cQuestReleaseListP )
    goto LABEL_22;
  v30 = System_Array__IndexOf_int_(
          (System_Int32_array *)Instance,
          this->fields.npcSvtId,
          (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
  if ( (v30 & 0x80000000) != 0 )
    goto LABEL_22;
  v31 = v30;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_29;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0LL);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != LODWORD(v29->fields.cQuestReleaseListP)) )
  {
LABEL_22:
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
LABEL_29:
    sub_1BCAA3C(Instance, v25);
  }
  if ( v31 >= max_length )
    sub_1BCAA44(EnemyInfoOverwriteNpcSvtNameList, v33);
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v31];
}


int32_t __fastcall ViewWaveEnemyEntity__GetEnemyNameEffect(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1711B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19222/*"enemyNameEffect"*/, method, v2);
    byte_4B1711B = 1;
  }
  return ViewWaveEnemyEntity__GetScript(this, (System_String_o *)StringLiteral_19222/*"enemyNameEffect"*/, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ViewWaveEnemyEntity__GetScript(
        ViewWaveEnemyEntity_o *this,
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
  ViewWaveEnemyEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  v4 = defVal;
  if ( (byte_4B1711C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, *(_QWORD *)&defVal);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&long_TypeInfo, v9, v10);
    byte_4B1711C = 1;
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
  return ViewWaveEnemyEntity__IsDispDanger(v17, v18);
}


bool __fastcall ViewWaveEnemyEntity__IsDispDanger(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1711D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24814/*"viewWaveEnemyDispDanger"*/, method, v2);
    byte_4B1711D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_24814/*"viewWaveEnemyDispDanger"*/, 0, 0LL) > 0;
}


bool __fastcall ViewWaveEnemyEntity__IsHideName(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t IntValue; // w0
  __int64 v11; // x1
  int32_t v12; // w19
  __int64 v13; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v16; // x1

  if ( (byte_4B1711E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserQuestMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_24815/*"viewWaveEnemyHideName"*/, v8, v9);
    byte_4B1711E = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_24815/*"viewWaveEnemyHideName"*/, 0, 0LL);
  if ( IntValue < 1 )
    return 0;
  v12 = IntValue;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    sub_1BCAA3C(UserId, v16);
  return UserQuestMaster__getClearCountsFromId((UserQuestMaster_o *)Master_object, UserId, v12, 0LL) == 0;
}


bool __fastcall ViewWaveEnemyEntity__IsIconIdUnique(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t limitCount; // w8
  int32_t svtId; // w20
  ViewWaveEnemyEntity_c *v6; // x0

  if ( (byte_4B17119 & 1) == 0 )
  {
    sub_1BCA7E0(&ViewWaveEnemyEntity_TypeInfo, method, v2);
    byte_4B17119 = 1;
  }
  limitCount = this->fields.limitCount;
  if ( limitCount > 9 )
    return 0;
  svtId = this->fields.svtId;
  v6 = ViewWaveEnemyEntity_TypeInfo;
  if ( !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo, method);
    v6 = ViewWaveEnemyEntity_TypeInfo;
    limitCount = this->fields.limitCount;
  }
  return limitCount + v6->static_fields->SVT_ID_TO_ICON_ID * svtId != this->fields.iconId;
}