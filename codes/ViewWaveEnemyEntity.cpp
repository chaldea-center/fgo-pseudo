void __fastcall ViewWaveEnemyEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE6FA & 1) == 0 )
  {
    sub_B5D5C4(&ViewWaveEnemyEntity_TypeInfo, v1, v2, v3);
    byte_42EE6FA = 1;
  }
  ViewWaveEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void __fastcall ViewWaveEnemyEntity___ctor(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE6F0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EE6F0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ViewWaveEnemyEntity___ctor_35270216(
        ViewWaveEnemyEntity_o *this,
        ViewWaveEnemyEntity_o *old,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_String_o *name; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42EE6F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)old, (_DWORD)method, v3);
    byte_42EE6F1 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  if ( !old )
    sub_B5D69C(v6, v7);
  this->fields.questId = old->fields.questId;
  this->fields.enemyId = old->fields.enemyId;
  name = old->fields.name;
  this->fields.name = name;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.name,
    (System_Int32_array **)name,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.classId = old->fields.classId;
  this->fields.svtId = old->fields.svtId;
  this->fields.limitCount = old->fields.limitCount;
  this->fields.iconId = old->fields.iconId;
  this->fields.displayType = old->fields.displayType;
  this->fields.npcSvtId = old->fields.npcSvtId;
  this->fields.wave = old->fields.wave;
  enemyScript = old->fields.enemyScript;
  this->fields.enemyScript = enemyScript;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.enemyScript,
    (System_Int32_array **)enemyScript,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


System_String_o *__fastcall ViewWaveEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EE6F3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, enemyId, (_DWORD)method, v3);
    byte_42EE6F3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ViewWaveEnemyEntity__CreatePrimaryKey(
        ViewWaveEnemyEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_42EE6F2 & 1) == 0 )
  {
    sub_B5D5C4(&ViewWaveEnemyEntity_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EE6F2 = 1;
  }
  questId = this->fields.questId;
  enemyId = this->fields.enemyId;
  if ( (BYTE3(ViewWaveEnemyEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo);
  }
  return ViewWaveEnemyEntity__CreatePK(questId, enemyId, v2);
}


System_String_o *__fastcall ViewWaveEnemyEntity__GetBattleName(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  clsQuestCheck_o *Master_WarQuestSelectionMaster; // x0
  __int64 v37; // x1
  int32_t v38; // w20
  bool v39; // w21
  clsQuestCheck_o *v40; // x20
  int32_t v41; // w0
  unsigned int v42; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  il2cpp_array_size_t max_length; // w8
  System_String_o *name; // x20
  __int64 v47; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE6F5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_9405/*"NONE"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_15522/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/, v32, v33, v34);
    byte_42EE6F5 = 1;
  }
  entity = 0LL;
  if ( ViewWaveEnemyEntity__IsHideName(this, method) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_15522/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/, 0LL);
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Master_WarQuestSelectionMaster = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_34;
  v38 = clsQuestCheck__mfGetQuestPhaseByQuestID(Master_WarQuestSelectionMaster, this->fields.questId, 0LL);
  Master_WarQuestSelectionMaster = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_34;
  v39 = clsQuestCheck__IsQuestClear(Master_WarQuestSelectionMaster, this->fields.questId, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_34;
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
          &entity,
          this->fields.questId,
          v38 + !v39,
          0LL) )
    goto LABEL_27;
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_34;
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_34;
  v40 = Master_WarQuestSelectionMaster;
  if ( !Master_WarQuestSelectionMaster->fields.cQuestReleaseListP )
    goto LABEL_27;
  v41 = System_Array__IndexOf_int_(
          (System_Int32_array *)Master_WarQuestSelectionMaster,
          this->fields.npcSvtId,
          (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
  if ( (v41 & 0x80000000) != 0 )
    goto LABEL_27;
  v42 = v41;
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_34;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0LL);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != LODWORD(v40->fields.cQuestReleaseListP)) )
  {
LABEL_27:
    name = this->fields.name;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_9405/*"NONE"*/, 0LL) )
      return name;
    Master_WarQuestSelectionMaster = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Master_WarQuestSelectionMaster,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                              this->fields.svtId,
                                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Master_WarQuestSelectionMaster )
          return ServantEntity__getBattleName((ServantEntity_o *)Master_WarQuestSelectionMaster, 0, -1, 0LL);
      }
    }
LABEL_34:
    sub_B5D69C(Master_WarQuestSelectionMaster, v37);
  }
  if ( v42 >= max_length )
  {
    v47 = sub_B5D6C8(EnemyInfoOverwriteNpcSvtNameList);
    sub_B5D668(v47, 0LL);
  }
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v42];
}


int32_t __fastcall ViewWaveEnemyEntity__GetEnemyNameEffect(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EE6F6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18597/*"enemyNameEffect"*/, (_DWORD)method, v2, v3);
    byte_42EE6F6 = 1;
  }
  return ViewWaveEnemyEntity__GetScript(this, (System_String_o *)StringLiteral_18597/*"enemyNameEffect"*/, 0, v3);
}


int32_t __fastcall ViewWaveEnemyEntity__GetScript(
        ViewWaveEnemyEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  ViewWaveEnemyEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  v4 = defVal;
  if ( (byte_42EE6F7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)key, defVal, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    sub_B5D5C4(&long_TypeInfo, v10, v11, v12);
    byte_42EE6F7 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(Item, v14);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  sub_B5D990(Item);
  return ViewWaveEnemyEntity__IsDispDanger(v17, v18);
}


bool __fastcall ViewWaveEnemyEntity__IsDispDanger(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE6F8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23466/*"viewWaveEnemyDispDanger"*/, (_DWORD)method, v2, v3);
    byte_42EE6F8 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_23466/*"viewWaveEnemyDispDanger"*/, 0, 0LL) > 0;
}


bool __fastcall ViewWaveEnemyEntity__IsHideName(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t IntValue; // w0
  int32_t v15; // w19
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v18; // x1

  if ( (byte_42EE6F9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserQuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_23467/*"viewWaveEnemyHideName"*/, v11, v12, v13);
    byte_42EE6F9 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_23467/*"viewWaveEnemyHideName"*/, 0, 0LL);
  if ( IntValue < 1 )
    return 0;
  v15 = IntValue;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(UserId, v18);
  return UserQuestMaster__getClearCountsFromId(Master_WarQuestSelectionMaster, UserId, v15, 0LL) == 0;
}


bool __fastcall ViewWaveEnemyEntity__IsIconIdUnique(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t limitCount; // w8
  int32_t svtId; // w20
  ViewWaveEnemyEntity_c *v8; // x0

  if ( (byte_42EE6F4 & 1) == 0 )
  {
    sub_B5D5C4(&ViewWaveEnemyEntity_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE6F4 = 1;
  }
  limitCount = this->fields.limitCount;
  if ( limitCount > 9 )
    return 0;
  svtId = this->fields.svtId;
  v8 = ViewWaveEnemyEntity_TypeInfo;
  if ( (BYTE3(ViewWaveEnemyEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo);
    v8 = ViewWaveEnemyEntity_TypeInfo;
    limitCount = this->fields.limitCount;
  }
  return limitCount + v8->static_fields->SVT_ID_TO_ICON_ID * svtId != this->fields.iconId;
}