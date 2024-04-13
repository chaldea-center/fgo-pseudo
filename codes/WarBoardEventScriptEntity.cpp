void __fastcall WarBoardEventScriptEntity___ctor(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E522A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E522A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardEventScriptEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E5229 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, idx, (_DWORD)method, v3);
    byte_42E5229 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5216 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16431/*"actionType"*/, (_DWORD)method, v2, v3);
    byte_42E5216 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16431/*"actionType"*/, 0LL);
}


System_Int32_array_array *__fastcall WarBoardEventScriptEntity__GetActorEffectPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array_array *resValue; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E5227 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16439/*"actorEffectPieceIndex"*/, (_DWORD)method, v2, v3);
    byte_42E5227 = 1;
  }
  resValue = 0LL;
  if ( EntityScriptUtil__TryGet2DimensionalIntArray(
         this->fields.script,
         (System_String_o *)StringLiteral_16439/*"actorEffectPieceIndex"*/,
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5217 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16492/*"aiId"*/, (_DWORD)method, v2, v3);
    byte_42E5217 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16492/*"aiId"*/, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetAnimationName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42E521E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16547/*"animationName"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E521E = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_16547/*"animationName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossIdx(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E520B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17096/*"bossIdx"*/, (_DWORD)method, v2, v3);
    byte_42E520B = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17096/*"bossIdx"*/, -1, v3);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossProcessType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E5224 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17097/*"bossProcessType"*/, (_DWORD)method, v2, v3);
    byte_42E5224 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17097/*"bossProcessType"*/, -1, v3);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBreakPointDamageType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E5213 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15599/*"WarBoardBreakPointDamage"*/, (_DWORD)method, v2, v3);
    byte_42E5213 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_15599/*"WarBoardBreakPointDamage"*/, -1, v3);
}


int32_t __fastcall WarBoardEventScriptEntity__GetChangeWinCondition(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E5225 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17500/*"changeWinCondition"*/, (_DWORD)method, v2, v3);
    byte_42E5225 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17500/*"changeWinCondition"*/, -1, v3);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetEffect(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E5207 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18450/*"effect"*/, (_DWORD)defVal, (_DWORD)method, v3);
    byte_42E5207 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18450/*"effect"*/, defVal, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetEffectId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E5205 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18497/*"effectId"*/, (_DWORD)method, v2, v3);
    byte_42E5205 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18497/*"effectId"*/, -1, v3);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetEffectIds(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5206 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18498/*"effectIds"*/, (_DWORD)method, v2, v3);
    byte_42E5206 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_18498/*"effectIds"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetForceId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E520E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19042/*"forceId"*/, (_DWORD)method, v2, v3);
    byte_42E520E = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19042/*"forceId"*/, -1, v3);
}


int32_t __fastcall WarBoardEventScriptEntity__GetGroupId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E520D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19326/*"groupId"*/, (_DWORD)method, v2, v3);
    byte_42E520D = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19326/*"groupId"*/, -1, v3);
}


int32_t __fastcall WarBoardEventScriptEntity__GetIntFromScript(
        WarBoardEventScriptEntity_o *this,
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  WarBoardEventScriptEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  v4 = defVal;
  if ( (byte_42E5209 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)key, defVal, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    sub_B5D5C4(&long_TypeInfo, v10, v11, v12);
    byte_42E5209 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(Item, v14);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0();
  v17 = (WarBoardEventScriptEntity_o *)sub_B5D990(Item);
  return WarBoardEventScriptEntity__GetSkillId(v17, v18);
}


bool __fastcall WarBoardEventScriptEntity__GetIsIncludeDeadPiece(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E5223 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20189/*"isIncludeDeadPiece"*/, (_DWORD)method, v2, v3);
    byte_42E5223 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20189/*"isIncludeDeadPiece"*/, -1, v3) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetIsPlaySkillSe(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E5228 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20197/*"isPlaySkillSe"*/, (_DWORD)method, v2, v3);
    byte_42E5228 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20197/*"isPlaySkillSe"*/, -1, v3) == 1;
}


