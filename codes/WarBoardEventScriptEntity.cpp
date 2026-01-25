void WarBoardEventScriptEntity___ctor(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF7E0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF7E0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardEventScriptEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4CEF7DF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEF7DF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *WarBoardEventScriptEntity__CreatePrimaryKey(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardEventScriptEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}


System_Int32_array *WarBoardEventScriptEntity__GetActionTypes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF7CC & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_16720/*"actionType"*/);
    byte_4CEF7CC = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16720/*"actionType"*/, 0);
}


System_Int32_array_array *WarBoardEventScriptEntity__GetActorEffectPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array_array *resValue; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEF7DD & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_16726/*"actorEffectPieceIndex"*/);
    byte_4CEF7DD = 1;
  }
  resValue = 0;
  if ( EntityScriptUtil__TryGet2DimensionalIntArray(
         this->fields.script,
         (System_String_o *)StringLiteral_16726/*"actorEffectPieceIndex"*/,
         &resValue,
         0) )
  {
    return resValue;
  }
  else
  {
    return 0;
  }
}


System_Int32_array *WarBoardEventScriptEntity__GetAiIds(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF7CD & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_16801/*"aiId"*/);
    byte_4CEF7CD = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16801/*"aiId"*/, 0);
}


System_String_o *WarBoardEventScriptEntity__GetAnimationName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7D4 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_16866/*"animationName"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF7D4 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_16866/*"animationName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t WarBoardEventScriptEntity__GetBossIdx(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7C1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17439/*"bossIdx"*/);
    byte_4CEF7C1 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17439/*"bossIdx"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetBossProcessType(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7DA & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17440/*"bossProcessType"*/);
    byte_4CEF7DA = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17440/*"bossProcessType"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetBreakPointDamageType(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7C9 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_15637/*"WarBoardBreakPointDamage"*/);
    byte_4CEF7C9 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_15637/*"WarBoardBreakPointDamage"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetChangeWinCondition(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7DB & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17911/*"changeWinCondition"*/);
    byte_4CEF7DB = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17911/*"changeWinCondition"*/, -1, v2);
}


System_String_o *WarBoardEventScriptEntity__GetEffect(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_4CEF7BD & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19000/*"effect"*/);
    byte_4CEF7BD = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19000/*"effect"*/, defVal, 0);
}


int32_t WarBoardEventScriptEntity__GetEffectId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7BB & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19049/*"effectId"*/);
    byte_4CEF7BB = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19049/*"effectId"*/, -1, v2);
}


System_Int32_array *WarBoardEventScriptEntity__GetEffectIds(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF7BC & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19050/*"effectIds"*/);
    byte_4CEF7BC = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_19050/*"effectIds"*/, 0);
}


int32_t WarBoardEventScriptEntity__GetForceId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7C4 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19713/*"forceId"*/);
    byte_4CEF7C4 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19713/*"forceId"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetGroupId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7C3 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20071/*"groupId"*/);
    byte_4CEF7C3 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20071/*"groupId"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetIntFromScript(
        WarBoardEventScriptEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  WarBoardEventScriptEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4CEF7BF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C7BAE8(&long_TypeInfo);
    byte_4CEF7BF = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C7BD40(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
  sub_1C7C0DC(Item);
  return WarBoardEventScriptEntity__GetSkillId(v13, v14);
}


bool WarBoardEventScriptEntity__GetIsIncludeDeadPiece(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7D9 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21104/*"isIncludeDeadPiece"*/);
    byte_4CEF7D9 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21104/*"isIncludeDeadPiece"*/, -1, v2) == 1;
}


bool WarBoardEventScriptEntity__GetIsPlaySkillSe(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7DE & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21122/*"isPlaySkillSe"*/);
    byte_4CEF7DE = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21122/*"isPlaySkillSe"*/, -1, v2) == 1;
}


int32_t WarBoardEventScriptEntity__GetIsStop(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7D5 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21142/*"isStop"*/);
    byte_4CEF7D5 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21142/*"isStop"*/, 0, v2);
}


bool WarBoardEventScriptEntity__GetNoActorEffect(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7D8 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22445/*"noActorEffect"*/);
    byte_4CEF7D8 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22445/*"noActorEffect"*/, -1, v2) == 1;
}


bool WarBoardEventScriptEntity__GetNoMoveLastPieceCamera(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7D2 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22451/*"noMoveLastPieceCamera"*/);
    byte_4CEF7D2 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22451/*"noMoveLastPieceCamera"*/, -1, v2) == 1;
}


bool WarBoardEventScriptEntity__GetNoMoveTargetCamera(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7D1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22452/*"noMoveTargetCamera"*/);
    byte_4CEF7D1 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22452/*"noMoveTargetCamera"*/, -1, v2) == 1;
}


System_String_o *WarBoardEventScriptEntity__GetObjectName(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7D3 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22565/*"objectName"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF7D3 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22565/*"objectName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *WarBoardEventScriptEntity__GetOverlayEffectMessage(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7D0 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22732/*"overlayEffectMessage"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF7D0 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22732/*"overlayEffectMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *WarBoardEventScriptEntity__GetOverlayEffectPrefabName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7CF & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22733/*"overlayEffectPrefabName"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF7CF = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22733/*"overlayEffectPrefabName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_Int32_array *WarBoardEventScriptEntity__GetPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF7CB & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22912/*"pieceIndex"*/);
    byte_4CEF7CB = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22912/*"pieceIndex"*/, 0);
}


System_Int32_array *WarBoardEventScriptEntity__GetPieceIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF7B7 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22914/*"pieceIndexes"*/);
    byte_4CEF7B7 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22914/*"pieceIndexes"*/, 0);
}


