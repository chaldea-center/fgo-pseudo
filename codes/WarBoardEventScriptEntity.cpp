void __fastcall WarBoardEventScriptEntity___ctor(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4387BB6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4387BB6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardEventScriptEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4387BB5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4387BB5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardEventScriptEntity__CreatePrimaryKey(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardEventScriptEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetActionTypes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4387BA2 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16553/*"actionType"*/);
    byte_4387BA2 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16553/*"actionType"*/, 0LL);
}


System_Int32_array_array *__fastcall WarBoardEventScriptEntity__GetActorEffectPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array_array *resValue; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4387BB3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16561/*"actorEffectPieceIndex"*/);
    byte_4387BB3 = 1;
  }
  resValue = 0LL;
  if ( EntityScriptUtil__TryGet2DimensionalIntArray(
         this->fields.script,
         (System_String_o *)StringLiteral_16561/*"actorEffectPieceIndex"*/,
         &resValue,
         0LL) )
  {
    return resValue;
  }
  else
  {
    return 0LL;
  }
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetAiIds(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4387BA3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16614/*"aiId"*/);
    byte_4387BA3 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16614/*"aiId"*/, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetAnimationName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387BAA & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16669/*"animationName"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4387BAA = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_16669/*"animationName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossIdx(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387B97 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17225/*"bossIdx"*/);
    byte_4387B97 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17225/*"bossIdx"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossProcessType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387BB0 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17226/*"bossProcessType"*/);
    byte_4387BB0 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17226/*"bossProcessType"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBreakPointDamageType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387B9F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_15700/*"WarBoardBreakPointDamage"*/);
    byte_4387B9F = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_15700/*"WarBoardBreakPointDamage"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetChangeWinCondition(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387BB1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17630/*"changeWinCondition"*/);
    byte_4387BB1 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17630/*"changeWinCondition"*/, -1, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetEffect(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_4387B93 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18587/*"effect"*/);
    byte_4387B93 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18587/*"effect"*/, defVal, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetEffectId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387B91 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18634/*"effectId"*/);
    byte_4387B91 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18634/*"effectId"*/, -1, v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetEffectIds(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4387B92 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18635/*"effectIds"*/);
    byte_4387B92 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_18635/*"effectIds"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetForceId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387B9A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19182/*"forceId"*/);
    byte_4387B9A = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19182/*"forceId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetGroupId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387B99 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19473/*"groupId"*/);
    byte_4387B99 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19473/*"groupId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetIntFromScript(
        WarBoardEventScriptEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  WarBoardEventScriptEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4387B95 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&long_TypeInfo);
    byte_4387B95 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B7769C(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0();
  v11 = (WarBoardEventScriptEntity_o *)sub_B77990(Item);
  return WarBoardEventScriptEntity__GetSkillId(v11, v12);
}


bool __fastcall WarBoardEventScriptEntity__GetIsIncludeDeadPiece(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387BAF & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20343/*"isIncludeDeadPiece"*/);
    byte_4387BAF = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20343/*"isIncludeDeadPiece"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetIsPlaySkillSe(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387BB4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20351/*"isPlaySkillSe"*/);
    byte_4387BB4 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20351/*"isPlaySkillSe"*/, -1, v2) == 1;
}


int32_t __fastcall WarBoardEventScriptEntity__GetIsStop(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387BAB & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20364/*"isStop"*/);
    byte_4387BAB = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20364/*"isStop"*/, 0, v2);
}