int32_t __fastcall WarBoardEventScriptEntity__GetIsStop(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E521F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20210/*"isStop"*/, (_DWORD)method, v2, v3);
    byte_42E521F = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20210/*"isStop"*/, 0, v3);
}


bool __fastcall WarBoardEventScriptEntity__GetNoActorEffect(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E5222 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21370/*"noActorEffect"*/, (_DWORD)method, v2, v3);
    byte_42E5222 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21370/*"noActorEffect"*/, -1, v3) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveLastPieceCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E521C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21374/*"noMoveLastPieceCamera"*/, (_DWORD)method, v2, v3);
    byte_42E521C = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21374/*"noMoveLastPieceCamera"*/, -1, v3) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveTargetCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E521B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21375/*"noMoveTargetCamera"*/, (_DWORD)method, v2, v3);
    byte_42E521B = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21375/*"noMoveTargetCamera"*/, -1, v3) == 1;
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetObjectName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42E521D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21467/*"objectName"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E521D = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21467/*"objectName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectMessage(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42E521A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21626/*"overlayEffectMessage"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E521A = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21626/*"overlayEffectMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectPrefabName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42E5219 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21627/*"overlayEffectPrefabName"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E5219 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21627/*"overlayEffectPrefabName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5215 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21763/*"pieceIndex"*/, (_DWORD)method, v2, v3);
    byte_42E5215 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_21763/*"pieceIndex"*/, 0LL);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5201 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21765/*"pieceIndexes"*/, (_DWORD)method, v2, v3);
    byte_42E5201 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_21765/*"pieceIndexes"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E5220 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21777/*"playAfterCurrentAnim"*/, (_DWORD)method, v2, v3);
    byte_42E5220 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21777/*"playAfterCurrentAnim"*/, 0, v3);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetSeName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42E5208 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22234/*"seName"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E5208 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22234/*"seName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E5203 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22444/*"skillId"*/, (_DWORD)method, v2, v3);
    byte_42E5203 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22444/*"skillId"*/, -1, v3);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillLv(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E5204 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22445/*"skillLv"*/, (_DWORD)method, v2, v3);
    byte_42E5204 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22445/*"skillLv"*/, -1, v3);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSquareIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E5202 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22540/*"squareIndex"*/, (_DWORD)method, v2, v3);
    byte_42E5202 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22540/*"squareIndex"*/, -1, v3);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndexGroup(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
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
  int32_t IntFromScript; // w0
  int32_t v18; // w19
  WarBoardSquareIndexGroupMaster_o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v21; // x1

  if ( (byte_42E5214 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_22543/*"squareIndexGroup"*/, v14, v15, v16);
    byte_42E5214 = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22543/*"squareIndexGroup"*/, -1, v3);
  if ( IntFromScript == -1 )
    return 0LL;
  v18 = IntFromScript;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_WarQuestSelectionMaster
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     Master_WarQuestSelectionMaster,
                     v18,
                     HIDWORD(Instance[10].monitor),
                     0LL)) == 0LL )
  {
    sub_B5D69C(Instance, v21);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
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
  int32_t IntFromScript; // w0
  int32_t v21; // w20
  WarBoardSquareIndexGroupMaster_o *Master_WarQuestSelectionMaster; // x19
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v24; // x1

  if ( (byte_42E5211 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_22543/*"squareIndexGroup"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_22545/*"squareIndexes"*/, v17, v18, v19);
    byte_42E5211 = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22543/*"squareIndexGroup"*/, -1, v3);
  if ( IntFromScript == -1 )
    return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22545/*"squareIndexes"*/, 0LL);
  v21 = IntFromScript;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_WarQuestSelectionMaster
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     Master_WarQuestSelectionMaster,
                     v21,
                     HIDWORD(Instance[10].monitor),
                     0LL)) == 0LL )
  {
    sub_B5D69C(Instance, v24);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndicesGreedily(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_ICollection_o *SquareIndexes; // x20
  const MethodInfo *v9; // x1
  int32_t SquareIndex; // w0
  int32_t v11; // w19
  __int64 v12; // x0
  __int64 v13; // x1
  _QWORD **v14; // x20
  __int64 v15; // x19
  __int16 v16; // w8
  __int64 v17; // x19
  __int64 v18; // x19
  __int64 v19; // x19
  __int64 v21; // x0

  if ( (byte_42E5212 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    byte_42E5212 = 1;
  }
  SquareIndexes = (System_Collections_ICollection_o *)WarBoardEventScriptEntity__GetSquareIndexes(this, method);
  if ( BasicHelper__IsNullOrEmpty(SquareIndexes, 0LL) )
  {
    SquareIndex = WarBoardEventScriptEntity__GetSquareIndex(this, v9);
    if ( SquareIndex < 1 )
    {
      v14 = (_QWORD **)Method_System_Array_Empty_int___;
      v15 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v16 = *(_WORD *)(v15 + 306);
      if ( (v16 & 1) == 0 )
      {
        sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v16 = *(_WORD *)(v15 + 306);
      }
      if ( (v16 & 0x400) != 0 )
      {
        v17 = *v14[6];
        if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
          sub_AF52C4(*v14[6]);
        if ( !*(_DWORD *)(v17 + 224) )
        {
          v18 = *v14[6];
          if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
            sub_AF52C4(*v14[6]);
          j_il2cpp_runtime_class_init_0(v18);
        }
      }
      v19 = *v14[6];
      if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
        sub_AF52C4(*v14[6]);
      return **(System_Int32_array ***)(v19 + 184);
    }
    else
    {
      v11 = SquareIndex;
      v12 = sub_B5D5DC(int___TypeInfo, 1LL);
      if ( !v12 )
        sub_B5D69C(0LL, v13);
      SquareIndexes = (System_Collections_ICollection_o *)v12;
      if ( !*(_DWORD *)(v12 + 24) )
      {
        v21 = sub_B5D6C8(v12);
        sub_B5D668(v21, 0LL);
      }
      *(_DWORD *)(v12 + 32) = v11;
    }
  }
  return (System_Int32_array *)SquareIndexes;
}


int32_t __fastcall WarBoardEventScriptEntity__GetStageReinforcementsId(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E5218 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22045/*"reinforcements"*/, (_DWORD)method, v2, v3);
    byte_42E5218 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22045/*"reinforcements"*/, -1, v3);
}


