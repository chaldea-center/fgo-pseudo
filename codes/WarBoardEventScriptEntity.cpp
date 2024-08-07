void __fastcall WarBoardEventScriptEntity___ctor(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FFAB0 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FFAB0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardEventScriptEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_49FFAAF & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_49FFAAF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_49FFA9C & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_16582/*"actionType"*/, method);
    byte_49FFA9C = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16582/*"actionType"*/, 0LL);
}


System_Int32_array_array *__fastcall WarBoardEventScriptEntity__GetActorEffectPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array_array *resValue; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FFAAD & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_16591/*"actorEffectPieceIndex"*/, method);
    byte_49FFAAD = 1;
  }
  resValue = 0LL;
  if ( EntityScriptUtil__TryGet2DimensionalIntArray(
         this->fields.script,
         (System_String_o *)StringLiteral_16591/*"actorEffectPieceIndex"*/,
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
  if ( (byte_49FFA9D & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_16650/*"aiId"*/, method);
    byte_49FFA9D = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16650/*"aiId"*/, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetAnimationName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FFAA4 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_16718/*"animationName"*/, method);
    sub_1B64A00(&StringLiteral_1/*""*/, v4);
    byte_49FFAA4 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_16718/*"animationName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossIdx(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFA91 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17317/*"bossIdx"*/, method);
    byte_49FFA91 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17317/*"bossIdx"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossProcessType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFAAA & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17318/*"bossProcessType"*/, method);
    byte_49FFAAA = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17318/*"bossProcessType"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBreakPointDamageType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFA99 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_15513/*"WarBoardBreakPointDamage"*/, method);
    byte_49FFA99 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_15513/*"WarBoardBreakPointDamage"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetChangeWinCondition(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFAAB & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17753/*"changeWinCondition"*/, method);
    byte_49FFAAB = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17753/*"changeWinCondition"*/, -1, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetEffect(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_49FFA8D & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18798/*"effect"*/, defVal);
    byte_49FFA8D = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18798/*"effect"*/, defVal, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetEffectId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFA8B & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18845/*"effectId"*/, method);
    byte_49FFA8B = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18845/*"effectId"*/, -1, v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetEffectIds(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FFA8C & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18846/*"effectIds"*/, method);
    byte_49FFA8C = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_18846/*"effectIds"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetForceId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFA94 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_19459/*"forceId"*/, method);
    byte_49FFA94 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19459/*"forceId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetGroupId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFA93 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_19778/*"groupId"*/, method);
    byte_49FFA93 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19778/*"groupId"*/, -1, v2);
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
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  WarBoardEventScriptEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_49FFA8F & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B64A00(&long_TypeInfo, v8);
    byte_49FFA8F = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64C5C(Item, v10);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
  sub_1B64F1C(Item);
  return WarBoardEventScriptEntity__GetSkillId(v15, v16);
}


bool __fastcall WarBoardEventScriptEntity__GetIsIncludeDeadPiece(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFAA9 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_20717/*"isIncludeDeadPiece"*/, method);
    byte_49FFAA9 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20717/*"isIncludeDeadPiece"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetIsPlaySkillSe(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFAAE & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_20726/*"isPlaySkillSe"*/, method);
    byte_49FFAAE = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20726/*"isPlaySkillSe"*/, -1, v2) == 1;
}


int32_t __fastcall WarBoardEventScriptEntity__GetIsStop(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFAA5 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_20740/*"isStop"*/, method);
    byte_49FFAA5 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20740/*"isStop"*/, 0, v2);
}


