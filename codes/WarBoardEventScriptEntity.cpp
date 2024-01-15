void __fastcall WarBoardEventScriptEntity___ctor(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F63F4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F63F4 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardEventScriptEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_40F63F3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_40F63F3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_40F63E0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16172/*"actionType"*/, method);
    byte_40F63E0 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16172/*"actionType"*/, 0LL);
}


System_Int32_array_array *__fastcall WarBoardEventScriptEntity__GetActorEffectPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array_array *resValue; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F63F1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16180/*"actorEffectPieceIndex"*/, method);
    byte_40F63F1 = 1;
  }
  resValue = 0LL;
  if ( EntityScriptUtil__TryGet2DimensionalIntArray(
         this->fields.script,
         (System_String_o *)StringLiteral_16180/*"actorEffectPieceIndex"*/,
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
  if ( (byte_40F63E1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16229/*"aiId"*/, method);
    byte_40F63E1 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16229/*"aiId"*/, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetAnimationName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40F63E8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16285/*"animationName"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40F63E8 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_16285/*"animationName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossIdx(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63D5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16823/*"bossIdx"*/, method);
    byte_40F63D5 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_16823/*"bossIdx"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossProcessType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63EE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16824/*"bossProcessType"*/, method);
    byte_40F63EE = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_16824/*"bossProcessType"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBreakPointDamageType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63DD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15347/*"WarBoardBreakPointDamage"*/, method);
    byte_40F63DD = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_15347/*"WarBoardBreakPointDamage"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetChangeWinCondition(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63EF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17217/*"changeWinCondition"*/, method);
    byte_40F63EF = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17217/*"changeWinCondition"*/, -1, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetEffect(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_40F63D1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18153/*"effect"*/, defVal);
    byte_40F63D1 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18153/*"effect"*/, defVal, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetEffectId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63CF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18200/*"effectId"*/, method);
    byte_40F63CF = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18200/*"effectId"*/, -1, v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetEffectIds(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F63D0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18201/*"effectIds"*/, method);
    byte_40F63D0 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_18201/*"effectIds"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetForceId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63D8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18734/*"forceId"*/, method);
    byte_40F63D8 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18734/*"forceId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetGroupId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63D7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19013/*"groupId"*/, method);
    byte_40F63D7 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19013/*"groupId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetIntFromScript(
        WarBoardEventScriptEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  WarBoardEventScriptEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_40F63D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&long_TypeInfo, v8);
    byte_40F63D3 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v10 = this->fields.script;
  if ( !v10
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v13 = (WarBoardEventScriptEntity_o *)sub_B173C8(Item);
  return WarBoardEventScriptEntity__GetSkillId(v13, v14);
}


bool __fastcall WarBoardEventScriptEntity__GetIsIncludeDeadPiece(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63ED & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19854/*"isIncludeDeadPiece"*/, method);
    byte_40F63ED = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19854/*"isIncludeDeadPiece"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetIsPlaySkillSe(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63F2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19862/*"isPlaySkillSe"*/, method);
    byte_40F63F2 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19862/*"isPlaySkillSe"*/, -1, v2) == 1;
}


int32_t __fastcall WarBoardEventScriptEntity__GetIsStop(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63E9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19874/*"isStop"*/, method);
    byte_40F63E9 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19874/*"isStop"*/, 0, v2);
}