int32_t __fastcall WarBoardEventScriptEntity__GetStatus(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E520C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22605/*"status"*/, (_DWORD)method, v2, v3);
    byte_42E520C = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22605/*"status"*/, -1, v3);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetStringFromScript(
        WarBoardEventScriptEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  WarBoardEventScriptEntity_o *v18; // x0
  const MethodInfo *v19; // x1

  v4 = defVal;
  if ( (byte_42E520A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)defVal,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    sub_B5D5C4(&string_TypeInfo, v10, v11, v12);
    byte_42E520A = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  v15 = this->fields.script;
  if ( !v15 )
    sub_B5D69C(0LL, v14);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15,
           (System_Type_o *)key,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v4 = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return v4;
  v18 = (WarBoardEventScriptEntity_o *)sub_B5D990(Item);
  return (System_String_o *)WarBoardEventScriptEntity__GetBossIdx(v18, v19);
}


float __fastcall WarBoardEventScriptEntity__GetTargetAllCameraSize(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5226 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22908/*"targetAllCameraSize"*/, (_DWORD)method, v2, v3);
    byte_42E5226 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_22908/*"targetAllCameraSize"*/, 0.0, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetUiType(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E520F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23141/*"type"*/, (_DWORD)defVal, (_DWORD)method, v3);
    byte_42E520F = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23141/*"type"*/, defVal, 0LL);
}


bool __fastcall WarBoardEventScriptEntity__IsDisp(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5210 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18252/*"disp"*/, (_DWORD)method, v2, v3);
    byte_42E5210 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18252/*"disp"*/, 1, 0LL) == 1;
}


bool __fastcall WarBoardEventScriptEntity__IsUseHoldReinforcements(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E5221 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20215/*"isUseHoldReinforcements"*/, (_DWORD)method, v2, v3);
    byte_42E5221 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20215/*"isUseHoldReinforcements"*/, -1, v3) > 0;
}