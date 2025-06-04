void __fastcall ViewWaveEnemyEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B03092 & 1) == 0 )
  {
    sub_1BC3008(&ViewWaveEnemyEntity_TypeInfo, v1);
    byte_4B03092 = 1;
  }
  ViewWaveEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void __fastcall ViewWaveEnemyEntity___ctor(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B03085 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B03085 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ViewWaveEnemyEntity___ctor_42234624(
        ViewWaveEnemyEntity_o *this,
        ViewWaveEnemyEntity_o *old,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_String_o *name; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B03086 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, old);
    byte_4B03086 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
  if ( !old )
    sub_1BC3264(v5, v6);
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&old->fields.questId;
  name = old->fields.name;
  this->fields.name = name;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.name, (int32_t)name, v7, v8);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&old->fields.classId;
  *(_QWORD *)&this->fields.displayType = *(_QWORD *)&old->fields.displayType;
  this->fields.wave = old->fields.wave;
  enemyScript = old->fields.enemyScript;
  this->fields.enemyScript = enemyScript;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.enemyScript, (int32_t)enemyScript, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ViewWaveEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  if ( (byte_4B03088 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&enemyId);
    byte_4B03088 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_2FFFFEC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ViewWaveEnemyEntity__CreatePrimaryKey(
        ViewWaveEnemyEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_4B03087 & 1) == 0 )
  {
    sub_1BC3008(&ViewWaveEnemyEntity_TypeInfo, method);
    byte_4B03087 = 1;
  }
  questId = this->fields.questId;
  enemyId = this->fields.enemyId;
  if ( !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo);
  return ViewWaveEnemyEntity__CreatePK(questId, enemyId, v2);
}


System_String_o *__fastcall ViewWaveEnemyEntity__GetBattleName(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  clsQuestCheck_o *Instance; // x0
  __int64 v14; // x1
  int32_t v15; // w20
  bool v16; // w21
  clsQuestCheck_o *v17; // x20
  int32_t v18; // w0
  unsigned int v19; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  il2cpp_array_size_t max_length; // w8
  System_String_o *name; // x20
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B0308A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_IndexOf_int___, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BC3008(&LocalizationManager_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BC3008(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_1BC3008(&StringLiteral_9194/*"NONE"*/, v10);
    sub_1BC3008(&StringLiteral_15369/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/, v11);
    byte_4B0308A = 1;
  }
  entity = 0LL;
  if ( ViewWaveEnemyEntity__IsHideName(this, method) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_15369/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/, 0LL);
  }
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v15 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, this->fields.questId, 0LL);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v16 = clsQuestCheck__IsQuestClear(Instance, this->fields.questId, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_29;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, this->fields.questId, v15 + !v16, 0LL) )
    goto LABEL_22;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_29;
  Instance = (clsQuestCheck_o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0LL);
  if ( !Instance )
    goto LABEL_29;
  v17 = Instance;
  if ( !Instance->fields.cQuestReleaseListP )
    goto LABEL_22;
  v18 = System_Array__IndexOf_int_(
          (System_Int32_array *)Instance,
          this->fields.npcSvtId,
          (const MethodInfo_31002A8 *)Method_System_Array_IndexOf_int___);
  if ( (v18 & 0x80000000) != 0 )
    goto LABEL_22;
  v19 = v18;
  Instance = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_29;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0LL);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != LODWORD(v17->fields.cQuestReleaseListP)) )
  {
LABEL_22:
    name = this->fields.name;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_9194/*"NONE"*/, 0LL) )
      return name;
    Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Instance = (clsQuestCheck_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        this->fields.svtId,
                                        (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Instance )
          return ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
      }
    }
LABEL_29:
    sub_1BC3264(Instance, v14);
  }
  if ( v19 >= max_length )
    sub_1BC326C(EnemyInfoOverwriteNpcSvtNameList, v21, v22);
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v19];
}


int32_t __fastcall ViewWaveEnemyEntity__GetEnemyNameEffect(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B0308B & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18856/*"enemyNameEffect"*/, method);
    byte_4B0308B = 1;
  }
  return ViewWaveEnemyEntity__GetScript(this, (System_String_o *)StringLiteral_18856/*"enemyNameEffect"*/, 0, v2);
}