bool __fastcall WarBoardEventScriptEntity__GetNoActorEffect(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFAA8 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22002/*"noActorEffect"*/, method);
    byte_49FFAA8 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22002/*"noActorEffect"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveLastPieceCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFAA2 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22006/*"noMoveLastPieceCamera"*/, method);
    byte_49FFAA2 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22006/*"noMoveLastPieceCamera"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveTargetCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFAA1 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22007/*"noMoveTargetCamera"*/, method);
    byte_49FFAA1 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22007/*"noMoveTargetCamera"*/, -1, v2) == 1;
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetObjectName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FFAA3 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22112/*"objectName"*/, method);
    sub_1B64A00(&StringLiteral_1/*""*/, v4);
    byte_49FFAA3 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22112/*"objectName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectMessage(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FFAA0 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22283/*"overlayEffectMessage"*/, method);
    sub_1B64A00(&StringLiteral_1/*""*/, v4);
    byte_49FFAA0 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22283/*"overlayEffectMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectPrefabName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FFA9F & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22284/*"overlayEffectPrefabName"*/, method);
    sub_1B64A00(&StringLiteral_1/*""*/, v4);
    byte_49FFA9F = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22284/*"overlayEffectPrefabName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FFA9B & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22445/*"pieceIndex"*/, method);
    byte_49FFA9B = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22445/*"pieceIndex"*/, 0LL);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FFA87 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22447/*"pieceIndexes"*/, method);
    byte_49FFA87 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22447/*"pieceIndexes"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFAA6 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22459/*"playAfterCurrentAnim"*/, method);
    byte_49FFAA6 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22459/*"playAfterCurrentAnim"*/, 0, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetSeName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FFA8E & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22966/*"seName"*/, method);
    sub_1B64A00(&StringLiteral_1/*""*/, v4);
    byte_49FFA8E = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22966/*"seName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFA89 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_23248/*"skillId"*/, method);
    byte_49FFA89 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23248/*"skillId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillLv(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFA8A & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_23249/*"skillLv"*/, method);
    byte_49FFA8A = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23249/*"skillLv"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSquareIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFA88 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_23358/*"squareIndex"*/, method);
    byte_49FFA88 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23358/*"squareIndex"*/, -1, v2);
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
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3

  if ( (byte_49FFA9A & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, method);
    sub_1B64A00(&DataManager_TypeInfo, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B64A00(&StringLiteral_23361/*"squareIndexGroup"*/, v7);
    byte_49FFA9A = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23361/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return 0LL;
  v9 = IntFromScript;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_object
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     (WarBoardSquareIndexGroupMaster_o *)Master_object,
                     v9,
                     HIDWORD(Instance[10].fields._items),
                     v13)) == 0LL )
  {
    sub_1B64C5C(Instance, v12);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  Il2CppObject *Master_object; // x19
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3

  if ( (byte_49FFA97 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, method);
    sub_1B64A00(&DataManager_TypeInfo, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B64A00(&StringLiteral_23361/*"squareIndexGroup"*/, v7);
    sub_1B64A00(&StringLiteral_23363/*"squareIndexes"*/, v8);
    byte_49FFA97 = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23361/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23363/*"squareIndexes"*/, 0LL);
  v10 = IntFromScript;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_object
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     (WarBoardSquareIndexGroupMaster_o *)Master_object,
                     v10,
                     HIDWORD(Instance[10].fields._items),
                     v14)) == 0LL )
  {
    sub_1B64C5C(Instance, v13);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndicesGreedily(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_ICollection_o *SquareIndexes; // x20
  const MethodInfo *v5; // x1
  int32_t SquareIndex; // w0
  int32_t v7; // w19
  __int64 v8; // x0
  __int64 v9; // x1
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0

  if ( (byte_49FFA98 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Array_Empty_int___, method);
    sub_1B64A00(&int___TypeInfo, v3);
    byte_49FFA98 = 1;
  }
  SquareIndexes = (System_Collections_ICollection_o *)WarBoardEventScriptEntity__GetSquareIndexes(this, method);
  if ( BasicHelper__IsNullOrEmpty(SquareIndexes, 0LL) )
  {
    SquareIndex = WarBoardEventScriptEntity__GetSquareIndex(this, v5);
    if ( SquareIndex < 1 )
    {
      v10 = Method_System_Array_Empty_int___;
      v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v11 )
      {
        sub_1BB6938(Method_System_Array_Empty_int___);
        v11 = v10[7];
      }
      v12 = *(_QWORD *)(v11 + 16);
      if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
        v12 = sub_1BB68DC(v12);
      if ( !*(_DWORD *)(v12 + 224) )
        j_il2cpp_runtime_class_init_0(v12);
      v13 = *(_QWORD *)(v10[7] + 16LL);
      if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
        v13 = sub_1BB68DC(v13);
      return **(System_Int32_array ***)(v13 + 184);
    }
    else
    {
      v7 = SquareIndex;
      v8 = sub_1B64AA8(int___TypeInfo, 1LL);
      if ( !v8 )
        sub_1B64C5C(0LL, v9);
      SquareIndexes = (System_Collections_ICollection_o *)v8;
      if ( !*(_DWORD *)(v8 + 24) )
        sub_1B64C64(v8, v9);
      *(_DWORD *)(v8 + 32) = v7;
    }
  }
  return (System_Int32_array *)SquareIndexes;
}


int32_t __fastcall WarBoardEventScriptEntity__GetStageReinforcementsId(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFA9E & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22751/*"reinforcements"*/, method);
    byte_49FFA9E = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22751/*"reinforcements"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetStatus(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFA92 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_23429/*"status"*/, method);
    byte_49FFA92 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23429/*"status"*/, -1, v2);
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
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v11; // x0
  Il2CppObject *Item; // x0
  WarBoardEventScriptEntity_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_49FFA90 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B64A00(&string_TypeInfo, v8);
    byte_49FFA90 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v11 = this->fields.script;
  if ( !v11 )
    sub_1B64C5C(0LL, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v11,
           (Il2CppObject *)key,
           (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1B64F1C(Item);
  return (System_String_o *)WarBoardEventScriptEntity__GetBossIdx(v14, v15);
}


float __fastcall WarBoardEventScriptEntity__GetTargetAllCameraSize(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FFAAC & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_23757/*"targetAllCameraSize"*/, method);
    byte_49FFAAC = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_23757/*"targetAllCameraSize"*/, 0.0, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetUiType(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_49FFA95 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_24014/*"type"*/, defVal);
    byte_49FFA95 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_24014/*"type"*/, defVal, 0LL);
}


bool __fastcall WarBoardEventScriptEntity__IsDisp(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FFA96 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18568/*"disp"*/, method);
    byte_49FFA96 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18568/*"disp"*/, 1, 0LL) == 1;
}


bool __fastcall WarBoardEventScriptEntity__IsUseHoldReinforcements(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FFAA7 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_20744/*"isUseHoldReinforcements"*/, method);
    byte_49FFAA7 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20744/*"isUseHoldReinforcements"*/, -1, v2) > 0;
}