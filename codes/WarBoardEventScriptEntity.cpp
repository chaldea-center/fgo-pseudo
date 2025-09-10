void WarBoardEventScriptEntity___ctor(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2844D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2844D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardEventScriptEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4C2844C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C2844C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_4C28439 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16653/*"actionType"*/);
    byte_4C28439 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16653/*"actionType"*/, 0);
}


System_Int32_array_array *WarBoardEventScriptEntity__GetActorEffectPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array_array *resValue; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2844A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16659/*"actorEffectPieceIndex"*/);
    byte_4C2844A = 1;
  }
  resValue = 0;
  if ( EntityScriptUtil__TryGet2DimensionalIntArray(
         this->fields.script,
         (System_String_o *)StringLiteral_16659/*"actorEffectPieceIndex"*/,
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
  if ( (byte_4C2843A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16718/*"aiId"*/);
    byte_4C2843A = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16718/*"aiId"*/, 0);
}


System_String_o *WarBoardEventScriptEntity__GetAnimationName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C28441 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16781/*"animationName"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28441 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_16781/*"animationName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t WarBoardEventScriptEntity__GetBossIdx(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2842E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17348/*"bossIdx"*/);
    byte_4C2842E = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17348/*"bossIdx"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetBossProcessType(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C28447 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17349/*"bossProcessType"*/);
    byte_4C28447 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17349/*"bossProcessType"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetBreakPointDamageType(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C28436 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15576/*"WarBoardBreakPointDamage"*/);
    byte_4C28436 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_15576/*"WarBoardBreakPointDamage"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetChangeWinCondition(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C28448 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17813/*"changeWinCondition"*/);
    byte_4C28448 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17813/*"changeWinCondition"*/, -1, v2);
}


System_String_o *WarBoardEventScriptEntity__GetEffect(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_4C2842A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18862/*"effect"*/);
    byte_4C2842A = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18862/*"effect"*/, defVal, 0);
}


int32_t WarBoardEventScriptEntity__GetEffectId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C28428 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18911/*"effectId"*/);
    byte_4C28428 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18911/*"effectId"*/, -1, v2);
}


System_Int32_array *WarBoardEventScriptEntity__GetEffectIds(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C28429 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18912/*"effectIds"*/);
    byte_4C28429 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_18912/*"effectIds"*/, 0);
}


int32_t WarBoardEventScriptEntity__GetForceId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C28431 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19542/*"forceId"*/);
    byte_4C28431 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19542/*"forceId"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetGroupId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C28430 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19897/*"groupId"*/);
    byte_4C28430 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19897/*"groupId"*/, -1, v2);
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

  if ( (byte_4C2842C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&long_TypeInfo);
    byte_4C2842C = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C2D6EC(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
  sub_1C2D9AC(Item);
  return WarBoardEventScriptEntity__GetSkillId(v13, v14);
}


bool WarBoardEventScriptEntity__GetIsIncludeDeadPiece(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C28446 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20913/*"isIncludeDeadPiece"*/);
    byte_4C28446 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20913/*"isIncludeDeadPiece"*/, -1, v2) == 1;
}


bool WarBoardEventScriptEntity__GetIsPlaySkillSe(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2844B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20926/*"isPlaySkillSe"*/);
    byte_4C2844B = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20926/*"isPlaySkillSe"*/, -1, v2) == 1;
}


int32_t WarBoardEventScriptEntity__GetIsStop(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C28442 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20946/*"isStop"*/);
    byte_4C28442 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20946/*"isStop"*/, 0, v2);
}


bool WarBoardEventScriptEntity__GetNoActorEffect(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C28445 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22221/*"noActorEffect"*/);
    byte_4C28445 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22221/*"noActorEffect"*/, -1, v2) == 1;
}


bool WarBoardEventScriptEntity__GetNoMoveLastPieceCamera(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2843F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22226/*"noMoveLastPieceCamera"*/);
    byte_4C2843F = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22226/*"noMoveLastPieceCamera"*/, -1, v2) == 1;
}


bool WarBoardEventScriptEntity__GetNoMoveTargetCamera(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2843E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22227/*"noMoveTargetCamera"*/);
    byte_4C2843E = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22227/*"noMoveTargetCamera"*/, -1, v2) == 1;
}


System_String_o *WarBoardEventScriptEntity__GetObjectName(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C28440 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22337/*"objectName"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28440 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22337/*"objectName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *WarBoardEventScriptEntity__GetOverlayEffectMessage(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2843D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22502/*"overlayEffectMessage"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2843D = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22502/*"overlayEffectMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *WarBoardEventScriptEntity__GetOverlayEffectPrefabName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2843C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22503/*"overlayEffectPrefabName"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2843C = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22503/*"overlayEffectPrefabName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_Int32_array *WarBoardEventScriptEntity__GetPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C28438 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22679/*"pieceIndex"*/);
    byte_4C28438 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22679/*"pieceIndex"*/, 0);
}