int32_t __fastcall ViewWaveEnemyEntity__GetScript(
        ViewWaveEnemyEntity_o *this,
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
  ViewWaveEnemyEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4B0308C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BC3008(&long_TypeInfo, v8);
    byte_4B0308C = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BC3264(Item, v10);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
  sub_1BC3524(Item);
  return ViewWaveEnemyEntity__IsDispDanger(v15, v16);
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall ViewWaveEnemyEntity__GetUnknownDispInfo(
        ViewWaveEnemyEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B0308F & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_GetValue_Dictionary_string__object____, method);
    sub_1BC3008(&StringLiteral_14994/*"UnknownDispInfo"*/, v3);
    byte_4B0308F = 1;
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                      this->fields.enemyScript,
                                                                      (System_String_o *)StringLiteral_14994/*"UnknownDispInfo"*/,
                                                                      0LL,
                                                                      (const MethodInfo_2FEF8B0 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
}


bool __fastcall ViewWaveEnemyEntity__IsDispDanger(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B0308D & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_24454/*"viewWaveEnemyDispDanger"*/, method);
    byte_4B0308D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_24454/*"viewWaveEnemyDispDanger"*/, 0, 0LL) > 0;
}


bool __fastcall ViewWaveEnemyEntity__IsGrand(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B03091 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_20721/*"isGrandSvt"*/, method);
    byte_4B03091 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_20721/*"isGrandSvt"*/, 0, 0LL) > 0;
}


bool __fastcall ViewWaveEnemyEntity__IsHideName(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t IntValue; // w0
  int32_t v7; // w19
  __int64 v8; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v10; // x0

  if ( (byte_4B0308E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserQuestMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    sub_1BC3008(&StringLiteral_24455/*"viewWaveEnemyHideName"*/, v5);
    byte_4B0308E = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_24455/*"viewWaveEnemyHideName"*/, 0, 0LL);
  if ( IntValue < 1 )
    return 0;
  v7 = IntValue;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v8);
    byte_4AFC1F1 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_1BC3264(v10, v8);
  return UserQuestMaster__getClearCountsFromId(
           (UserQuestMaster_o *)Master_object,
           v10->static_fields->userIdNumber,
           v7,
           0LL) == 0;
}


bool __fastcall ViewWaveEnemyEntity__IsIconIdUnique(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  int32_t limitCount; // w8
  int32_t svtId; // w20
  ViewWaveEnemyEntity_c *v5; // x0

  if ( (byte_4B03089 & 1) == 0 )
  {
    sub_1BC3008(&ViewWaveEnemyEntity_TypeInfo, method);
    byte_4B03089 = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall ViewWaveEnemyEntity__IsUnknownDispInfo(
        ViewWaveEnemyEntity_o *this,
        int32_t kind,
        System_Collections_Generic_Dictionary_string__object__o *unknownDispInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  __int64 *v11; // x8

  if ( (byte_4B03090 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17827/*"className"*/, *(_QWORD *)&kind);
    sub_1BC3008(&StringLiteral_19190/*"faceSprite"*/, v7);
    sub_1BC3008(&StringLiteral_17825/*"classIconImage"*/, v8);
    sub_1BC3008(&StringLiteral_18855/*"enemyName"*/, v9);
    byte_4B03090 = 1;
  }
  if ( unknownDispInfo
    || (v10 = ViewWaveEnemyEntity__GetUnknownDispInfo(this, *(const MethodInfo **)&kind), (unknownDispInfo = v10) != 0LL) )
  {
    switch ( kind )
    {
      case 0:
        v11 = &StringLiteral_17825/*"classIconImage"*/;
        goto LABEL_11;
      case 1:
        v11 = &StringLiteral_17827/*"className"*/;
        goto LABEL_11;
      case 2:
        v11 = &StringLiteral_18855/*"enemyName"*/;
        goto LABEL_11;
      case 3:
        v11 = &StringLiteral_19190/*"faceSprite"*/;
LABEL_11:
        LOBYTE(v10) = EntityScriptUtil__GetIntValue(unknownDispInfo, (System_String_o *)*v11, 0, 0LL) > 0;
        break;
      default:
        LOBYTE(v10) = 0;
        break;
    }
  }
  return (char)v10;
}