int32_t WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7D6 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22929/*"playAfterCurrentAnim"*/);
    byte_4CEF7D6 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22929/*"playAfterCurrentAnim"*/, 0, v2);
}


System_String_o *WarBoardEventScriptEntity__GetSeName(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7BE & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_23458/*"seName"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF7BE = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_23458/*"seName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t WarBoardEventScriptEntity__GetSkillId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7B9 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_23738/*"skillId"*/);
    byte_4CEF7B9 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23738/*"skillId"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetSkillLv(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7BA & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_23739/*"skillLv"*/);
    byte_4CEF7BA = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23739/*"skillLv"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetSquareIndex(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7B8 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_23849/*"squareIndex"*/);
    byte_4CEF7B8 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23849/*"squareIndex"*/, -1, v2);
}


System_Int32_array *WarBoardEventScriptEntity__GetSquareIndexGroup(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t IntFromScript; // w0
  int32_t v5; // w19
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4CEF7CA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_23852/*"squareIndexGroup"*/);
    byte_4CEF7CA = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23852/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return 0;
  v5 = IntFromScript;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_object
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     (WarBoardSquareIndexGroupMaster_o *)Master_object,
                     v5,
                     HIDWORD(Instance[10].fields._items),
                     v9)) == 0 )
  {
    sub_1C7BD40(Instance, v8);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *WarBoardEventScriptEntity__GetSquareIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t IntFromScript; // w0
  int32_t v5; // w20
  Il2CppObject *Master_object; // x19
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4CEF7C7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_23852/*"squareIndexGroup"*/);
    sub_1C7BAE8(&StringLiteral_23854/*"squareIndexes"*/);
    byte_4CEF7C7 = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23852/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23854/*"squareIndexes"*/, 0);
  v5 = IntFromScript;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_object
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     (WarBoardSquareIndexGroupMaster_o *)Master_object,
                     v5,
                     HIDWORD(Instance[10].fields._items),
                     v9)) == 0 )
  {
    sub_1C7BD40(Instance, v8);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *WarBoardEventScriptEntity__GetSquareIndicesGreedily(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *SquareIndexes; // x20
  const MethodInfo *v4; // x1
  int32_t SquareIndex; // w0
  long double inited; // q0
  int32_t v7; // w19
  __int64 v8; // x0
  __int64 v9; // x1
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0

  if ( (byte_4CEF7C8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_int___);
    sub_1C7BAE8(&int___TypeInfo);
    byte_4CEF7C8 = 1;
  }
  SquareIndexes = (System_Collections_ICollection_o *)WarBoardEventScriptEntity__GetSquareIndexes(this, method);
  if ( BasicHelper__IsNullOrEmpty(SquareIndexes, 0) )
  {
    SquareIndex = WarBoardEventScriptEntity__GetSquareIndex(this, v4);
    if ( SquareIndex < 1 )
    {
      v10 = Method_System_Array_Empty_int___;
      v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v11 )
      {
        sub_1C51BD8(Method_System_Array_Empty_int___);
        v11 = v10[7];
      }
      v12 = *(_QWORD *)(v11 + 16);
      if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
        v12 = sub_1C51B7C(inited);
      if ( !*(_DWORD *)(v12 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v12);
      v13 = *(_QWORD *)(v10[7] + 16LL);
      if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
        v13 = sub_1C51B7C(inited);
      return **(System_Int32_array ***)(v13 + 184);
    }
    else
    {
      v7 = SquareIndex;
      v8 = sub_1C7BB90(int___TypeInfo, 1);
      if ( !v8 )
        sub_1C7BD40(0, v9);
      SquareIndexes = (System_Collections_ICollection_o *)v8;
      if ( !*(_DWORD *)(v8 + 24) )
        sub_1C7BD48(v8);
      *(_DWORD *)(v8 + 32) = v7;
    }
  }
  return (System_Int32_array *)SquareIndexes;
}


int32_t WarBoardEventScriptEntity__GetStageReinforcementsId(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7CE & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_23237/*"reinforcements"*/);
    byte_4CEF7CE = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23237/*"reinforcements"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetStatus(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7C2 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_23910/*"status"*/);
    byte_4CEF7C2 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23910/*"status"*/, -1, v2);
}


System_String_o *WarBoardEventScriptEntity__GetStringFromScript(
        WarBoardEventScriptEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  Il2CppObject *Item; // x0
  WarBoardEventScriptEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4CEF7C0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C7BAE8(&string_TypeInfo);
    byte_4CEF7C0 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_1C7BD40(0, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)key,
           (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1C7C0DC(Item);
  return (System_String_o *)WarBoardEventScriptEntity__GetBossIdx(v12, v13);
}


float WarBoardEventScriptEntity__GetTargetAllCameraSize(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF7DC & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_24229/*"targetAllCameraSize"*/);
    byte_4CEF7DC = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_24229/*"targetAllCameraSize"*/, 0.0, 0);
}


System_String_o *WarBoardEventScriptEntity__GetUiType(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_4CEF7C5 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_24486/*"type"*/);
    byte_4CEF7C5 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_24486/*"type"*/, defVal, 0);
}


bool WarBoardEventScriptEntity__IsDisp(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF7C6 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18754/*"disp"*/);
    byte_4CEF7C6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18754/*"disp"*/, 1, 0) == 1;
}


bool WarBoardEventScriptEntity__IsUseHoldReinforcements(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF7D7 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21147/*"isUseHoldReinforcements"*/);
    byte_4CEF7D7 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21147/*"isUseHoldReinforcements"*/, -1, v2) > 0;
}