System_Int32_array *WarBoardEventScriptEntity__GetPieceIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C28424 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22681/*"pieceIndexes"*/);
    byte_4C28424 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22681/*"pieceIndexes"*/, 0);
}


int32_t WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C28443 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22694/*"playAfterCurrentAnim"*/);
    byte_4C28443 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22694/*"playAfterCurrentAnim"*/, 0, v2);
}


System_String_o *WarBoardEventScriptEntity__GetSeName(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2842B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23208/*"seName"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2842B = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_23208/*"seName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t WarBoardEventScriptEntity__GetSkillId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C28426 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23494/*"skillId"*/);
    byte_4C28426 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23494/*"skillId"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetSkillLv(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C28427 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23495/*"skillLv"*/);
    byte_4C28427 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23495/*"skillLv"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetSquareIndex(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C28425 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23602/*"squareIndex"*/);
    byte_4C28425 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23602/*"squareIndex"*/, -1, v2);
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

  if ( (byte_4C28437 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&StringLiteral_23605/*"squareIndexGroup"*/);
    byte_4C28437 = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23605/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return 0;
  v5 = IntFromScript;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_object
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     (WarBoardSquareIndexGroupMaster_o *)Master_object,
                     v5,
                     HIDWORD(Instance[10].fields._items),
                     v9)) == 0 )
  {
    sub_1C2D6EC(Instance, v8);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4C28434 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&StringLiteral_23605/*"squareIndexGroup"*/);
    sub_1C2D490(&StringLiteral_23607/*"squareIndexes"*/);
    byte_4C28434 = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23605/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23607/*"squareIndexes"*/, 0);
  v5 = IntFromScript;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_object
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     (WarBoardSquareIndexGroupMaster_o *)Master_object,
                     v5,
                     HIDWORD(Instance[10].fields._items),
                     v9)) == 0 )
  {
    sub_1C2D6EC(Instance, v8);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v10; // x2
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0

  if ( (byte_4C28435 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&int___TypeInfo);
    byte_4C28435 = 1;
  }
  SquareIndexes = (System_Collections_ICollection_o *)WarBoardEventScriptEntity__GetSquareIndexes(this, method);
  if ( BasicHelper__IsNullOrEmpty(SquareIndexes, 0) )
  {
    SquareIndex = WarBoardEventScriptEntity__GetSquareIndex(this, v4);
    if ( SquareIndex < 1 )
    {
      v11 = Method_System_Array_Empty_int___;
      v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v12 )
      {
        sub_1C7DC00(Method_System_Array_Empty_int___);
        v12 = v11[7];
      }
      v13 = *(_QWORD *)(v12 + 16);
      if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
        v13 = sub_1C7DBA4(inited);
      if ( !*(_DWORD *)(v13 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v13);
      v14 = *(_QWORD *)(v11[7] + 16LL);
      if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
        v14 = sub_1C7DBA4(inited);
      return **(System_Int32_array ***)(v14 + 184);
    }
    else
    {
      v7 = SquareIndex;
      v8 = sub_1C2D538(int___TypeInfo, 1);
      if ( !v8 )
        sub_1C2D6EC(0, v9);
      SquareIndexes = (System_Collections_ICollection_o *)v8;
      if ( !*(_DWORD *)(v8 + 24) )
        sub_1C2D6F4(v8, v9, v10);
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

  if ( (byte_4C2843B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22995/*"reinforcements"*/);
    byte_4C2843B = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22995/*"reinforcements"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetStatus(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2842F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23663/*"status"*/);
    byte_4C2842F = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23663/*"status"*/, -1, v2);
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

  if ( (byte_4C2842D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&string_TypeInfo);
    byte_4C2842D = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_1C2D6EC(0, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)key,
           (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1C2D9AC(Item);
  return (System_String_o *)WarBoardEventScriptEntity__GetBossIdx(v12, v13);
}


float WarBoardEventScriptEntity__GetTargetAllCameraSize(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C28449 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23972/*"targetAllCameraSize"*/);
    byte_4C28449 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_23972/*"targetAllCameraSize"*/, 0.0, 0);
}


System_String_o *WarBoardEventScriptEntity__GetUiType(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_4C28432 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24223/*"type"*/);
    byte_4C28432 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_24223/*"type"*/, defVal, 0);
}


bool WarBoardEventScriptEntity__IsDisp(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C28433 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18632/*"disp"*/);
    byte_4C28433 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18632/*"disp"*/, 1, 0) == 1;
}


bool WarBoardEventScriptEntity__IsUseHoldReinforcements(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C28444 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20951/*"isUseHoldReinforcements"*/);
    byte_4C28444 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20951/*"isUseHoldReinforcements"*/, -1, v2) > 0;
}