bool __fastcall WarBoardEventScriptEntity__GetNoActorEffect(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387BAE & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21529/*"noActorEffect"*/);
    byte_4387BAE = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21529/*"noActorEffect"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveLastPieceCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387BA8 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21533/*"noMoveLastPieceCamera"*/);
    byte_4387BA8 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21533/*"noMoveLastPieceCamera"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveTargetCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387BA7 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21534/*"noMoveTargetCamera"*/);
    byte_4387BA7 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21534/*"noMoveTargetCamera"*/, -1, v2) == 1;
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetObjectName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387BA9 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21627/*"objectName"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4387BA9 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21627/*"objectName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectMessage(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387BA6 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21786/*"overlayEffectMessage"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4387BA6 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21786/*"overlayEffectMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectPrefabName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387BA5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21787/*"overlayEffectPrefabName"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4387BA5 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21787/*"overlayEffectPrefabName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4387BA1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21926/*"pieceIndex"*/);
    byte_4387BA1 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_21926/*"pieceIndex"*/, 0LL);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4387B8D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21928/*"pieceIndexes"*/);
    byte_4387B8D = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_21928/*"pieceIndexes"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387BAC & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21940/*"playAfterCurrentAnim"*/);
    byte_4387BAC = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21940/*"playAfterCurrentAnim"*/, 0, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetSeName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387B94 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22403/*"seName"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4387B94 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22403/*"seName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387B8F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22615/*"skillId"*/);
    byte_4387B8F = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22615/*"skillId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillLv(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387B90 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22616/*"skillLv"*/);
    byte_4387B90 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22616/*"skillLv"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSquareIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387B8E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22711/*"squareIndex"*/);
    byte_4387B8E = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22711/*"squareIndex"*/, -1, v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndexGroup(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t IntFromScript; // w0
  int32_t v5; // w19
  WarBoardSquareIndexGroupMaster_o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4387BA0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&StringLiteral_22714/*"squareIndexGroup"*/);
    byte_4387BA0 = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22714/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return 0LL;
  v5 = IntFromScript;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_WarQuestSelectionMaster
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     Master_WarQuestSelectionMaster,
                     v5,
                     HIDWORD(Instance[10].monitor),
                     0LL)) == 0LL )
  {
    sub_B7769C(Instance, v8);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t IntFromScript; // w0
  int32_t v5; // w20
  WarBoardSquareIndexGroupMaster_o *Master_WarQuestSelectionMaster; // x19
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4387B9D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&StringLiteral_22714/*"squareIndexGroup"*/);
    sub_B775C4(&StringLiteral_22716/*"squareIndexes"*/);
    byte_4387B9D = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22714/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22716/*"squareIndexes"*/, 0LL);
  v5 = IntFromScript;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_WarQuestSelectionMaster
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     Master_WarQuestSelectionMaster,
                     v5,
                     HIDWORD(Instance[10].monitor),
                     0LL)) == 0LL )
  {
    sub_B7769C(Instance, v8);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndicesGreedily(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *SquareIndexes; // x20
  const MethodInfo *v4; // x1
  int32_t SquareIndex; // w0
  int32_t v6; // w19
  __int64 v7; // x0
  __int64 v8; // x1
  _QWORD **v9; // x20
  __int64 v10; // x19
  __int16 v11; // w8
  __int64 v12; // x19
  __int64 v13; // x19
  __int64 v14; // x19
  __int64 v16; // x0

  if ( (byte_4387B9E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_int___);
    sub_B775C4(&int___TypeInfo);
    byte_4387B9E = 1;
  }
  SquareIndexes = (System_Collections_ICollection_o *)WarBoardEventScriptEntity__GetSquareIndexes(this, method);
  if ( BasicHelper__IsNullOrEmpty(SquareIndexes, 0LL) )
  {
    SquareIndex = WarBoardEventScriptEntity__GetSquareIndex(this, v4);
    if ( SquareIndex < 1 )
    {
      v9 = (_QWORD **)Method_System_Array_Empty_int___;
      v10 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v11 = *(_WORD *)(v10 + 306);
      if ( (v11 & 1) == 0 )
      {
        sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v11 = *(_WORD *)(v10 + 306);
      }
      if ( (v11 & 0x400) != 0 )
      {
        v12 = *v9[6];
        if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
          sub_B0F2C4(*v9[6]);
        if ( !*(_DWORD *)(v12 + 224) )
        {
          v13 = *v9[6];
          if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
            sub_B0F2C4(*v9[6]);
          j_il2cpp_runtime_class_init_0(v13);
        }
      }
      v14 = *v9[6];
      if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
        sub_B0F2C4(*v9[6]);
      return **(System_Int32_array ***)(v14 + 184);
    }
    else
    {
      v6 = SquareIndex;
      v7 = sub_B775DC(int___TypeInfo, 1LL);
      if ( !v7 )
        sub_B7769C(0LL, v8);
      SquareIndexes = (System_Collections_ICollection_o *)v7;
      if ( !*(_DWORD *)(v7 + 24) )
      {
        v16 = sub_B776C8(v7);
        sub_B77668(v16, 0LL);
      }
      *(_DWORD *)(v7 + 32) = v6;
    }
  }
  return (System_Int32_array *)SquareIndexes;
}


int32_t __fastcall WarBoardEventScriptEntity__GetStageReinforcementsId(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387BA4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22214/*"reinforcements"*/);
    byte_4387BA4 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22214/*"reinforcements"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetStatus(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387B98 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22776/*"status"*/);
    byte_4387B98 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22776/*"status"*/, -1, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetStringFromScript(
        WarBoardEventScriptEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  System_String_o *Item; // x0
  WarBoardEventScriptEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4387B96 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&string_TypeInfo);
    byte_4387B96 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_B7769C(0LL, v8);
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v9,
                              (System_Type_o *)key,
                              (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = Item;
  if ( !Item || Item->klass == string_TypeInfo )
    return defVal;
  v12 = (WarBoardEventScriptEntity_o *)sub_B77990(Item);
  return (System_String_o *)WarBoardEventScriptEntity__GetBossIdx(v12, v13);
}


float __fastcall WarBoardEventScriptEntity__GetTargetAllCameraSize(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4387BB2 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23080/*"targetAllCameraSize"*/);
    byte_4387BB2 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_23080/*"targetAllCameraSize"*/, 0.0, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetUiType(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_4387B9B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23314/*"type"*/);
    byte_4387B9B = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23314/*"type"*/, defVal, 0LL);
}


bool __fastcall WarBoardEventScriptEntity__IsDisp(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4387B9C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18387/*"disp"*/);
    byte_4387B9C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18387/*"disp"*/, 1, 0LL) == 1;
}


bool __fastcall WarBoardEventScriptEntity__IsUseHoldReinforcements(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4387BAD & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20369/*"isUseHoldReinforcements"*/);
    byte_4387BAD = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20369/*"isUseHoldReinforcements"*/, -1, v2) > 0;
}