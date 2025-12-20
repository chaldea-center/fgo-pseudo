void WarBoardEventScriptEntity___ctor(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DA3F & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2DA3F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardEventScriptEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4D2DA3E & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2DA3E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_4D2DA2B & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16718/*"actionType"*/);
    byte_4D2DA2B = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16718/*"actionType"*/, 0);
}


System_Int32_array_array *WarBoardEventScriptEntity__GetActorEffectPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array_array *resValue; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2DA3C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16724/*"actorEffectPieceIndex"*/);
    byte_4D2DA3C = 1;
  }
  resValue = 0;
  if ( EntityScriptUtil__TryGet2DimensionalIntArray(
         this->fields.script,
         (System_String_o *)StringLiteral_16724/*"actorEffectPieceIndex"*/,
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
  if ( (byte_4D2DA2C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16799/*"aiId"*/);
    byte_4D2DA2C = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16799/*"aiId"*/, 0);
}


System_String_o *WarBoardEventScriptEntity__GetAnimationName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA33 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16864/*"animationName"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DA33 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_16864/*"animationName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t WarBoardEventScriptEntity__GetBossIdx(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA20 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17437/*"bossIdx"*/);
    byte_4D2DA20 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17437/*"bossIdx"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetBossProcessType(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA39 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17438/*"bossProcessType"*/);
    byte_4D2DA39 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17438/*"bossProcessType"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetBreakPointDamageType(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA28 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_15636/*"WarBoardBreakPointDamage"*/);
    byte_4D2DA28 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_15636/*"WarBoardBreakPointDamage"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetChangeWinCondition(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA3A & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17911/*"changeWinCondition"*/);
    byte_4D2DA3A = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17911/*"changeWinCondition"*/, -1, v2);
}


System_String_o *WarBoardEventScriptEntity__GetEffect(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_4D2DA1C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19003/*"effect"*/);
    byte_4D2DA1C = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19003/*"effect"*/, defVal, 0);
}


int32_t WarBoardEventScriptEntity__GetEffectId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA1A & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19052/*"effectId"*/);
    byte_4D2DA1A = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19052/*"effectId"*/, -1, v2);
}


System_Int32_array *WarBoardEventScriptEntity__GetEffectIds(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2DA1B & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19053/*"effectIds"*/);
    byte_4D2DA1B = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_19053/*"effectIds"*/, 0);
}


int32_t WarBoardEventScriptEntity__GetForceId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA23 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19718/*"forceId"*/);
    byte_4D2DA23 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19718/*"forceId"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetGroupId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA22 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20076/*"groupId"*/);
    byte_4D2DA22 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20076/*"groupId"*/, -1, v2);
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

  if ( (byte_4D2DA1E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&long_TypeInfo);
    byte_4D2DA1E = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C942F0(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
  sub_1C9468C(Item);
  return WarBoardEventScriptEntity__GetSkillId(v13, v14);
}


bool WarBoardEventScriptEntity__GetIsIncludeDeadPiece(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA38 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21109/*"isIncludeDeadPiece"*/);
    byte_4D2DA38 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21109/*"isIncludeDeadPiece"*/, -1, v2) == 1;
}


bool WarBoardEventScriptEntity__GetIsPlaySkillSe(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA3D & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21125/*"isPlaySkillSe"*/);
    byte_4D2DA3D = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21125/*"isPlaySkillSe"*/, -1, v2) == 1;
}


int32_t WarBoardEventScriptEntity__GetIsStop(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA34 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21145/*"isStop"*/);
    byte_4D2DA34 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21145/*"isStop"*/, 0, v2);
}


bool WarBoardEventScriptEntity__GetNoActorEffect(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA37 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22450/*"noActorEffect"*/);
    byte_4D2DA37 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22450/*"noActorEffect"*/, -1, v2) == 1;
}


bool WarBoardEventScriptEntity__GetNoMoveLastPieceCamera(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA31 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22455/*"noMoveLastPieceCamera"*/);
    byte_4D2DA31 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22455/*"noMoveLastPieceCamera"*/, -1, v2) == 1;
}


bool WarBoardEventScriptEntity__GetNoMoveTargetCamera(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA30 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22456/*"noMoveTargetCamera"*/);
    byte_4D2DA30 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22456/*"noMoveTargetCamera"*/, -1, v2) == 1;
}