bool __fastcall WarBoardEventScriptEntity__GetNoActorEffect(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63EC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21005/*"noActorEffect"*/, method);
    byte_40F63EC = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21005/*"noActorEffect"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveLastPieceCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63E6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21008/*"noMoveLastPieceCamera"*/, method);
    byte_40F63E6 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21008/*"noMoveLastPieceCamera"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveTargetCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63E5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21009/*"noMoveTargetCamera"*/, method);
    byte_40F63E5 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21009/*"noMoveTargetCamera"*/, -1, v2) == 1;
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetObjectName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40F63E7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21099/*"objectName"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40F63E7 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21099/*"objectName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectMessage(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40F63E4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21257/*"overlayEffectMessage"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40F63E4 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21257/*"overlayEffectMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectPrefabName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40F63E3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21258/*"overlayEffectPrefabName"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40F63E3 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21258/*"overlayEffectPrefabName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F63DF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21382/*"pieceIndex"*/, method);
    byte_40F63DF = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_21382/*"pieceIndex"*/, 0LL);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F63CB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21384/*"pieceIndexes"*/, method);
    byte_40F63CB = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_21384/*"pieceIndexes"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63EA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21396/*"playAfterCurrentAnim"*/, method);
    byte_40F63EA = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21396/*"playAfterCurrentAnim"*/, 0, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetSeName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40F63D2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21843/*"seName"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40F63D2 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21843/*"seName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63CD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22050/*"skillId"*/, method);
    byte_40F63CD = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22050/*"skillId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillLv(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63CE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22051/*"skillLv"*/, method);
    byte_40F63CE = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22051/*"skillLv"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSquareIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63CC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22146/*"squareIndex"*/, method);
    byte_40F63CC = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22146/*"squareIndex"*/, -1, v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndexGroup(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t IntFromScript; // w0
  int32_t v9; // w19
  WarBoardSquareIndexGroupMaster_o *Master_WarQuestSelectionMaster; // x20
  WebViewManager_o *Instance; // x0
  System_Collections_Generic_List_int__o *StageList; // x0

  if ( (byte_40F63DE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_22149/*"squareIndexGroup"*/, v7);
    byte_40F63DE = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22149/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return 0LL;
  v9 = IntFromScript;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_WarQuestSelectionMaster
    || (StageList = WarBoardSquareIndexGroupMaster__GetStageList(
                      Master_WarQuestSelectionMaster,
                      v9,
                      HIDWORD(Instance[3].fields.webView),
                      0LL)) == 0LL )
  {
    sub_B170D4();
  }
  return System_Collections_Generic_List_int___ToArray(
           StageList,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t IntFromScript; // w0
  int32_t v10; // w20
  WarBoardSquareIndexGroupMaster_o *Master_WarQuestSelectionMaster; // x19
  WebViewManager_o *Instance; // x0
  System_Collections_Generic_List_int__o *StageList; // x0

  if ( (byte_40F63DB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_22149/*"squareIndexGroup"*/, v7);
    sub_B16FFC(&StringLiteral_22151/*"squareIndexes"*/, v8);
    byte_40F63DB = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22149/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22151/*"squareIndexes"*/, 0LL);
  v10 = IntFromScript;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_WarQuestSelectionMaster
    || (StageList = WarBoardSquareIndexGroupMaster__GetStageList(
                      Master_WarQuestSelectionMaster,
                      v10,
                      HIDWORD(Instance[3].fields.webView),
                      0LL)) == 0LL )
  {
    sub_B170D4();
  }
  return System_Collections_Generic_List_int___ToArray(
           StageList,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndicesGreedily(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_ICollection_o *SquareIndexes; // x20
  const MethodInfo *v5; // x1
  int32_t SquareIndex; // w0
  __int64 v7; // x2
  int32_t v8; // w19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD **v12; // x20
  __int64 v13; // x19
  __int16 v14; // w8
  __int64 v15; // x19
  __int64 v16; // x19
  __int64 v17; // x19

  if ( (byte_40F63DC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, method);
    sub_B16FFC(&int___TypeInfo, v3);
    byte_40F63DC = 1;
  }
  SquareIndexes = (System_Collections_ICollection_o *)WarBoardEventScriptEntity__GetSquareIndexes(this, method);
  if ( BasicHelper__IsNullOrEmpty(SquareIndexes, 0LL) )
  {
    SquareIndex = WarBoardEventScriptEntity__GetSquareIndex(this, v5);
    if ( SquareIndex < 1 )
    {
      v12 = (_QWORD **)Method_System_Array_Empty_int___;
      v13 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v14 = *(_WORD *)(v13 + 306);
      if ( (v14 & 1) == 0 )
      {
        sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v14 = *(_WORD *)(v13 + 306);
      }
      if ( (v14 & 0x400) != 0 )
      {
        v15 = *v12[6];
        if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
          sub_AAFCFC(*v12[6]);
        if ( !*(_DWORD *)(v15 + 224) )
        {
          v16 = *v12[6];
          if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
            sub_AAFCFC(*v12[6]);
          j_il2cpp_runtime_class_init_0(v16);
        }
      }
      v17 = *v12[6];
      if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
        sub_AAFCFC(*v12[6]);
      return **(System_Int32_array ***)(v17 + 184);
    }
    else
    {
      v8 = SquareIndex;
      v9 = sub_B17014(int___TypeInfo, 1LL, v7);
      if ( !v9 )
        sub_B170D4();
      SquareIndexes = (System_Collections_ICollection_o *)v9;
      if ( !*(_DWORD *)(v9 + 24) )
      {
        sub_B17100(v9, v10, v11);
        sub_B170A0();
      }
      *(_DWORD *)(v9 + 32) = v8;
    }
  }
  return (System_Int32_array *)SquareIndexes;
}


int32_t __fastcall WarBoardEventScriptEntity__GetStageReinforcementsId(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63E2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21659/*"reinforcements"*/, method);
    byte_40F63E2 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21659/*"reinforcements"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetStatus(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63D6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22210/*"status"*/, method);
    byte_40F63D6 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22210/*"status"*/, -1, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetStringFromScript(
        WarBoardEventScriptEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  System_String_o *Item; // x0
  WarBoardEventScriptEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_40F63D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&string_TypeInfo, v8);
    byte_40F63D4 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v10 = this->fields.script;
  if ( !v10 )
    sub_B170D4();
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                              (System_Type_o *)key,
                              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = Item;
  if ( !Item || Item->klass == string_TypeInfo )
    return defVal;
  v13 = (WarBoardEventScriptEntity_o *)sub_B173C8(Item);
  return (System_String_o *)WarBoardEventScriptEntity__GetBossIdx(v13, v14);
}


float __fastcall WarBoardEventScriptEntity__GetTargetAllCameraSize(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F63F0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22510/*"targetAllCameraSize"*/, method);
    byte_40F63F0 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_22510/*"targetAllCameraSize"*/, 0.0, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetUiType(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_40F63D9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22743/*"type"*/, defVal);
    byte_40F63D9 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22743/*"type"*/, defVal, 0LL);
}


bool __fastcall WarBoardEventScriptEntity__IsDisp(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F63DA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17959/*"disp"*/, method);
    byte_40F63DA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17959/*"disp"*/, 1, 0LL) == 1;
}


bool __fastcall WarBoardEventScriptEntity__IsUseHoldReinforcements(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F63EB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19879/*"isUseHoldReinforcements"*/, method);
    byte_40F63EB = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19879/*"isUseHoldReinforcements"*/, -1, v2) > 0;
}