System_String_o *WarBoardEventScriptEntity__GetObjectName(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA32 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22569/*"objectName"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DA32 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22569/*"objectName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *WarBoardEventScriptEntity__GetOverlayEffectMessage(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA2F & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22736/*"overlayEffectMessage"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DA2F = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22736/*"overlayEffectMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *WarBoardEventScriptEntity__GetOverlayEffectPrefabName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA2E & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22737/*"overlayEffectPrefabName"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DA2E = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22737/*"overlayEffectPrefabName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_Int32_array *WarBoardEventScriptEntity__GetPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2DA2A & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22917/*"pieceIndex"*/);
    byte_4D2DA2A = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22917/*"pieceIndex"*/, 0);
}


System_Int32_array *WarBoardEventScriptEntity__GetPieceIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2DA16 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22919/*"pieceIndexes"*/);
    byte_4D2DA16 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22919/*"pieceIndexes"*/, 0);
}


int32_t WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA35 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22934/*"playAfterCurrentAnim"*/);
    byte_4D2DA35 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22934/*"playAfterCurrentAnim"*/, 0, v2);
}


System_String_o *WarBoardEventScriptEntity__GetSeName(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA1D & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23463/*"seName"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DA1D = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_23463/*"seName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t WarBoardEventScriptEntity__GetSkillId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA18 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23743/*"skillId"*/);
    byte_4D2DA18 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23743/*"skillId"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetSkillLv(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA19 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23744/*"skillLv"*/);
    byte_4D2DA19 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23744/*"skillLv"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetSquareIndex(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA17 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23853/*"squareIndex"*/);
    byte_4D2DA17 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23853/*"squareIndex"*/, -1, v2);
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

  if ( (byte_4D2DA29 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&StringLiteral_23856/*"squareIndexGroup"*/);
    byte_4D2DA29 = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23856/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return 0;
  v5 = IntFromScript;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_object
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     (WarBoardSquareIndexGroupMaster_o *)Master_object,
                     v5,
                     HIDWORD(Instance[10].fields._items),
                     v9)) == 0 )
  {
    sub_1C942F0(Instance, v8);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4D2DA26 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&StringLiteral_23856/*"squareIndexGroup"*/);
    sub_1C94098(&StringLiteral_23858/*"squareIndexes"*/);
    byte_4D2DA26 = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23856/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23858/*"squareIndexes"*/, 0);
  v5 = IntFromScript;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_object
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     (WarBoardSquareIndexGroupMaster_o *)Master_object,
                     v5,
                     HIDWORD(Instance[10].fields._items),
                     v9)) == 0 )
  {
    sub_1C942F0(Instance, v8);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4D2DA27 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_int___);
    sub_1C94098(&int___TypeInfo);
    byte_4D2DA27 = 1;
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
        sub_1C6A188(Method_System_Array_Empty_int___);
        v11 = v10[7];
      }
      v12 = *(_QWORD *)(v11 + 16);
      if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
        v12 = sub_1C6A12C(inited);
      if ( !*(_DWORD *)(v12 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v12);
      v13 = *(_QWORD *)(v10[7] + 16LL);
      if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
        v13 = sub_1C6A12C(inited);
      return **(System_Int32_array ***)(v13 + 184);
    }
    else
    {
      v7 = SquareIndex;
      v8 = sub_1C94140(int___TypeInfo, 1);
      if ( !v8 )
        sub_1C942F0(0, v9);
      SquareIndexes = (System_Collections_ICollection_o *)v8;
      if ( !*(_DWORD *)(v8 + 24) )
        sub_1C942F8(v8);
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

  if ( (byte_4D2DA2D & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23242/*"reinforcements"*/);
    byte_4D2DA2D = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23242/*"reinforcements"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetStatus(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA21 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23914/*"status"*/);
    byte_4D2DA21 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23914/*"status"*/, -1, v2);
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

  if ( (byte_4D2DA1F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&string_TypeInfo);
    byte_4D2DA1F = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_1C942F0(0, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)key,
           (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1C9468C(Item);
  return (System_String_o *)WarBoardEventScriptEntity__GetBossIdx(v12, v13);
}


float WarBoardEventScriptEntity__GetTargetAllCameraSize(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DA3B & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24231/*"targetAllCameraSize"*/);
    byte_4D2DA3B = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_24231/*"targetAllCameraSize"*/, 0.0, 0);
}


System_String_o *WarBoardEventScriptEntity__GetUiType(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_4D2DA24 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24488/*"type"*/);
    byte_4D2DA24 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_24488/*"type"*/, defVal, 0);
}


bool WarBoardEventScriptEntity__IsDisp(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DA25 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18753/*"disp"*/);
    byte_4D2DA25 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18753/*"disp"*/, 1, 0) == 1;
}


bool WarBoardEventScriptEntity__IsUseHoldReinforcements(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2DA36 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21150/*"isUseHoldReinforcements"*/);
    byte_4D2DA36 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21150/*"isUseHoldReinforcements"*/, -1, v2) > 0;
}